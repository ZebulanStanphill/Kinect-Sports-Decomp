#include <xlocnum>

typedef std::istreambuf_iterator<char, std::char_traits<char>> Iter_822ED530;
typedef std::num_get<char, Iter_822ED530> NumGet_822ED530;

template std::istreambuf_iterator<char, std::char_traits<char>>
NumGet_822ED530::do_get(Iter_822ED530 _First, Iter_822ED530 _Last, std::ios_base &_Iosbase,
                        std::ios_base::iostate &_State, float &_Val) const;
