extern void *fn_8267B8F0(int heap, int size, int align, int flags);
extern char lbl_8200E7B0[];
extern int lbl_831E7E64;

typedef struct {
  int refs;
  void *stream;
} RefData;

typedef struct {
  void *vt;
  RefData rc;
  void *buf;
  int a10;
  int a14;
  int a18;
  int pad1c;
  __int64 a20;
} Obj;

Obj *fn_8270D258(Obj *o)
{
  RefData *rc = &o->rc;

  rc->refs = 1;
  rc->stream = 0;
  o->vt = lbl_8200E7B0;
  o->buf = fn_8267B8F0(lbl_831E7E64, 0x1ff8, 0x20, 0);
  o->a10 = 0;
  o->a20 = 0;
  o->a14 = 0;
  o->a18 = 0;
  return o;
}
