// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanAnimFace::* const)(const EventData &), SportsmanAnimFace, 0>, SportsmanAnimFace *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        class SportsmanAnimFace {};
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::SportsmanAnimFace::* const)(const olympus::animation::EventData &), olympus::sport::SportsmanAnimFace, 0>, olympus::sport::SportsmanAnimFace *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8234B498(void)
{
    return typeid(Functor);
}
