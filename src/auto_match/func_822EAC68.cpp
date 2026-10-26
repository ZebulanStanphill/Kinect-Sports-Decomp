// _Target_type of the std::tr1::function wrapping a _Bind<const char *, const char *,
// _Bind1<_Callable_pmf<const char *(TableTennisMoveStateMan::* const)(void) const,
// TableTennisMoveStateMan, 0>, TableTennisMoveStateMan *> >: returns typeid of the functor. It
// keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class TableTennisMoveStateMan {};
        }
    }
}

typedef std::tr1::_Bind<const char *, const char *, std::tr1::_Bind1<std::tr1::_Callable_pmf<const char *(olympus::sport::tabletennis::TableTennisMoveStateMan::* const)(void) const, olympus::sport::tabletennis::TableTennisMoveStateMan, 0>, olympus::sport::tabletennis::TableTennisMoveStateMan *> > Functor;

extern "C" const type_info &fn_822EAC68(void)
{
    return typeid(Functor);
}
