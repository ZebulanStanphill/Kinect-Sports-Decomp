// std::basic_ostream<char>::flush() from <ostream>. ios_base::clear is out-of-line in the
// library and keeps the fn_ name that Matching C units use: basic_ios::clear forwards to it.
#include <ostream>
extern "C" void fn_82240070(std::ios_base *self, int state, bool reraise);
template<> __forceinline void std::basic_ios<char, std::char_traits<char> >::clear(iostate _State, bool _Reraise)
{
    fn_82240070(this, (iostate)(_Mystrbuf == 0 ? (int)_State | (int)badbit : (int)_State), _Reraise);
}

extern "C" std::ostream *fn_8223FDB8(std::ostream *os)
{
    std::ios_base::iostate state = std::ios_base::goodbit;
    if (!os->fail() && os->rdbuf()->pubsync() == -1) {
        state |= std::ios_base::badbit;
    }
    os->setstate(state);
    return os;
}
