// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (WaitingToHitMindState::* const)(vector<AnimationImpactMatcher::MatchedImpactAnimation,
// allocator<AnimationImpactMatcher::MatchedImpactAnimation> > &) const, WaitingToHitMindState, 0>,
// WaitingToHitMindState *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>
#include <vector>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class WaitingToHitMindState {};
        }
    }
}
namespace AnimationImpactMatcher {
    struct MatchedImpactAnimation {};
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::tabletennis::WaitingToHitMindState::* const)(std::vector<AnimationImpactMatcher::MatchedImpactAnimation, std::allocator<AnimationImpactMatcher::MatchedImpactAnimation> > &) const, olympus::sport::tabletennis::WaitingToHitMindState, 0>, olympus::sport::tabletennis::WaitingToHitMindState *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822F8E48(void)
{
    return typeid(Functor);
}
