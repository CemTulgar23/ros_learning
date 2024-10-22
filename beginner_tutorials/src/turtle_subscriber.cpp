#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

void callback_fonksiyonu (const geometry_msgs::Twist &hiz){
    ROS_INFO("x: %f, y: %f", hiz.linear.x, hiz.linear.y);
}

int main (int argc, char **argv){
    ros::init(argc,argv,"turtle_deneme_subscriber");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("/turtle1/cmd_vel",1000,callback_fonksiyonu);
    ros::spin();
}