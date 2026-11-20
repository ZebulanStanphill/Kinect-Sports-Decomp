#include "havok/hkTransform.h"

struct Key_82D6B930 { int f0; int f4; const hkTransform *f8; };
struct Node_82D6B930 { char pad0[0x14]; int f14; char pad18[0x18]; hkTransform f30; };
struct Args_82D6B930 { int id; int zero; hkTransform *buf; Key_82D6B930 *key; };
class Target_82D6B930 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void fn20(Args_82D6B930 *args, int a, int b, int c);
};
struct Obj_82D6B930 { char pad[0xc]; Target_82D6B930 *target; };

extern "C" void fn_82D6B930(Obj_82D6B930 *self, int a, Key_82D6B930 *key, int b, int c)
{
    Node_82D6B930 *node = (Node_82D6B930 *)key->f0;
    Args_82D6B930 args;
    hkTransform buf;
    buf.setMul(*key->f8, node->f30);
    args.buf = &buf;
    args.key = key;
    args.id = node->f14;
    args.zero = 0;
    self->target->fn20(&args, a, b, c);
}
