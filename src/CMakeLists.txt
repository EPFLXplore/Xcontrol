PID_Component(xcontrol SHARED DIRECTORY xcontrol_base
              CXX_STANDARD 11
              WARNING_LEVEL ALL
              DESCRIPTION Xcontrol is a component responsible for the control of motors at Xplore.
              USAGE xcontrol/network_master.h
              EXPORT posix
                     ethercatcpp/core
                     ethercatcpp/epos
        )