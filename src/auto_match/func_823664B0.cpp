// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (BoxingController::* const)(BoxingSportsman &), BoxingController, 0>, BoxingController *, _Ph<1>
// > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingController {};
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::BoxingController::* const)(olympus::sport::boxing::BoxingSportsman &), olympus::sport::boxing::BoxingController, 0>, olympus::sport::boxing::BoxingController *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_823664B0(void)
{
    return typeid(Functor);
}
