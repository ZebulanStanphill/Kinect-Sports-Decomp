typedef struct Obj_8267AF20 { char pad[8]; unsigned int count; void *f0c; char pad2[0x30]; unsigned int tab[1]; } Obj_8267AF20;
extern int fn_8268EC80(void *a, unsigned int *e, unsigned int key, int p3, int p4, int p5);

int fn_8267AF20(Obj_8267AF20 *o, unsigned int key, int p3, int p4, int p5)
{
  unsigned int i = 0;
  unsigned int *p;
  unsigned int *e;
  unsigned int n = o->count;
  if (n != 0) {
    p = o->tab;
    do {
      e = p - 4;
      if (key >= p[0] && key < p[1] + p[0]) {
        return fn_8268EC80(o->f0c, e, key, p3, p4, p5) < 2;
      }
      i++;
      p += 8;
    } while (i < n);
  }
  return 0;
}
