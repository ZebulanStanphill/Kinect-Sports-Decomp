// std::basic_ostringstream<char>::`vbase destructor' from Visual C++ 2010's <sstream>:
// destroys the stream, then the virtual base ios_base through its out-of-line
// _Ios_base_dtor (fn_82F62F60).
#include <sstream>
template std::basic_ostringstream<char>::~basic_ostringstream();
