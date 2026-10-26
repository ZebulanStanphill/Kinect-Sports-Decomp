// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (Lane::* const)(void), Lane, 0>, Lane *> >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace bowling {
            class Lane {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::bowling::Lane::* const)(void), olympus::sport::bowling::Lane, 0>, olympus::sport::bowling::Lane *> > Functor;

extern "C" const type_info &fn_82362330(void)
{
    return typeid(Functor);
}
