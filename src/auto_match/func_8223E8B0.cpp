#include <xlocnum>

typedef std::ostreambuf_iterator<char, std::char_traits<char>> Iter_8223E8B0;
typedef std::num_put<char, Iter_8223E8B0> NumPut_8223E8B0;

template Iter_8223E8B0 NumPut_8223E8B0::do_put(Iter_8223E8B0 _Dest, std::ios_base &_Iosbase, char _Fill,
                                               double _Val) const;
