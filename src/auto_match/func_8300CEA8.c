extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *lbl_831BC768;
extern char lbl_8217C320[];
typedef struct Obj { void *vtbl; int pad[2]; unsigned char a; unsigned char pad2; unsigned short b; } Obj;
static Obj *Obj_ctor(Obj *o) { o->a = 1; o->vtbl = lbl_8217C320; o->b = 0xffff; return o; }

Obj *fn_8300CEA8(Obj *src)
{
    Obj *mem = (Obj *)fn_82FA5060(lbl_831BC768, 0x10);
    Obj *o = mem ? Obj_ctor(mem) : 0;
    if (o != 0) { o->a = src->a; o->b = src->b; }
    return o;
}
