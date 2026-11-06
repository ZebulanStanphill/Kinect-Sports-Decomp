struct Obj_826819E0 {
  unsigned size;
  unsigned count;
  unsigned cap;
  void **slots;
  void Grow(unsigned i);
};
extern "C" void fn_82681F28(Obj_826819E0 *p, unsigned n)
{
  if (n > p->size) {
    unsigned i;
    for (i = p->count; i < (n + 0x3ff) >> 10; i++)
      p->Grow(i);
    p->size = n;
  } else if (n < p->size) {
    p->size = n;
  }
}
