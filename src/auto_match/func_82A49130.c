typedef struct Sub { char pad[0x1c]; int count; int total; } Sub;
typedef struct Obj { char pad[0x34]; Sub *sub; char pad2[0x1c0 - 0x38]; int amount; } Obj;
extern void fn_82A44630(Obj *o);

void fn_82A49130(Obj *o, int remove)
{
    fn_82A44630(o);
    if (remove == 0) {
        o->sub->count++;
        o->sub->total += o->amount;
    } else {
        o->sub->count--;
        o->sub->total -= o->amount;
    }
}
