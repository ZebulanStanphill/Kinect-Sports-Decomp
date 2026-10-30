typedef struct Elem_82BE1E28 { struct EVT_82BE1E28 *vt; int pad[3]; int f10; } Elem_82BE1E28;
typedef struct EVT_82BE1E28 { void (*dtor)(Elem_82BE1E28 *, int); } EVT_82BE1E28;
typedef struct Obj_82BE1E28 {
  char pad[0x170];
  char list[8];
  int f178;
  int pad2;
  Elem_82BE1E28 *f180;
} Obj_82BE1E28;
extern void fn_82BE5340(void *);
extern Elem_82BE1E28 *fn_82BE5378(void *);
extern void *fn_82BE5320(void *, void *);
extern void fn_82BE5350(void *);
extern void fn_82BE5398(void *, void *, int);

int fn_82BE1E28(Obj_82BE1E28 *o)
{
  void *l = o->list;
  fn_82BE5340(l);
  while (o->f178 != 0) {
    Elem_82BE1E28 *e = fn_82BE5378(l);
    if (e->f10 == 4 || e->f10 == 0) {
      if (e == o->f180) o->f180 = 0;
      fn_82BE5398(l, fn_82BE5320(l, fn_82BE5378(l)), 1);
      e->vt->dtor(e, 1);
    } else {
      fn_82BE5350(l);
    }
  }
  return 0;
}
