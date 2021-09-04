//---handle.h
#pragma once
#include "body.h"

class Handle
{
private:
	Body* body;

public :
	Handle();
	~Handle();

	void someOperationOnBody();
};
