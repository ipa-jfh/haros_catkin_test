# haros test pkg

```shell
mkdir -p /tmp/haros_catkin_ws/src && cd /tmp/haros_catkin_ws/src
wstool init .
wstool merge https://raw.githubusercontent.com/gavanderhoorn/haros_catkin_test/master/haros_test.rosinstall
wstool up
cd /tmp/haros_catkin_ws
rosdep update
rosdep install --from-paths /tmp/haros_catkin_ws/src --ignore-src
catkin_make
source devel/setup.bash
catkin_make haros_report
<browser binary> build/test_pkg/test_pkg/haros_report/index.html
```
