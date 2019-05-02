#include "ros/ros.h"
#include <std_msgs/Float64.h>
#include "performance_tests/SuperAwesome.h"

int main(int argc, char **argv)
{
    
    ros::init(argc,argv,"cpp_publisher");

    ros::NodeHandle node;

    ros::Publisher pub = node.advertise<performance_tests::SuperAwesome>("/super_awesome_topic", 1000);
    std_msgs::Float64 rate_val;
    ros::param::get("/rate",rate_val.data);
    if(!(rate_val.data))
    {
        ROS_ERROR("Didn't get param /rate");
    }
    ROS_INFO("[%f]",rate_val.data);
    ros::Rate rate(rate_val.data);
    while(ros::ok())
    {
        performance_tests::SuperAwesome msg_awesome;
        std::stringstream ss;
        ss<< "Robotics is awesome!-by C++ Pub";
        msg_awesome.str = ss.str();

        pub.publish(msg_awesome);

        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}
