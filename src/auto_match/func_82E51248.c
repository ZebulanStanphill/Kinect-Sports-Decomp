typedef struct Obj_82E51248 { void **vt; } Obj_82E51248;
typedef struct Lock_82E51248 { char b[1]; } Lock_82E51248;
typedef struct Holder_82E51248 {
  char pad0[0x60];
  Obj_82E51248 *obj;   /* 0x60 */
  Lock_82E51248 lock;  /* 0x64 */
} Holder_82E51248;

extern void fn_82E50CB8(Lock_82E51248 *l);
extern void fn_82E50F10(Lock_82E51248 *l);

int fn_82E51248(Holder_82E51248 *h, void *arg)
{
  int r = (int)0xc00d36b2;
  fn_82E50CB8(&h->lock);
  if (h->obj != 0) {
    r = (*(int (*)(Obj_82E51248 *, void *))h->obj->vt[0x84 / 4])(h->obj, arg);
  }
  fn_82E50F10(&h->lock);
  return r;
}
