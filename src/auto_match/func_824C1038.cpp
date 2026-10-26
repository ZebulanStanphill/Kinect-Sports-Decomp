// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (Script::* const)(const shared_ptr<NW::Invite::ReceivedInternal_c> &), Script, 0>, Script *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>
#include <memory>

namespace olympus {
    namespace invite {
        class Script {};
    }
}
namespace NW {
    namespace Invite {
        class ReceivedInternal_c {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::invite::Script::* const)(const std::tr1::shared_ptr<NW::Invite::ReceivedInternal_c> &), olympus::invite::Script, 0>, olympus::invite::Script *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824C1038(void)
{
    return typeid(Functor);
}
