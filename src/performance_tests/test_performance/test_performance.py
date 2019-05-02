import roslaunch
import rospy
import os 

rospy.init_node('performance_test_node', anonymous=True)

rospy.set_param("/rate",100)
uuid = roslaunch.rlutil.get_or_generate_uuid(None, False)
roslaunch.configure_logging(uuid)

#test_freq = [100,200,400,500,800,900,1000]
test_freq = [1100,1400,1800,2000,2500,3000]
print("Running Combination 1")
print("C++ Publisher && C++ Subscriber")
for i in test_freq:
    rospy.set_param("/rate",i)
    print("########## Current Rate :",i)

    launch = roslaunch.parent.ROSLaunchParent(uuid, ["/home/arunjayan/assignment_workspace/src/performance_tests/launch/comination1_cpppub_cppsub.launch"])
    launch.start()
    rospy.loginfo("started....")
    print("########## Current Rate :",i)
    rospy.loginfo("Try rostopic hz cmd in another terminal")
    rospy.sleep(10)

    launch.shutdown()

    rospy.sleep(3)
    rospy.loginfo("stopped...")

print("Running Combination 2")
print("C++ Publisher && Python Subscriber")
for i in test_freq:
    rospy.set_param("/rate",i)

    launch = roslaunch.parent.ROSLaunchParent(uuid, ["/home/arunjayan/assignment_workspace/src/performance_tests/launch/comination2_cpppub_pysub.launch"])
    launch.start()
    rospy.loginfo("started....")
    print("########## Current Rate :",i)
    rospy.loginfo("Try rostopic hz cmd in another shell")
    rospy.sleep(10)

    launch.shutdown()

    rospy.sleep(3)
    rospy.loginfo("stopped...")

print("Running Combination 3")
print("Python Publisher && Python Subscriber")
for i in test_freq:
    rospy.set_param("/rate",i)
 
    launch = roslaunch.parent.ROSLaunchParent(uuid, ["/home/arunjayan/assignment_workspace/src/performance_tests/launch/comination3_pypub_pysub.launch"])
    launch.start()
    rospy.loginfo("started....")
    print("########## Current Rate :",i)
    rospy.loginfo("Try rostopic hz cmd in another shell")
    rospy.sleep(10)

    launch.shutdown()

    rospy.sleep(3)
    rospy.loginfo("stopped...")

print("Running Combination 2")
print("Python Publisher && C++ Subscriber")
for i in test_freq:
    rospy.set_param("/rate",i)
    

    launch = roslaunch.parent.ROSLaunchParent(uuid, ["/home/arunjayan/assignment_workspace/src/performance_tests/launch/comination4_pypub_cppsub.launch"])
    launch.start()
    rospy.loginfo("started....")
    print("########## Current Rate :",i)
    rospy.loginfo("Try rostopic hz cmd in another shell")
    rospy.sleep(10)

    launch.shutdown()

    rospy.sleep(3)
    rospy.loginfo("stopped...")