#include "pch.h"

#include "CPPCLI_Test.Library.h"


CPPCLITestLibrary::CPPClass::CPPClass(int test)
{
	this->value = test;
}

int CPPCLITestLibrary::CPPClass::GetValue() {
	return this->value;
}