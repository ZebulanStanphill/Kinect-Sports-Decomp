// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (SportControllerVolleyballNetObj::* const)(unsigned int, unsigned int),
// SportControllerVolleyballNetObj, 0>, SportControllerVolleyballNetObj *, _Ph<1>, _Ph<2> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class SportControllerVolleyballNetObj {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::SportControllerVolleyballNetObj::* const)(unsigned int, unsigned int), olympus::sport::volleyball::SportControllerVolleyballNetObj, 0>, olympus::sport::volleyball::SportControllerVolleyballNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_82383420(void)
{
    return typeid(Functor);
}
