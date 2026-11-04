extern unsigned char fn_828ACC98(void); extern void fn_82381BC0(void *); extern void *fn_8289D8D0(void *); extern void fn_828A2CF8(void *);
extern void fn_828A3578(void *); extern void fn_828ACDB8(void *, int); extern unsigned char fn_828AD488(void *); extern unsigned char fn_828AD0F8(void *);
extern unsigned char fn_828C4240(void *); extern void fn_828AECC0(void *, int); extern int fn_82A4AAA8(void *);
extern void *memmove(void *, const void *, unsigned);
typedef struct VT_828AE888 { void (*dtor)(void *, int); } VT_828AE888;
typedef struct Ob_828AE888 { VT_828AE888 *vt; } Ob_828AE888;
typedef struct VT2_828AE888 { int pad[8]; void (*f20)(void *); } VT2_828AE888;
typedef struct Itf_828AE888 { VT2_828AE888 *vt; } Itf_828AE888;
typedef struct Nd_828AE888 { struct Nd_828AE888 *next; int pad[3]; Ob_828AE888 *ob; } Nd_828AE888;
typedef struct Vec_828AE888 { int *begin; int *end; } Vec_828AE888;
typedef struct O_828AE888 { char pad[0x8c]; Itf_828AE888 *itf; char pad90[4]; unsigned char busy; char pad95[0x1f]; int fb4; char padb8[0x178]; Nd_828AE888 *list; char pad234[8]; int f23c; char pad240[0x18]; Vec_828AE888 vec; char pad260[8]; char sub268[0x8c]; char sub2f4[1]; } O_828AE888;
static __forceinline void Erase(Vec_828AE888 *v, int *first, int *last) { int n; if (first != last) { n = v->end - last; memmove(first, last, n * 4); v->end = first + n; } }
int fn_828AE888(O_828AE888 *o, int x) {
  unsigned char ok; Nd_828AE888 *it; Ob_828AE888 *ob; Ob_828AE888 *o2; int *b, *e, n; Vec_828AE888 *vp; int z;
  if (fn_828ACC98() != 0) return 0;
  o->fb4 = x;
  o->busy = 1;
  z = 0;
  if (o->itf == 0 || (fn_828AD488(o) == 0 && fn_828AD0F8(o) == 0 && fn_828C4240(o) == 0)) ok = 0; else ok = 1;
  if (ok != 0) {
    it = o->list->next;
    if (it != o->list) {
      do {
        ob = it->ob;
        fn_82381BC0(&it);
        if (fn_82A4AAA8(ob) != 2) fn_828AECC0(ob, 2);
        if (ob != 0) ob->vt->dtor(ob, 1);
      } while (it != o->list);
    }
    o2 = (Ob_828AE888 *)fn_8289D8D0(o);
    if (o2 != 0) o2->vt->dtor(o2, 1);
    o->f23c = 0;
    fn_828A2CF8(o->sub268);
    vp = &o->vec;
    Erase(vp, vp->begin, vp->end);
    fn_828A3578(o->sub2f4);
    o->itf->vt->f20(o->itf);
    fn_828ACDB8(o, 7);
  }
  o->busy = 0;
  return 1;
}
