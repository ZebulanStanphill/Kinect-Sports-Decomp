typedef struct Object_82BF8848 {
  void *vtable;
  int unk4;
  void *impl;
  int unkC;
} Object_82BF8848;

extern void fn_82BE8CE0(Object_82BF8848 *self);
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BF82F8(void *self, int a, __int64 b, int c, int d, int e, int f, int g,
                         const char *s1, const char *s2);
extern char lbl_820EBDB8[];

Object_82BF8848 *fn_82BF8848(Object_82BF8848 *self, int a, __int64 b, int c, int d, int e,
                             int f, int g, const char *s1, const char *s2)
{
  void *mem;
  fn_82BE8CE0(self);
  self->unkC = 0;
  self->vtable = lbl_820EBDB8;
  mem = fn_82BE56B0(0x38);
  self->impl = mem ? fn_82BF82F8(mem, a, b, c, d, e, f, g, s1, s2) : 0;
  return self;
}
