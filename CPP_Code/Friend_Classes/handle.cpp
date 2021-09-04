
//----body. cpp has whatever code you decide to impliment in it
//---handle.cpp
#include "stdafx.h"
#include "Handle.h"

Handle::Handle()
{
	body = new body;
}
Handle :: ~Handle()
{
	delete body;
}
void Handle::someOperationOnBody()
{
	body->someData = 42;
}
 /*
 I can change the Body class in any
way I want. The client code isn't gonna be affected in any way whatsoever. So
that's an example of friend classes. The fact that the Body class had private
state, which it wanted the other class to be able to manipulate. So
the Handle implementation accesses some data which is actually private notice,
and it can do that because Handle is a friend of Body. So the Handle class is
allowed to access private data in Body because Handle is a friend.

 
 */

