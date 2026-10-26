// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (Incidental::* const)(const char *), Incidental, 0>, Incidental *, _Ph<1> > >: returns typeid of
// the functor. It keeps its fn_ name: the function's signature, and so its implementation class,
// isn't known.
#include <functional>

namespace olympus {
    namespace incidental {
        class Incidental {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::incidental::Incidental::* const)(const char *), olympus::incidental::Incidental, 0>, olympus::incidental::Incidental *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824C73B0(void)
{
    return typeid(Functor);
}
