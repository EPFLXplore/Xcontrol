PID_Component(xcontrol STATIC DIRECTORY xcontrol_base
              CXX_STANDARD 11
              WARNING_LEVEL ALL
              DESCRIPTION Xcontrol is a component responsible for the control of motors at Xplore.
              USAGE xcontrol/setup.h
              EXPORT posix
                     ethercatcpp/core
                     ethercatcpp/epos
        )