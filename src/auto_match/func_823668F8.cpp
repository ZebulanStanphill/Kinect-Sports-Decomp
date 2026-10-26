// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (BoxingController::* const)(void) const, BoxingController, 0>, BoxingController *> >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingController {};
        }
    }
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::sport::boxing::BoxingController::* const)(void) const, olympus::sport::boxing::BoxingController, 0>, olympus::sport::boxing::BoxingController *> > Functor;

extern "C" const type_info &fn_823668F8(void)
{
    return typeid(Functor);
}
