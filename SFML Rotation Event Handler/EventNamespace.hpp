#pragma once
#include <iostream>
#include <functional>
#include <SFML/Graphics.hpp>
#include <thread>
#include <future>
#include <Windows.h>

//Eve is the event handler system 
namespace Eve {
#ifdef _WIN32
	#define GetKeyState(key_code) 
#endif // _WIN32
#ifndef _WIN32
#error Eve only works on windows
#endif // !_WIN32

	

	enum class EventType {
		None = 0, //
		WindowClose, WindowResize, WindowFocus, //window manipulation category
		TimerReal, TimerMidGame, //Timer
		KeyPressed, KeyReleased, //keyboard
		MouseButtonPressed, MouseButtonReleased, MouseScrolled//mouse 
	};
	enum EventCategory {
		None = 0,
		EventWindows,
		EventTimers,
		EventKeyboard,
		EventMouse
	};

	// Object Interface - Factory class will be the only one to use this
	class Object_Interface;
	class Object_Factory;
	//drawing interface
	class Drawing_Interface;
	class Drawing_Factory;
	//Foreward declarations for event stuff 
	class Event_Control_Interface;//input stuff, usefull for GUI
	class Event_Reactive_Interface;// reacts to a game object - can use window stuff, but there is no reason for it to


	
}