#include <ros/ros.h>
#include <beginner_tutorials/robot_msg.h>

int main(int argc, char **argv){
    ros::init(argc,argv,"ilk_custom_pub");
    ros::NodeHandle nh;
    ros::Rate looprate(5); // 2'den büyük olduğu sürece sıkıntı yok
    ros::Publisher pub = nh.advertise<beginner_tutorials::robot_msg>("/ilk_custom_topic",10);

    while (ros::ok())
    {
        beginner_tutorials::robot_msg msg;
        msg.robot_status = "Good";
        msg.distance = 10.5;
        pub.publish(msg);
        looprate.sleep();
    }
    
}