struct Ob_8301D458;
typedef struct { void *pad[12]; int (*f30)(struct Ob_8301D458 *); } Vt_8301D458;
typedef struct Ob_8301D458 { Vt_8301D458 *vt; } Ob_8301D458;
typedef struct { char pad[0xfc]; Ob_8301D458 *obj; } Item_8301D458;
typedef struct { int pad0[2]; int state; Item_8301D458 *items[2]; } Obj_8301D458;
extern void fn_8301D3E8(Obj_8301D458 *, unsigned, int);
extern void fn_8303A630(Ob_8301D458 *);

void fn_8301D458(Obj_8301D458 *o)
{
  unsigned i;
  for (i = 0; i < 2; i++) {
    if (o->items[i] != 0) {
      if (o->items[i]->obj->vt->f30(o->items[i]->obj) != 1) {
        fn_8303A630(o->items[0]->obj);
        o->state = 2;
        return;
      }
      if (i != 0)
        fn_8301D3E8(o, i, 0);
    }
  }
}
