#!/usr/bin/env python

import rospy
from assignment1.srv import changeRate

def callback_changeRate(request):
    try:
        r = request.r
        rospy.loginfo("Rate : "+str(r))
        



def main():
    rospy.init_node("assignment1_services")
    rospy.loginfo("ROS Node : assignment1_services")

    s1 = rospy.Service('/change_publish_rate',changeRate,callback_changeRate)
    rospy.loginfo("Change Publish Rate ")
    rospy.spin()


if __name__ == "__main__":
    main()  