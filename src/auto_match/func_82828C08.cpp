// std::basic_istringstream<char>::`vbase destructor' from Visual C++ 2010's
// <sstream>: destroys the stream, then its virtual base std::ios_base. The
// compiler generates it for the class's destructor.
#include <sstream>

template std::basic_istringstream<char>::~basic_istringstream();
