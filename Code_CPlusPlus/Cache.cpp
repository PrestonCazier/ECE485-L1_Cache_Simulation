#include "Cache.h"


Cache::Cache(int associativity)
{
	for each (Set set in sets)
	{
		set = new Set(associativity);
	}
	
	//put function definitions here
}

Cache::~Cache()
{
}
