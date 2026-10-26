// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (SportsmanMindState_Football_ReceivePassDirect::* const)(void),
// SportsmanMindState_Football_ReceivePassDirect, 0>, SportsmanMindState_Football_ReceivePassDirect
// *> >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class SportsmanMindState_Football_ReceivePassDirect {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::football::SportsmanMindState_Football_ReceivePassDirect::* const)(void), olympus::sport::football::SportsmanMindState_Football_ReceivePassDirect, 0>, olympus::sport::football::SportsmanMindState_Football_ReceivePassDirect *> > Functor;

extern "C" const type_info &fn_82312E48(void)
{
    return typeid(Functor);
}
