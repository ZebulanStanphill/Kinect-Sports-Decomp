typedef struct {
  int pad0, pad1;
  void *h;
  char flag;
} Obj_func_82CFB4F8;

extern int fn_82F67CF8(void *, int, void *, void *);
extern void fn_82F67988(void *);

int fn_82CFB4F8(Obj_func_82CFB4F8 *o, void *b, void *c)
{
  int r;
  if (o->h != 0) {
    r = fn_82F67CF8(b, 1, c, o->h);
    if (r <= 0) {
      if (o->h != 0 && o->flag != 0)
        fn_82F67988(o->h);
      o->h = 0;
    }
    return r;
  }
  return 0;
}
