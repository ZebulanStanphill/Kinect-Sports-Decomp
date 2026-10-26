// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (TableTennisBallHitManager::* const)(void), TableTennisBallHitManager, 0>,
// TableTennisBallHitManager *> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class TableTennisBallHitManager {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::tabletennis::TableTennisBallHitManager::* const)(void), olympus::sport::tabletennis::TableTennisBallHitManager, 0>, olympus::sport::tabletennis::TableTennisBallHitManager *> > Functor;

extern "C" const type_info &fn_823AA298(void)
{
    return typeid(Functor);
}
