// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (MainState::* const)(const PlayerEventManager::HitCallbackData &), MainState, 0>, MainState *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            namespace simongame {
                class MainState {};
            }
            class PlayerEventManager {
            public:
                struct HitCallbackData {};
            };
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::simongame::MainState::* const)(const olympus::sport::boxing::PlayerEventManager::HitCallbackData &), olympus::sport::boxing::simongame::MainState, 0>, olympus::sport::boxing::simongame::MainState *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82406318(void)
{
    return typeid(Functor);
}
