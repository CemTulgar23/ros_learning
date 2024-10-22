#include <ros/ros.h>
#include <beginner_tutorials/robot_srv.h>

bool server_fonksiyon(beginner_tutorials::robot_srv::Request &req, beginner_tutorials::robot_srv::Response &res){
    
    res.toplam = req.a + req.b;
    ROS_INFO("Toplam: %ld", res.toplam);
    return true;
}

int main(int argc, char **argv){
    ros::init(argc, argv, "ilk_custom_srv");
    ros::NodeHandle nh;
    ros::ServiceServer server = nh.advertiseService("/ilk_custom_server",server_fonksiyon);
    ros::spin();
}