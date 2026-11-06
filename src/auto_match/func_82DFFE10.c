struct O;
typedef struct { char pad0[0x2c]; void (*f2c)(struct O *, void *, unsigned char, void *);
  char pad1[0x40-0x30]; char *(*f40)(void *, struct O *, void *, unsigned char, void *);
  void (*f44)(struct O *, void *, unsigned char, void *, void *);
  void (*f48)(struct O *, void *, unsigned char, void *); } VT;
typedef struct O { VT *vt; } O;
typedef struct { char pad[0x1c]; struct { char pad[0x20]; unsigned char n; } *info; } P3;
void fn_82DFFE10(O *o, int unused, P3 *p3, char *base)
{
  unsigned char i;
  unsigned char n;
  char a[16];
  char b[48];
  i = 0;
  n = p3->info->n;
  if (n != 0) {
    do {
      char *el = base + i * 0x60;
      char *r = o->vt->f40(a, o, p3, i, b);
      if (*r != 0) o->vt->f44(o, p3, i, b, el);
      else o->vt->f48(o, p3, i, el);
      o->vt->f2c(o, p3, i, el);
      i = i + 1;
    } while (i < n);
  }
}
