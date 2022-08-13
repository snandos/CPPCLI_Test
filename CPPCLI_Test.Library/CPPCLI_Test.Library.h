#pragma once

using namespace System;

namespace CPPCLITestLibrary {
	public ref class CPPClass
	{
		private:
			int value;
		public: 
			CPPClass(int test);
			int GetValue();
	};
}
