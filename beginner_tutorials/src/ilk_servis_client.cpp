#include <ros/ros.h>
#include <turtlesim/TeleportAbsolute.h>

int main(int argc, char **argv){
    ros::init(argc,argv,"ilk_deneme_servis_client");
    ros::NodeHandle nh;
    ros::ServiceClient client = nh.serviceClient<turtlesim::TeleportAbsolute>("/turtle1/teleport_absolute");

    turtlesim::TeleportAbsolute tel;

    tel.request.x = 3.0;
    tel.request.y = 4.0;

    if (client.call(tel)){
        ROS_INFO("Success");
    } else {
        ROS_INFO("Not Success");
    }
    
}