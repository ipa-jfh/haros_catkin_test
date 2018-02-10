# haros test pkg

<p><a href="https://ipa-jfh.github.io/haros_catkin_test/#dashboard"> 
  <img align="left" src="https://user-images.githubusercontent.com/1840802/30822997-ab05de10-a1df-11e7-87c5-fc7e0de669ff.png" width="46">
  Result of example
  <br/><br/>
</a></p>


```shell
# setup ROS workspace
mkdir -p /tmp/haros_catkin_ws/src && cd /tmp/haros_catkin_ws/src
wstool init .
wstool merge https://raw.githubusercontent.com/ipa-jfh/haros_catkin_test/master/haros_test.rosinstall
wstool up
cd /tmp/haros_catkin_ws
rosdep update
rosdep install --from-paths /tmp/haros_catkin_ws/src --ignore-src

# build it (this also makes haros available in this ws)
catkin build
source devel/setup.bash

# let haros analyse and report
catkin build test_pkg --no-deps --catkin-make-args haros_report

# open report in browser (firefox or any <browser binary>)
firefox build/test_pkg/test_results/haros_report/index.html
```
