typedef struct Obj_82BEAED8 { void (**vt)(struct Obj_82BEAED8 *, int); } Obj_82BEAED8;
typedef struct Item_82BEAED8 { int pad[2]; Obj_82BEAED8 *obj; } Item_82BEAED8;
typedef struct List_82BEAED8 { int pad[2]; int f8; } List_82BEAED8;
typedef struct Owner_82BEAED8 {
  char pad[0x28];
  char f28[0x14];
  List_82BEAED8 *f3c;
  List_82BEAED8 *f40;
  List_82BEAED8 *f44;
  List_82BEAED8 *f48;
} Owner_82BEAED8;
extern Item_82BEAED8 *fn_82BE5340(List_82BEAED8 *);
extern Item_82BEAED8 *fn_82BE5350(List_82BEAED8 *);
extern Obj_82BEAED8 *fn_82BE5378(List_82BEAED8 *);
extern void fn_82BE5478(void *);
extern void fn_82BE54C0(List_82BEAED8 *);
extern void fn_82BE56C0(List_82BEAED8 *);

#define DRAIN(F) \
  if (o->F != 0) { \
    fn_82BE5340(o->F); \
    while (o->F->f8 != 0) { \
      obj = fn_82BE5378(o->F); \
      if (obj != 0) { \
        (*obj->vt[0])(obj, 1); \
      } \
      fn_82BE5350(o->F); \
    } \
    fn_82BE5478(o->F); \
    l = o->F; \
    if (l != 0) { \
      fn_82BE54C0(l); \
      fn_82BE56C0(l); \
    } \
    o->F = 0; \
  }

int fn_82BEAED8(Owner_82BEAED8 *o)
{
  Item_82BEAED8 *it;
  Obj_82BEAED8 *obj;
  List_82BEAED8 *l;

  if (o->f3c != 0) {
    it = fn_82BE5340(o->f3c);
    while (it != 0) {
      obj = it->obj;
      if (obj != 0) {
        (*obj->vt[0])(obj, 1);
      }
      it = fn_82BE5350(o->f3c);
    }
    fn_82BE5478(o->f3c);
    l = o->f3c;
    if (l != 0) {
      fn_82BE54C0(l);
      fn_82BE56C0(l);
    }
    o->f3c = 0;
  }
  DRAIN(f40)
  DRAIN(f44)
  DRAIN(f48)
  fn_82BE5478(o->f28);
  return 1;
}
