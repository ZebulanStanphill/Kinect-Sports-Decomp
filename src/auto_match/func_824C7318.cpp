// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_fun<int (*
// const)(const sceneMainWorkspace_s *), 0>, sceneMainWorkspace_s *> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

struct sceneMainWorkspace_s {};

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_fun<int (* const)(const sceneMainWorkspace_s *), 0>, sceneMainWorkspace_s *> > Functor;

extern "C" const type_info &fn_824C7318(void)
{
    return typeid(Functor);
}
