#include "pch.hh"
#include <iostream>
#include <boost/bind.hpp>

void F1()
{
	std::cout << __FUNCTION__ << std::endl;
}

int main( int argc, char * argv[] )
{
	boost::bind( &F1 )();
	return 0;
}