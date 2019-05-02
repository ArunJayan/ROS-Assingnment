#!/usr/bin/env python

import rospy
from performance_tests.msg import SuperAwesome


def callback_sub(msg):
    rospy.loginfo(msg.str)

def main():
    rospy.init_node("py_subscriber")
    
    rospy.Subscriber('/super_awesome_topic', SuperAwesome, callback_sub)
    rospy.spin()

if __name__ == "__main__":
    main()