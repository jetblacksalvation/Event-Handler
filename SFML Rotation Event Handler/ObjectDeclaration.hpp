#pragma once
#include "EventNamespace.hpp"

class Eve::Object_Interface {
public:


	virtual void draw() = 0;
	virtual void update() = 0;


};
//TextBox enum value corresponds to 0 as it is the first enum class i have ever written 
//eventually add parameter pack to the other constructor 
class TextBox :public Eve::Object_Interface {
	int x, y;
	int lenth, width;
	std::string message;
	TextBox() {};
};

class Eve::Object_Factory {
public:
	Object_Factory();
	void AddNewObject(int ClassEnum);
	int GetObjectInfo(size_t index);
	std::vector<std::unique_ptr<Eve::Object_Interface>> GetObjects();
	Eve::Object_Interface* operator[](size_t index );
private:
	std::vector<std::unique_ptr<Eve::Object_Interface>> _Objects;
	std::vector<int>_ObjectCode;//used for getting info of pointer
};
