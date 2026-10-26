// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanBoxingNetObj::* const)(unsigned int), SportsmanBoxingNetObj, 0>, SportsmanBoxingNetObj
// *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature,
// and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class SportsmanBoxingNetObj {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::SportsmanBoxingNetObj::* const)(unsigned int), olympus::sport::boxing::SportsmanBoxingNetObj, 0>, olympus::sport::boxing::SportsmanBoxingNetObj *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8232A918(void)
{
    return typeid(Functor);
}
