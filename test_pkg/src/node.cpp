
#include <ros/ros.h>
#include <std_msgs/String.h>


int main(int argc, char *argv[])
{
  ros::init(argc, argv, "test_node");
  ros::NodeHandle nh;
  ros::Publisher pub = nh.advertise<std_msgs::String>("test_topic", 1);
  ros::Rate loop_rate(1);
  int c = 0;

  while (ros::ok())
  {
    std_msgs::String msg;

    std::stringstream ss;
    ss << "bliep " << c++;
    msg.data = ss.str();

    pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
  }

	return 0;
}
