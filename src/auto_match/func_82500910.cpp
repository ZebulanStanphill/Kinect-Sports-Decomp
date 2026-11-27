// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind4<_Callable_pmf<int
// (PlaneIntersectionIterator::* const)(float, __vector4, __vector4), PlaneIntersectionIterator,
// 0>, PlaneIntersectionIterator *, _Ph<1>, _Ph<2>, _Ph<3> > >: returns typeid of the functor. It
// keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>
#include "xdk/vectorintrinsics.h"

class PlaneIntersectionIterator {};

typedef std::tr1::_Bind<int, int, std::tr1::_Bind4<std::tr1::_Callable_pmf<int (PlaneIntersectionIterator::* const)(float, __vector4, __vector4), PlaneIntersectionIterator, 0>, PlaneIntersectionIterator *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_82500910(void)
{
    return typeid(Functor);
}
