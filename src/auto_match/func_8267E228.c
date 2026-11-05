typedef struct Obj_8267E228 Obj_8267E228;
typedef struct Item_8267E228 Item_8267E228;
struct Item_8267E228 {
  int *vt;
};
typedef struct {
  void *f0;
  void *f4;
  Item_8267E228 *(*f8)(void *);
  void (*fc)(void *);
} ObjVt_8267E228;
typedef struct {
  void *f0;
  void *f4;
  unsigned char (*f8)(void *);
  void (*fc)(void *);
} ItemVt_8267E228;
struct Obj_8267E228 {
  ObjVt_8267E228 *vt;
};
typedef struct { ItemVt_8267E228 *vt; } ItemC_8267E228;

int fn_8267E228(Obj_8267E228 **objs, unsigned n)
{
  unsigned i;
  ItemC_8267E228 *it;

  for (i = 0; i < n; i++) {
    it = (ItemC_8267E228 *)objs[i]->vt->f8(objs[i]);
    if (it->vt->f8(it) != 0) {
      it->vt->fc(it);
      return i;
    }
  }
  return -1;
}
