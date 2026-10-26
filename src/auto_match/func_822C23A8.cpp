// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (SportsmanAnim::* const)(unsigned int, float), SportsmanAnim, 0>, SportsmanAnim *, _Ph<1>,
// _Ph<2> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        class SportsmanAnim {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::SportsmanAnim::* const)(unsigned int, float), olympus::sport::SportsmanAnim, 0>, olympus::sport::SportsmanAnim *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_822C23A8(void)
{
    return typeid(Functor);
}
