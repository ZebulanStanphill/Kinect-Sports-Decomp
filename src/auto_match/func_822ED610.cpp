#include <xlocnum>

typedef std::istreambuf_iterator<char, std::char_traits<char>> Iter_822ED610;
typedef std::num_get<char, Iter_822ED610> NumGet_822ED610;

template std::istreambuf_iterator<char, std::char_traits<char>>
NumGet_822ED610::do_get(Iter_822ED610 _First, Iter_822ED610 _Last, std::ios_base &_Iosbase,
                        std::ios_base::iostate &_State, double &_Val) const;
