// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (Sportsman::* const)(const EventData &), Sportsman, 0>, Sportsman *, _Ph<1> > >: returns typeid
// of the functor. It keeps its fn_ name: the function's signature, and so its implementation
// class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        class Sportsman {};
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::Sportsman::* const)(const olympus::animation::EventData &), olympus::sport::Sportsman, 0>, olympus::sport::Sportsman *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822B7B80(void)
{
    return typeid(Functor);
}
