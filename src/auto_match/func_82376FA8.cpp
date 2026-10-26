// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (VolleyballController::* const)(int), VolleyballController, 0>, VolleyballController *, _Ph<1> >
// >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class VolleyballController {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::VolleyballController::* const)(int), olympus::sport::volleyball::VolleyballController, 0>, olympus::sport::volleyball::VolleyballController *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82376FA8(void)
{
    return typeid(Functor);
}
