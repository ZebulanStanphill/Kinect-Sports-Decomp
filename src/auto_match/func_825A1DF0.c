typedef struct {
  char pad0[0x8ac];
  unsigned int flags;
  char pad1[0x8b4 - 0x8b0];
  int f8b4;
} Obj_825A1DF0;

extern int *fn_825A27B8(Obj_825A1DF0 *o);

void fn_825A1DF0(Obj_825A1DF0 *o)
{
  int *h = fn_825A27B8(o);
  unsigned char *p;
  int i;
  unsigned int fl;
  unsigned int len;

  if (h != 0) {
    p = (unsigned char *)(h + 2);
    i = 0;
    fl = 0;
    if (*h > 0) {
      do {
        if (p == 0) break;
        i = i + 1;
        fl = *(unsigned int *)(p + 4) | fl;
        len = p[1];
        if (len != 0) p = p + len; else p = 0;
      } while (i < *h);
    }
    o->flags = o->flags | fl;
  }
  o->f8b4 = 0;
}
