#include <ros/ros.h>

int main (int argc, char **argv){
    ros::init(argc, argv, "ilk_deneme_node"); // nodumuzu başlatmamızı sağlıyor
    ros::NodeHandle nh; // nodumuzu başlatan ve kapatan bir obje olmalı 

    ros::Rate loopreate(20); // aşağıda bir loop oluşturduğumuz için bunu kullandık

    while(ros::ok()){ // ROS üzgün şekilde çalılıyorsa true döndürecek
        ROS_INFO("Hello word."); // terminale bir şey yazdırmak için bunu kullanıyoruz

        ros::spinOnce(); // ROS içerisindeki haberleşmeleri sağlayan bir fonksiyon
        loopreate.sleep();
    }
}