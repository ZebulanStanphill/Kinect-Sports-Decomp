// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (IncidentalManager::* const)(const char *), IncidentalManager, 0>, IncidentalManager *, _Ph<1> >
// >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace incidental {
        class IncidentalManager {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::incidental::IncidentalManager::* const)(const char *), olympus::incidental::IncidentalManager, 0>, olympus::incidental::IncidentalManager *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824C8950(void)
{
    return typeid(Functor);
}
