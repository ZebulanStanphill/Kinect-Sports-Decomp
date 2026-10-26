// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (AthleticsSportsmanNetObj::* const)(float, NetworkJumpEvent::Type), AthleticsSportsmanNetObj,
// 0>, AthleticsSportsmanNetObj *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps its
// fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace athletics {
            class AthleticsSportsmanNetObj {};
            namespace NetworkJumpEvent {
                enum Type {};
            }
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::athletics::AthleticsSportsmanNetObj::* const)(float, olympus::sport::athletics::NetworkJumpEvent::Type), olympus::sport::athletics::AthleticsSportsmanNetObj, 0>, olympus::sport::athletics::AthleticsSportsmanNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_8233FEC8(void)
{
    return typeid(Functor);
}
