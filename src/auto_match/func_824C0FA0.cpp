// _Target_type of the std::tr1::function wrapping a _Bind<function<void (const
// shared_ptr<NW::Invite::ReceivedInternal_c> &)>, function<void (const
// shared_ptr<NW::Invite::ReceivedInternal_c> &)>, _Bind2<_Callable_pmf<function<void (const
// shared_ptr<NW::Invite::ReceivedInternal_c> &)> (Script::* const)(const _XINVITE_INFO &), Script,
// 0>, Script *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's
// signature, and so its implementation class, isn't known.
#include <functional>
#include <memory>

namespace NW {
    namespace Invite {
        class ReceivedInternal_c {};
    }
}
namespace olympus {
    namespace invite {
        class Script {};
    }
}
struct _XINVITE_INFO {};

typedef std::tr1::_Bind<std::tr1::function<void (const std::tr1::shared_ptr<NW::Invite::ReceivedInternal_c> &)>, std::tr1::function<void (const std::tr1::shared_ptr<NW::Invite::ReceivedInternal_c> &)>, std::tr1::_Bind2<std::tr1::_Callable_pmf<std::tr1::function<void (const std::tr1::shared_ptr<NW::Invite::ReceivedInternal_c> &)> (olympus::invite::Script::* const)(const _XINVITE_INFO &), olympus::invite::Script, 0>, olympus::invite::Script *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824C0FA0(void)
{
    return typeid(Functor);
}
