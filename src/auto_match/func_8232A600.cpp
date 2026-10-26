// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind6<_Callable_pmf<void
// (SportsmanBoxingNetObj::* const)(NW::NetVar_c *, NW::NetVar_c::LocalSet,
// NW::NetVar_c::PostUpdate, NW::NetVar_c::ChangeStatus, NW::GenericMachine_c *),
// SportsmanBoxingNetObj, 0>, SportsmanBoxingNetObj *, _Ph<1>, _Ph<2>, _Ph<3>, _Ph<4>, _Ph<5> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class SportsmanBoxingNetObj {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind6<std::tr1::_Callable_pmf<void (olympus::sport::boxing::SportsmanBoxingNetObj::* const)(NW::NetVar_c *, NW::NetVar_c::LocalSet, NW::NetVar_c::PostUpdate, NW::NetVar_c::ChangeStatus, NW::GenericMachine_c *), olympus::sport::boxing::SportsmanBoxingNetObj, 0>, olympus::sport::boxing::SportsmanBoxingNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4>, std::tr1::_Ph<5> > > Functor;

extern "C" const type_info &fn_8232A600(void)
{
    return typeid(Functor);
}
