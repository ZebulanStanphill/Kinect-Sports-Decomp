typedef struct Obj_8267AFB8 { char pad[8]; unsigned int count; void *f0c; char pad2[0x30]; unsigned int tab[1]; } Obj_8267AFB8;
extern void fn_8268EAC0(void *a, unsigned int *e, unsigned int key, int p3, int p4);

int fn_8267AFB8(Obj_8267AFB8 *o, unsigned int key, int p3, int p4)
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
        fn_8268EAC0(o->f0c, e, key, p3, p4);
        return 1;
      }
      i++;
      p += 8;
    } while (i < n);
  }
  return 0;
}
