// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (BoxingStunnedEffect::* const)(void), BoxingStunnedEffect, 0>, BoxingStunnedEffect *> >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class BoxingStunnedEffect {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::boxing::BoxingStunnedEffect::* const)(void), olympus::sport::boxing::BoxingStunnedEffect, 0>, olympus::sport::boxing::BoxingStunnedEffect *> > Functor;

extern "C" const type_info &fn_82366038(void)
{
    return typeid(Functor);
}
