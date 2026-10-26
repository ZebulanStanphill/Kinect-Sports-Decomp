// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind6<_Callable_pmf<void
// (GameLive::Olympus::Session::SessionNetObj::* const)(NW::NetVar_c *, NW::NetVar_c::LocalSet,
// NW::NetVar_c::PostUpdate, NW::NetVar_c::ChangeStatus, NW::GenericMachine_c *),
// GameLive::Olympus::Session::SessionNetObj, 0>, GameLive::Olympus::Session::SessionNetObj *,
// _Ph<1>, _Ph<2>, _Ph<3>, _Ph<4>, _Ph<5> > >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace GameLive {
    namespace Olympus {
        namespace Session {
            class SessionNetObj {};
        }
    }
}
namespace NW {
    class NetVar_c {
    public:
        enum LocalSet {};
        enum PostUpdate {};
        enum ChangeStatus {};
    };
    class GenericMachine_c {};
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind6<std::tr1::_Callable_pmf<void (GameLive::Olympus::Session::SessionNetObj::* const)(NW::NetVar_c *, NW::NetVar_c::LocalSet, NW::NetVar_c::PostUpdate, NW::NetVar_c::ChangeStatus, NW::GenericMachine_c *), GameLive::Olympus::Session::SessionNetObj, 0>, GameLive::Olympus::Session::SessionNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4>, std::tr1::_Ph<5> > > Functor;

extern "C" const type_info &fn_8224BB50(void)
{
    return typeid(Functor);
}
