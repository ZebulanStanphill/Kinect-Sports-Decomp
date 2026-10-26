// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (Strategy::* const)(const PlayerEventManager::HitCallbackData &), Strategy, 0>, Strategy *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class Strategy {};
            class PlayerEventManager {
            public:
                struct HitCallbackData {};
            };
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::Strategy::* const)(const olympus::sport::boxing::PlayerEventManager::HitCallbackData &), olympus::sport::boxing::Strategy, 0>, olympus::sport::boxing::Strategy *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8232BAA0(void)
{
    return typeid(Functor);
}
