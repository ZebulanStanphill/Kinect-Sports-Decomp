typedef struct O O;
struct O { void (**vt)(O *, int, unsigned char); };
typedef struct { char pad[0x40]; O *o; } P;

void fn_82281EB0(P *p, int a, int b)
{
  if (p->o != 0) {
    p->o->vt[1](p->o, a, b);
  }
}
