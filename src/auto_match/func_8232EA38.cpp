// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (AIKnockdownMindState::* const)(BoxingSportsman &), AIKnockdownMindState, 0>,
// AIKnockdownMindState *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class AIKnockdownMindState {};
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::AIKnockdownMindState::* const)(olympus::sport::boxing::BoxingSportsman &), olympus::sport::boxing::AIKnockdownMindState, 0>, olympus::sport::boxing::AIKnockdownMindState *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8232EA38(void)
{
    return typeid(Functor);
}
