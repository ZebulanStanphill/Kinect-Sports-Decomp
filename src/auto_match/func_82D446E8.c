typedef struct Sub_82D446E8 Sub_82D446E8;
typedef struct VT_82D446E8 {
  char *(*f0)(char *, Sub_82D446E8 *, int, int, int, int);
} VT_82D446E8;
struct Sub_82D446E8 { VT_82D446E8 *vt; };
typedef struct Elem_82D446E8 { char pad[0x10]; Sub_82D446E8 sub; } Elem_82D446E8;
typedef struct Self_82D446E8 {
  char pad[0x20];
  Elem_82D446E8 **items;
  int count;
} Self_82D446E8;
unsigned char *fn_82D446E8(unsigned char *out, Self_82D446E8 *self, int a, int b, int c, int d)
{
  char buf[1];
  int i;
  for (i = self->count - 1; i >= 0; i--) {
    Elem_82D446E8 *e = self->items[i];
    char *r = e->sub.vt->f0(buf, &e->sub, a, b, c, d);
    if (*r == 0) {
      *out = 0;
      return out;
    }
  }
  *out = 1;
  return out;
}
