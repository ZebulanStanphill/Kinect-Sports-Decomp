// _Target_type of the std::tr1::function wrapping a _Bind_fty<function<void (ShotParams &)>,
// _Notforced, _Bind1<_Callable_obj<function<void (ShotParams &)>, 0>, ShotParams> >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            namespace network {
                struct ShotParams {};
            }
        }
    }
}

typedef std::tr1::_Bind_fty<std::tr1::function<void (olympus::sport::volleyball::network::ShotParams &)>, std::tr1::_Notforced, std::tr1::_Bind1<std::tr1::_Callable_obj<std::tr1::function<void (olympus::sport::volleyball::network::ShotParams &)>, 0>, olympus::sport::volleyball::network::ShotParams> > Functor;

extern "C" const type_info &fn_82393A78(void)
{
    return typeid(Functor);
}
