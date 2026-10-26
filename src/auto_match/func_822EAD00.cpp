// _Target_type of the std::tr1::function wrapping a _Bind<unsigned int, unsigned int,
// _Bind2<_Callable_pmf<unsigned int (FilteredAnimPool::* const)(unsigned int), FilteredAnimPool,
// 0>, FilteredAnimPool *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        class FilteredAnimPool {};
    }
}

typedef std::tr1::_Bind<unsigned int, unsigned int, std::tr1::_Bind2<std::tr1::_Callable_pmf<unsigned int (olympus::sport::FilteredAnimPool::* const)(unsigned int), olympus::sport::FilteredAnimPool, 0>, olympus::sport::FilteredAnimPool *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822EAD00(void)
{
    return typeid(Functor);
}
