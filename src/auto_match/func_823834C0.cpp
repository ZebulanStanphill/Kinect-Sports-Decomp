// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportControllerVolleyballNetObj::* const)(__vector4), SportControllerVolleyballNetObj, 0>,
// SportControllerVolleyballNetObj *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>
#include "xdk/vectorintrinsics.h"

namespace olympus {
    namespace sport {
        namespace volleyball {
            class SportControllerVolleyballNetObj {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::SportControllerVolleyballNetObj::* const)(__vector4), olympus::sport::volleyball::SportControllerVolleyballNetObj, 0>, olympus::sport::volleyball::SportControllerVolleyballNetObj *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_823834C0(void)
{
    return typeid(Functor);
}
