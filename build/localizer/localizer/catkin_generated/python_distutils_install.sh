#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/team_nu/ROS/src/localizer/localizer"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/team_nu/ROS/install/lib/python2.7/dist-packages:/home/team_nu/ROS/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/team_nu/ROS/build" \
    "/usr/bin/python" \
    "/home/team_nu/ROS/src/localizer/localizer/setup.py" \
    build --build-base "/home/team_nu/ROS/build/localizer/localizer" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/team_nu/ROS/install" --install-scripts="/home/team_nu/ROS/install/bin"
