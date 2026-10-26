// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (VinceReporter::* const)(const BoxingSportsman &), VinceReporter, 0>, VinceReporter *, _Ph<1> >
// >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class VinceReporter {};
            class BoxingSportsman {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::boxing::VinceReporter::* const)(const olympus::sport::boxing::BoxingSportsman &), olympus::sport::boxing::VinceReporter, 0>, olympus::sport::boxing::VinceReporter *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82459750(void)
{
    return typeid(Functor);
}
