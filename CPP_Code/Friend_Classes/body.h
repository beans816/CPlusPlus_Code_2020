//----body.h
#pragma once

class Handle; //forward referenve of the "other" class so the compiler knows about it

class Body //the client wont see the body class, just the handle class which is what they will deal with
{
	friend class Handle;
private: 
	int someData;
};
