#include "ros/ros.h"
#include "performance_tests/SuperAwesome.h"

void sub_callback(const performance_tests::SuperAwesome::ConstPtr& msg)
{
    ROS_INFO("[%s]",msg->str.c_str());
}

int main(int argc , char ** argv)
{
    ros::init(argc,argv,"cpp_subscriber");

    ros::NodeHandle node;

    ros::Subscriber sub = node.subscribe("/super_awesome_topic",1000,sub_callback);

    ros::spin();

    return 0;
}