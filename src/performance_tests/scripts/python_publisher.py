#!/usr/bin/env python

import rospy
from performance_tests.msg import SuperAwesome


def main():
    global rate_val
    rospy.init_node("py_publisher")
    rospy.loginfo("ROS Node : py_publisher")

    msg_awesome = SuperAwesome()
    publisher = rospy.Publisher('/super_awesome_topic',SuperAwesome,queue_size=1)
    rate_val = rospy.get_param('/rate')
    rate = rospy.Rate(rate_val)

    while not rospy.is_shutdown():
        msg_awesome.str = "Robotics is Awesome"
        publisher.publish(msg_awesome)
        rate.sleep()

if __name__ == "__main__":
    main()    