// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind4<_Callable_pmf<void
// (TableTennisBallHitManager::* const)(TeamId::Enum, FoulType::Enum, unsigned int),
// TableTennisBallHitManager, 0>, TableTennisBallHitManager *, _Ph<1>, _Ph<2>, _Ph<3> > >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class TableTennisBallHitManager {};
            namespace FoulType {
                enum Enum {};
            }
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind4<std::tr1::_Callable_pmf<void (olympus::sport::tabletennis::TableTennisBallHitManager::* const)(olympus::sport::TeamId::Enum, olympus::sport::tabletennis::FoulType::Enum, unsigned int), olympus::sport::tabletennis::TableTennisBallHitManager, 0>, olympus::sport::tabletennis::TableTennisBallHitManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_823AA208(void)
{
    return typeid(Functor);
}
