#include "StdAfx.h"
#include "Role.h"


Role::Role(void)
{
}


Role::~Role(void)
{
}

void Role::attack(Role& r)
{
	return;
}

bool Role::isAlive()
{
	return HP>0;
}
