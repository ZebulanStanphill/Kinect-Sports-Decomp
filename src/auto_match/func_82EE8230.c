extern void fn_82EE8150(void);
extern void *fn_82F6A6C8(void *, int, void *, void *, int, void *);

typedef struct {
  int pad[4];
  void *handle;
  int id;
  int pad2;
  int param;
} Obj;

int fn_82EE8230(Obj *p, int param)
{
  void *h;

  p->param = param;
  h = fn_82F6A6C8(0, 0, fn_82EE8150, p, 0, &p->id);
  p->handle = h;
  if (h == 0) {
    p->handle = (void *)-1;
    return 0x80004005;
  }
  return 0;
}
