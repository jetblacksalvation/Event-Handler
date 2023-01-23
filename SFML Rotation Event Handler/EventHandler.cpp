#pragma once
#include "EventNamespace.hpp"
#include "ObjectDeclaration.hpp"
//Game obj inherit Event_Control_Interface for keyboard access 

class Eve::Event_Control_Interface
{
public:

	Event_Control_Interface(Eve::EventType type, Eve::EventCategory category) {
		this->category = category;
		this->type = type;
	
	};
	virtual void Event() const = 0; //pure-virtual must be implemented 

private:
	Eve::EventType type; 
	Eve::EventCategory category;
};
struct Eve::Event_Reactive_Interface: public Object_Interface {
public:
	//keep the virtual functions draw and update unimplemented

};

