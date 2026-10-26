// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (BoxingFadeManager::* const)(void), BoxingFadeManager, 0>, BoxingFadeManager *> >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingFadeManager {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::boxing::BoxingFadeManager::* const)(void), olympus::sport::boxing::BoxingFadeManager, 0>, olympus::sport::boxing::BoxingFadeManager *> > Functor;

extern "C" const type_info &fn_82455A20(void)
{
    return typeid(Functor);
}
