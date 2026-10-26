// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (IncidentalMovement::* const)(float), IncidentalMovement, 0>, shared_ptr<IncidentalMovement>,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>
#include <memory>

namespace olympus {
    namespace incidental {
        class IncidentalMovement {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::incidental::IncidentalMovement::* const)(float), olympus::incidental::IncidentalMovement, 0>, std::tr1::shared_ptr<olympus::incidental::IncidentalMovement>, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824C71E8(void)
{
    return typeid(Functor);
}
