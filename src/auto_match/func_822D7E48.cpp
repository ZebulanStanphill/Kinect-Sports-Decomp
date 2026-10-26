// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanVolleyballNetObj::* const)(ShotGridType), SportsmanVolleyballNetObj, 0>,
// SportsmanVolleyballNetObj *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name:
// the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class SportsmanVolleyballNetObj {};
            enum ShotGridType {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::SportsmanVolleyballNetObj::* const)(olympus::sport::volleyball::ShotGridType), olympus::sport::volleyball::SportsmanVolleyballNetObj, 0>, olympus::sport::volleyball::SportsmanVolleyballNetObj *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822D7E48(void)
{
    return typeid(Functor);
}
