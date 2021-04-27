#include <network_master.h>

#include <iostream>

using namespace std;
using namespace ethercatcpp;

namespace xcontrol {

NetworkMaster::NetworkMaster(vector<Epos4Extended*> chain, std::string network_interface_name) : 
	Master(),
	epos_chain_(chain),
	network_interface_name_(network_interface_name) { }

void NetworkMaster::init_network() {
  	// Bus creation
  	EthercatBus robot;

  	// Adding network interface
  	add_Interface_Primary(network_interface_name_);

  	for(Epos4Extended epos: epos_chain_) {
		robot.add_Device(epos);
	}
	
  	add_Bus(robot);
}

void NetworkMaster::switch_motors_to_enable_op() {
  	for(Epos4Extended epos: epos_chain_) {
    	epos.switch_to_enable_op();
	}
}

}