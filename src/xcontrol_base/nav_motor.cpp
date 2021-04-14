#include <nav_motor.h>

using namespace ethercatcpp;

namespace xcontrol {

NavMotor::NavMotor(bool has_motor) : Epos4Extended(has_motor) {
    set_Id("EPOS4", 0x000000fb, 0x69500000);
}

}