typedef struct Obj_82BF3E28 Obj_82BF3E28;
typedef struct {
  char pad0[4];
  void (*f4)(Obj_82BF3E28 *);
} VT_82BF3E28;
struct Obj_82BF3E28 {
  VT_82BF3E28 *vt;
};

typedef struct {
  char pad0[0x10];
  int f10;
} Item_82BF3E28;

typedef struct {
  char pad0[0x14];
  int f14;
  char pad18[8];
  Item_82BF3E28 *f20;
} Worker_82BF3E28;

extern int fn_82BFAAA8(void *, int);
extern void fn_82BFABD8(void *, const char *);
extern void fn_82BFABE0(void *, const char *);
extern void fn_82BE8D28(void *);
extern void fn_82BE8D50(void *);
extern void fn_82BF6BC0(void *, void *);

int fn_82BF3E28(Worker_82BF3E28 *self)
{
  Obj_82BF3E28 *o;
  Item_82BF3E28 *it;

  while (fn_82BFAAA8((char *)self + 0x58, -1) != 0 && self->f14 == 0) {
    fn_82BFABD8((char *)self + 0x2c, "CFileAsyncWorker::ThreadProc");
    o = 0;
    it = self->f20;
    if (it != 0) {
      if (it->f10 != 0) {
        o = (Obj_82BF3E28 *)it->f10;
        fn_82BE8D28(o);
      }
      fn_82BF6BC0((char *)self + 0x18, it);
    }
    fn_82BFABE0((char *)self + 0x2c, "CFileAsyncWorker::ThreadProc");
    if (o != 0) {
      o->vt->f4(o);
      fn_82BE8D50(o);
    }
  }
  return 0;
}
