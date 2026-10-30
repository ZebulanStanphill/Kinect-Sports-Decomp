struct Elem_82F48CB8;
typedef struct VT_82F48CB8 { void *s[2]; void (*f8)(struct Elem_82F48CB8 *self); } VT_82F48CB8;
typedef struct Elem_82F48CB8 { VT_82F48CB8 *vt; } Elem_82F48CB8;
typedef struct { void *vt; unsigned int first; unsigned int last; unsigned int cur; } Obj_82F48CB8;
extern void fn_82E4FE40(unsigned int p);
extern char lbl_82163244[];

void fn_82F48CB8(Obj_82F48CB8 *p)
{
  unsigned int first;
  first = p->first;
  p->vt = lbl_82163244;
  if (first != 0) {
    p->cur = first;
    while (p->cur != p->last) {
      (*(Elem_82F48CB8 **)p->cur)->vt->f8(*(Elem_82F48CB8 **)p->cur);
      p->cur = p->cur + 4;
    }
    if (p->first != 0)
      fn_82E4FE40(p->first);
    p->first = 0;
  }
}
