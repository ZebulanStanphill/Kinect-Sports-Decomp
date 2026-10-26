// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (NW::SplitMessage_c::* const)(NW::FWMsg_c *), NW::SplitMessage_c, 0>, NW::SplitMessage_c *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace NW {
    class SplitMessage_c {};
    class FWMsg_c {};
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (NW::SplitMessage_c::* const)(NW::FWMsg_c *), NW::SplitMessage_c, 0>, NW::SplitMessage_c *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_828CCCB0(void)
{
    return typeid(Functor);
}
