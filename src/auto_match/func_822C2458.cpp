// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (PlayerEventManager::* const)(BoxingSportsman &), PlayerEventManager, 0>, PlayerEventManager *,
// reference_wrapper<BoxingSportsman> > >: returns typeid of the functor. It keeps its fn_ name:
// the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class PlayerEventManager {};
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::PlayerEventManager::* const)(olympus::sport::boxing::BoxingSportsman &), olympus::sport::boxing::PlayerEventManager, 0>, olympus::sport::boxing::PlayerEventManager *, std::tr1::reference_wrapper<olympus::sport::boxing::BoxingSportsman> > > Functor;

extern "C" const type_info &fn_822C2458(void)
{
    return typeid(Functor);
}
