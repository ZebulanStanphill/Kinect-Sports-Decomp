extern void fn_8251FA58(void *);
extern void fn_82522ED8(void *);

struct Obj_825D1EC8;
typedef struct Vt_825D1EC8 {
  void *(*f0)(struct Obj_825D1EC8 *, int);
  void *pad;
  void (*f8)(struct Obj_825D1EC8 *);
} Vt_825D1EC8;
typedef struct Obj_825D1EC8 {
  Vt_825D1EC8 *vt;
} Obj_825D1EC8;
typedef struct Owner_825D1EC8 {
  int pad0[0x22];
  Obj_825D1EC8 *obj;
  void *f8c;
  void *f90;
  void *f94;
  int pad1[0x19];
  void *ffc;
} Owner_825D1EC8;

void fn_825D1EC8(Owner_825D1EC8 *p)
{
  Obj_825D1EC8 *o;
  if (p->obj != 0) {
    p->obj->vt->f8(p->obj);
    o = p->obj;
    if (o != 0) {
      o->vt->f0(o, 1);
    }
  }
  if (p->f8c != 0) {
    fn_8251FA58(p->f8c);
  }
  if (p->f94 != 0) {
    fn_8251FA58(p->f94);
  }
  if (p->ffc != 0) {
    fn_82522ED8(p->ffc);
  }
}
