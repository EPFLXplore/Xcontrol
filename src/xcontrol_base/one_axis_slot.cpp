#include <xcontrol/one_axis_slot.h>

using namespace ethercatcpp;

namespace xcontrol {

OneAxisSlot::OneAxisSlot(bool has_motor) : Epos4Extended(has_motor) {
    set_Id("EPOS4", 0x000000fb, 0x60500000);
}

}