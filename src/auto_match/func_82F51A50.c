extern char lbl_82165B5C[];
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82F517C8(void *mem);
extern void fn_82F510F0(void *self, int a);

typedef struct { void *vt; void *impl; } Self;

Self *fn_82F51A50(Self *s, int a)
{
  void *mem;

  s->vt = lbl_82165B5C;
  mem = fn_8265C9E0(0x800);
  s->impl = mem ? fn_82F517C8(mem) : 0;
  fn_82F510F0(s, a);
  return s;
}
