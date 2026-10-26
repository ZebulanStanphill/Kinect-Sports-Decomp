// _Target_type of the std::tr1::function wrapping a _Bind<unsigned int, unsigned int,
// _Bind2<_Callable_pmf<unsigned int (AthleticsSportsman::*
// const)(FootdownEventHandler::Foot::Enum) const, AthleticsSportsman, 0>, AthleticsSportsman *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace athletics {
            class AthleticsSportsman {};
        }
    }
    namespace animation {
        namespace FootdownEventHandler {
            namespace Foot {
                enum Enum {};
            }
        }
    }
}

typedef std::tr1::_Bind<unsigned int, unsigned int, std::tr1::_Bind2<std::tr1::_Callable_pmf<unsigned int (olympus::sport::athletics::AthleticsSportsman::* const)(olympus::animation::FootdownEventHandler::Foot::Enum) const, olympus::sport::athletics::AthleticsSportsman, 0>, olympus::sport::athletics::AthleticsSportsman *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_823396A8(void)
{
    return typeid(Functor);
}
