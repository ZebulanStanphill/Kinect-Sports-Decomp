// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (InRoundState::* const)(BoxingSportsman &, int), InRoundState, 0>, InRoundState *, _Ph<1>,
// _Ph<2> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            namespace maingame {
                class InRoundState {};
            }
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::boxing::maingame::InRoundState::* const)(olympus::sport::boxing::BoxingSportsman &, int), olympus::sport::boxing::maingame::InRoundState, 0>, olympus::sport::boxing::maingame::InRoundState *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_82409C90(void)
{
    return typeid(Functor);
}
