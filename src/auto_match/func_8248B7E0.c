typedef struct { struct { char pad[0x10]; void (*f10)(void *); } *vt; } Obj_8248B7E0;
typedef struct { Obj_8248B7E0 *p; void *rep; } Sp_8248B7E0;
typedef struct { char pad[0x10]; char sub[0xc]; int active; } Hold_8248B7E0;
extern void fn_82365BD8(Sp_8248B7E0 *, void *);
extern void fn_822315A0(void *);

void fn_8248B7E0(Hold_8248B7E0 *h)
{
  Sp_8248B7E0 sp;
  unsigned char ok;
  if (h->active != 0) {
    fn_82365BD8(&sp, h->sub);
    ok = sp.p != 0;
    if (sp.rep != 0) {
      fn_822315A0(sp.rep);
    }
    if (ok) {
      fn_82365BD8(&sp, h->sub);
      sp.p->vt->f10(sp.p);
      if (sp.rep != 0) {
        fn_822315A0(sp.rep);
      }
    }
    h->active = 0;
  }
}
