#pragma once
#include "EventNamespace.hpp"
class Eve::Object_Interface {
public:
	virtual void draw() = 0;
	virtual void update() = 0;


};


class Eve::Object_Factory {
public:
	Object_Factory();


private:
	std::vector<std::unique_ptr<Eve::Object_Interface>> _Objects;
};
