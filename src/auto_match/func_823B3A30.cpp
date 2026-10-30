// boost::function-style functor manager (clone / move / destroy / check type / get type) for
// std::tr1::bind(&BallHitNotificationObserver::method, BallHitNotificationObserver*, _1).
// The functor holds a pointer to member of a single-inheritance class and is copied as three words.
// fn_82F64538 is type_info::operator==.
#include <functional>
#include <typeinfo>

namespace olympus { namespace sport {
namespace tabletennis {
struct BallHitObserverData;
class BallHitNotificationObserver {
public:
    void onNotify(const tabletennis::BallHitObserverData &data);
};
}
} }

using namespace olympus::sport;

typedef std::tr1::_Bind<void, void,
    std::tr1::_Bind2<std::tr1::_Callable_pmf<void (tabletennis::BallHitNotificationObserver::* const)(const tabletennis::BallHitObserverData &), tabletennis::BallHitNotificationObserver, 0>,
        tabletennis::BallHitNotificationObserver *, std::tr1::_Ph<1> > > Functor;

extern "C" bool fn_82F64538(const void *a, const void *b);   // type_info::operator==

union Buf { const type_info *type; void *obj; struct { const type_info *t; unsigned char c, v; } ti; };

extern "C" void fn_823B3A30(Functor *in, Buf *out, int op)
{
    if (op == 0 || op == 1) {
        if (out != 0)
            new ((void *)out) Functor(*in);
    } else if (op != 2) {
        if (op == 3) {
            out->obj = fn_82F64538(out->type, &typeid(Functor)) ? in : 0;
        } else {
            out->ti.t = &typeid(Functor);
            out->ti.c = 0;
            out->ti.v = 0;
        }
    }
}
