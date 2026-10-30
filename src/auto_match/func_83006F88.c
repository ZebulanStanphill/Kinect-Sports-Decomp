typedef struct Sub { char pad[0x34]; unsigned int x34; } Sub;
typedef struct Obj { char pad[0x20]; Sub *sub; } Obj;
extern unsigned char fn_830069B8(Obj *o);

void fn_83006F88(Obj *o, unsigned int v)
{
  if ((o->sub ? o->sub->x34 : 0) != v && fn_830069B8(o))
    o->sub->x34 = v;
}
