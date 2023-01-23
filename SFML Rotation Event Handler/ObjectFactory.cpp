#pragma once
#include "EventNamespace.hpp"
#include "ObjectDeclaration.hpp"
//class Eve::Object_Interface 
//members
//virtual void draw
//virtual void update
void Eve::Object_Factory::AddNewObject(int ClassEnum) {
	if (ClassEnum == (int)Eve::Objects::TextBox) {
		this->_Objects.push_back(std::make_unique<TextBox>());
		this->_ObjectCode.push_back(0);
	}
}
Eve::Object_Interface* Eve::Object_Factory::operator[](size_t index) {
	return _Objects[index].get();
}

int Eve::Object_Factory::GetObjectInfo(size_t index) {
	return this->_ObjectCode[index];
}
std::vector<std::unique_ptr<Eve::Object_Interface>> Eve::Object_Factory::GetObjects() {
	return this->_Objects;
}
Eve::Object_Factory::Object_Factory() {

}