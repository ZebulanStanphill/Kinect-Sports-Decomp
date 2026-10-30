typedef struct O O;
struct O { void (**vt)(O *o, int flags); };
extern void *fn_8265C9E0(int size);
extern O *fn_8223B590(void *mem);
typedef struct { char pad[0x2c0]; O *obj; } T;
void fn_828A5680(T *t)
{
  void *mem = fn_8265C9E0(0xe4);
  O *n = mem ? fn_8223B590(mem) : 0;
  O *old = t->obj;
  t->obj = n;
  if (old != 0) {
    (*old->vt)(old, 1);
  }
}
