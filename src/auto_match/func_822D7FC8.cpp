// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind4<_Callable_pmf<void
// (SportsmanVolleyballNetObj::* const)(DiveDir, DiveHand, int), SportsmanVolleyballNetObj, 0>,
// SportsmanVolleyballNetObj *, _Ph<1>, _Ph<2>, _Ph<3> > >: returns typeid of the functor. It keeps
// its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class SportsmanVolleyballNetObj {};
            enum DiveDir {};
            enum DiveHand {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind4<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::SportsmanVolleyballNetObj::* const)(olympus::sport::volleyball::DiveDir, olympus::sport::volleyball::DiveHand, int), olympus::sport::volleyball::SportsmanVolleyballNetObj, 0>, olympus::sport::volleyball::SportsmanVolleyballNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_822D7FC8(void)
{
    return typeid(Functor);
}
