// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportControllerBoxingNetObj::* const)(float), SportControllerBoxingNetObj, 0>,
// SportControllerBoxingNetObj *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name:
// the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class SportControllerBoxingNetObj {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::SportControllerBoxingNetObj::* const)(float), olympus::sport::boxing::SportControllerBoxingNetObj, 0>, olympus::sport::boxing::SportControllerBoxingNetObj *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82404898(void)
{
    return typeid(Functor);
}
