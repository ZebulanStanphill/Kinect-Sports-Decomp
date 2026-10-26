// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (BoxingCamera::* const)(BoxingSportsman &), BoxingCamera, 0>, BoxingCamera *, _Ph<1> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingCamera {};
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::BoxingCamera::* const)(olympus::sport::boxing::BoxingSportsman &), olympus::sport::boxing::BoxingCamera, 0>, olympus::sport::boxing::BoxingCamera *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82403AC0(void)
{
    return typeid(Functor);
}
