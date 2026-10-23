typedef struct {
  int handle;
  void *buf;
  unsigned int size;
} Obj;

extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82A1E658(int handle);

int fn_82920638(Obj *o)
{
  if (o->buf != 0) {
    fn_8265C990(o->buf, 0x24810000);
    o->buf = 0;
    o->size = 0;
  }
  if (o->handle != -1) {
    fn_82A1E658(o->handle);
    o->handle = -1;
  }
  return 0;
}
