#include <arm_motor.h>

using namespace ethercatcpp;

namespace xcontrol {

ArmMotor::ArmMotor(bool has_motor) : Epos4Extended(has_motor) {
    set_Id("EPOS4", 0x000000fb, 0x60500000);
}

}