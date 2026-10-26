// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (AthleticsController::* const)(int, const AthleticsHumanControl &), AthleticsController, 0>,
// AthleticsController *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps its fn_ name:
// the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace athletics {
            class AthleticsController {};
            class AthleticsHumanControl {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::athletics::AthleticsController::* const)(int, const olympus::sport::athletics::AthleticsHumanControl &), olympus::sport::athletics::AthleticsController, 0>, olympus::sport::athletics::AthleticsController *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_8242F098(void)
{
    return typeid(Functor);
}
