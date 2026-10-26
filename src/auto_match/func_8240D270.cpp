// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (UiGameCommonHUD::* const)(void), UiGameCommonHUD, 0>, UiGameBoxing *> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace ui {
    class UiGameCommonHUD {};
    class UiGameBoxing {};
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (ui::UiGameCommonHUD::* const)(void), ui::UiGameCommonHUD, 0>, ui::UiGameBoxing *> > Functor;

extern "C" const type_info &fn_8240D270(void)
{
    return typeid(Functor);
}
