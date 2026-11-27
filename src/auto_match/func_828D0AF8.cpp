// std::vector<std::tr1::shared_ptr<T>>::push_back(const value_type &) from Visual C++ 2010's <vector>.
// Session_828D0BE0 is a placeholder for the game's element class. The vector's _Reserve is
// func_828B7D48.cpp, and the shared_ptr copy goes through the folded _Ptr_base::_Reset, fn_828CCCC0.
#include <memory>
#include <vector>

struct Session_828D0BE0;

typedef std::tr1::shared_ptr<Session_828D0BE0> SessionPtr_828D0BE0;

extern "C" void fn_828CCCC0(void *self, Session_828D0BE0 *session, std::tr1::_Ref_count_base *rep,
                            bool doThrow);

template <>
__forceinline void std::tr1::_Ptr_base<Session_828D0BE0>::_Reset(Session_828D0BE0 *ptr,
                                                                 std::tr1::_Ref_count_base *rep, bool doThrow)
{
    fn_828CCCC0(this, ptr, rep, doThrow);
}

template <> void std::vector<SessionPtr_828D0BE0>::_Reserve(size_type count);

template void std::vector<SessionPtr_828D0BE0>::push_back(const SessionPtr_828D0BE0 &);
