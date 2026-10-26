// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (AnimationJointBlendPose::* const)(unsigned int, float), AnimationJointBlendPose, 0>,
// AnimationJointBlendPose *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>

class AnimationJointBlendPose {};

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (AnimationJointBlendPose::* const)(unsigned int, float), AnimationJointBlendPose, 0>, AnimationJointBlendPose *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_824FDD08(void)
{
    return typeid(Functor);
}
