// boost::function-style functor manager (clone / move / destroy / check type / get type) for
// std::tr1::bind(&FightingMindState::method, FightingMindState*, _1).
// The functor holds a pointer to member of a class with multiple inheritance (a 16-byte member
// pointer, so the functor is 24 bytes and is copied as three 8-byte words); the two stand-in bases
// only give the member pointer that representation.
// fn_82F64538 is type_info::operator==.
#include <functional>
#include <typeinfo>

namespace olympus { namespace sport {
class SportsmanMoveStateMan { public: struct StateChangeObserverData; };
namespace boxing {
struct FightingMindState_Base0_8232FB40 { int a; };
struct FightingMindState_Base1_8232FB40 { int b; };
class FightingMindState : public FightingMindState_Base0_8232FB40, public FightingMindState_Base1_8232FB40 {
public:
    void onNotify(const SportsmanMoveStateMan::StateChangeObserverData &data);
};
}
} }

using namespace olympus::sport;

typedef std::tr1::_Bind<void, void,
    std::tr1::_Bind2<std::tr1::_Callable_pmf<void (boxing::FightingMindState::* const)(const SportsmanMoveStateMan::StateChangeObserverData &), boxing::FightingMindState, 0>,
        boxing::FightingMindState *, std::tr1::_Ph<1> > > Functor;

extern "C" bool fn_82F64538(const void *a, const void *b);   // type_info::operator==

union Buf { const type_info *type; void *obj; struct { const type_info *t; unsigned char c, v; } ti; };

extern "C" void fn_8232FB40(Functor *in, Buf *out, int op)
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
