// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (NW::Function::RootContainer_c::* const)(NW::Function::Function_c &),
// NW::Function::RootContainer_c, 0>, NW::Function::RootContainer_c *, _Ph<1> > >: returns typeid
// of the functor. It keeps its fn_ name: the function's signature, and so its implementation
// class, isn't known.
#include <functional>

namespace NW {
    namespace Function {
        class RootContainer_c {};
        class Function_c {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (NW::Function::RootContainer_c::* const)(NW::Function::Function_c &), NW::Function::RootContainer_c, 0>, NW::Function::RootContainer_c *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_828E2DB8(void)
{
    return typeid(Functor);
}
