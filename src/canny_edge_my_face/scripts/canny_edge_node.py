#!/usr/bin/env python
from __future__ import print_function

import roslib
roslib.load_manifest('canny_edge_my_face')
import sys
import rospy
import cv2
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import numpy as np
class image_converter:

  def __init__(self):
    self.image_pub = rospy.Publisher("/canny_edge_my_face/image_canny",Image,queue_size=1)

    self.bridge = CvBridge()
    self.image_sub = rospy.Subscriber("/cv_camera_node/image_raw",Image,self.callback)

  def callback(self,data):
    try:
      cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
    except CvBridgeError as e:
      print(e)

    cv_edges = cv2.Canny(cv_image,50,200)
    edge_img = cv2.cvtColor(cv_image, cv2.COLOR_HSV2BGR)
    cv2.imshow("Image window", cv_edges)
    cv2.waitKey(3)

    try:
      self.image_pub.publish(self.bridge.cv2_to_imgmsg(cv_image, "bgr8"))
      rospy.loginfo("published!")
    except CvBridgeError as e:
      print(e)
      rospy.loginfo("error")

def main(args):
  ic = image_converter()
  rospy.init_node('canny_edge_node', anonymous=True)
  try:
    rospy.spin()
  except KeyboardInterrupt:
    print("Shutting down")
  cv2.destroyAllWindows()

if __name__ == '__main__':
    main(sys.argv)