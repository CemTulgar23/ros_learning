#include <ros/ros.h>
#include <turtlesim/TeleportAbsolute.h>

bool server_fonksiyon(turtlesim::TeleportAbsolute::Request &req, turtlesim::TeleportAbsolute::Response &res){
    float x,y;
    x = req.x;
    y = req.y;

    ROS_INFO("x:%f, y:%f",x,y);

    return true;
}

int main(int argc, char **argv){
    ros::init(argc,argv,"ilk_deneme_servis_server");
    ros::NodeHandle nh;
    ros::ServiceServer server = nh.advertiseService("/turtle1/teleport_absolute",server_fonksiyon);
    ros::spin(); //main dışında bulunan fonksiyomnun çalışması için
}