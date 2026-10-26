// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanMoveStateMan::* const)(float), SportsmanMoveStateMan, 0>, SportsmanMoveStateMan *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        class SportsmanMoveStateMan {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::SportsmanMoveStateMan::* const)(float), olympus::sport::SportsmanMoveStateMan, 0>, olympus::sport::SportsmanMoveStateMan *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822B7C20(void)
{
    return typeid(Functor);
}
