// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (BoxingSportsman::* const)(BoxingSportsman &), BoxingSportsman, 0>, BoxingSportsman *, _Ph<1> >
// >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::BoxingSportsman::* const)(olympus::sport::boxing::BoxingSportsman &), olympus::sport::boxing::BoxingSportsman, 0>, olympus::sport::boxing::BoxingSportsman *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822C2248(void)
{
    return typeid(Functor);
}
