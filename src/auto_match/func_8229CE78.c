extern void fn_82273C88(void *v);
extern void fn_82273CD8(void *v, int type);
extern void fn_82A1EFC0(void *self, int a, int b);
extern void fn_82672C20(void *movie, const char *path, void *args, int count);

typedef struct {
  char pad[8];
  void *movie;
} Obj_8229CE78;

void fn_8229CE78(Obj_8229CE78 *self, int mode)
{
  struct { unsigned int a, b; double d; } args;

  args.a = 0;
  args.b = 0;
  fn_82273CD8(&args, 3);
  args.d = (double)mode;
  fn_82A1EFC0(self, 0, 8);
  fn_82672C20(self->movie, "_root.handIconMngr.setDisplayMode", &args, 1);
  fn_82273C88(&args);
}
