// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SfxManager::* const)(const EventData &), SfxManager, 0>, SfxManager *, _Ph<1> > >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        class SfxManager {};
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::SfxManager::* const)(const olympus::animation::EventData &), olympus::sport::SfxManager, 0>, olympus::sport::SfxManager *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822CD228(void)
{
    return typeid(Functor);
}
