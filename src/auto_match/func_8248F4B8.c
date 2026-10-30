typedef struct { int a; void *mgr; int b; } Globals;
extern Globals lbl_83276728;
extern int fn_82528BF8(void *mgr, const char *name, void *c, void *d, int e, int f);

int fn_8248F4B8(void *self, const char *name, void *c, void *d)
{
  if (name == 0 || *name == 0) return 0;
  return fn_82528BF8(lbl_83276728.mgr, name, c, d, 0, 1) == 0;
}
