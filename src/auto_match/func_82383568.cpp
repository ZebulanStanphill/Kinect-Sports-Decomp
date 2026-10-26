// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (SportControllerVolleyballNetObj::* const)(void), SportControllerVolleyballNetObj, 0>,
// SportControllerVolleyballNetObj *> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class SportControllerVolleyballNetObj {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::SportControllerVolleyballNetObj::* const)(void), olympus::sport::volleyball::SportControllerVolleyballNetObj, 0>, olympus::sport::volleyball::SportControllerVolleyballNetObj *> > Functor;

extern "C" const type_info &fn_82383568(void)
{
    return typeid(Functor);
}
