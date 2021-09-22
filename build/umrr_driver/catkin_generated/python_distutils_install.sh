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
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ahmadelwaly/m2Robot/src/umrr_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ahmadelwaly/m2Robot/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ahmadelwaly/m2Robot/install/lib/python2.7/dist-packages:/home/ahmadelwaly/m2Robot/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ahmadelwaly/m2Robot/build" \
    "/usr/bin/python2" \
    "/home/ahmadelwaly/m2Robot/src/umrr_driver/setup.py" \
     \
    build --build-base "/home/ahmadelwaly/m2Robot/build/umrr_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/ahmadelwaly/m2Robot/install" --install-scripts="/home/ahmadelwaly/m2Robot/install/bin"
