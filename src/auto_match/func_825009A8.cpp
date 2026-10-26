// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind4<_Callable_pmf<int
// (CylinderIntersectionIterator::* const)(float, __vector4, __vector4),
// CylinderIntersectionIterator, 0>, CylinderIntersectionIterator *, _Ph<1>, _Ph<2>, _Ph<3> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

class CylinderIntersectionIterator {};
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind<int, int, std::tr1::_Bind4<std::tr1::_Callable_pmf<int (CylinderIntersectionIterator::* const)(float, __vector4, __vector4), CylinderIntersectionIterator, 0>, CylinderIntersectionIterator *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_825009A8(void)
{
    return typeid(Functor);
}
