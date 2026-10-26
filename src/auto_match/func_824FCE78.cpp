// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (AnimationJointBlendPose::* const)(unsigned int, float), AnimationJointBlendPose, 0>,
// reference_wrapper<unique_ptr<AnimationJointBlendPose, default_delete<AnimationJointBlendPose> >
// >, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps its fn_ name: the function's
// signature, and so its implementation class, isn't known.
#include <functional>
#include <memory>

class AnimationJointBlendPose {};

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (AnimationJointBlendPose::* const)(unsigned int, float), AnimationJointBlendPose, 0>, std::tr1::reference_wrapper<std::unique_ptr<AnimationJointBlendPose, std::default_delete<AnimationJointBlendPose> > >, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_824FCE78(void)
{
    return typeid(Functor);
}
