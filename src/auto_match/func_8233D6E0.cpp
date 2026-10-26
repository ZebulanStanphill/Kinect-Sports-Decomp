// _Target_type of the std::tr1::function wrapping a _Bind<unsigned int, unsigned int,
// _Bind2<_Callable_pmf<unsigned int (AthleticsSportsmanMoveStateMan::* const)(unsigned int),
// AthleticsSportsmanMoveStateMan, 0>, AthleticsSportsmanMoveStateMan *, _Ph<1> > >: returns typeid
// of the functor. It keeps its fn_ name: the function's signature, and so its implementation
// class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace athletics {
            class AthleticsSportsmanMoveStateMan {};
        }
    }
}

typedef std::tr1::_Bind<unsigned int, unsigned int, std::tr1::_Bind2<std::tr1::_Callable_pmf<unsigned int (olympus::sport::athletics::AthleticsSportsmanMoveStateMan::* const)(unsigned int), olympus::sport::athletics::AthleticsSportsmanMoveStateMan, 0>, olympus::sport::athletics::AthleticsSportsmanMoveStateMan *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8233D6E0(void)
{
    return typeid(Functor);
}
