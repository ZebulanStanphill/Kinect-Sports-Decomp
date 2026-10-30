struct Obj_82FFE980;
typedef struct ObjVt_82FFE980 {
  int pad[2];
  void (*f8)(struct Obj_82FFE980 *);
} ObjVt_82FFE980;
typedef struct Obj_82FFE980 {
  ObjVt_82FFE980 *vt;
} Obj_82FFE980;
typedef struct Key_82FFE980 {
  unsigned int id;
} Key_82FFE980;
typedef struct Src_82FFE980 {
  int pad;
  int key;
} Src_82FFE980;
typedef struct Dst_82FFE980 {
  int pad[0xd];
  char tbl[1];
} Dst_82FFE980;

extern Key_82FFE980 *fn_82FF8ED8(void *, int);
extern Obj_82FFE980 *fn_82FAB9C0(void *, unsigned int);
extern Obj_82FFE980 *fn_8302D378(unsigned int, int);
extern int fn_8302E548(Obj_82FFE980 *, Key_82FFE980 *, int);
extern Obj_82FFE980 **fn_830080D8(void *);
extern void fn_82FF86A8(void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];

int fn_82FFE980(char *self, Src_82FFE980 *src, Dst_82FFE980 *dst, void *ctx)
{
  int r = 1;
  Key_82FFE980 *k;
  Obj_82FFE980 *o;
  Obj_82FFE980 **slot;
  unsigned int id;
  k = fn_82FF8ED8(self + 4, src->key);
  if (k == 0) {
    return 2;
  }
  id = k->id;
  o = fn_82FAB9C0(ctx, id);
  if (o == 0) {
    RtlEnterCriticalSection(lbl_8326434C);
    o = fn_8302D378(id, 1);
    if (o == 0) {
      r = 2;
    } else {
      r = fn_8302E548(o, k, src->key);
      if (r != 1) {
        o->vt->f8(o);
      }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (r != 1) goto done;
  }
  slot = fn_830080D8(dst->tbl);
  if (slot != 0) {
    *slot = o;
  }
done:
  fn_82FF86A8(self + 4);
  return r;
}
