// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (VideoTutorial::* const)(void), VideoTutorial, 0>, VideoTutorial *> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace ui {
    class VideoTutorial {};
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (ui::VideoTutorial::* const)(void), ui::VideoTutorial, 0>, ui::VideoTutorial *> > Functor;

extern "C" const type_info &fn_82290F30(void)
{
    return typeid(Functor);
}
