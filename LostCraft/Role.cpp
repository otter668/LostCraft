#include "StdAfx.h"
#include "Role.h"


Role::Role(void)
{
}


Role::~Role(void)
{
}

bool Role::isAlive()
{
	return HP>0;
}
