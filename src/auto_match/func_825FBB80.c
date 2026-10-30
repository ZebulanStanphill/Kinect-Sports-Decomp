#define AT(p,off,T) (*(T *)((char *)(p) + (off)))
typedef void *P;
extern void fn_8251FA58(P);
extern void fn_82522ED8(P);
extern void fn_82552B50(P, int);
extern void fn_82627DB0(P, P);
void fn_825FBB80(char *param_1, int param_2)
{
  char *o = AT(AT(param_1, 4, char *), param_2 * 4, char *);
  char *p170, *ctx, *ent, *h, *list, *node, *item, *t;
  int i;
  int idx;
  unsigned slot;
  p170 = AT(o, 0x170, char *);
  if (p170 != 0) {
    AT(p170, 0x58, int) = 0;
    AT(p170, 0x54, int) = 1;
    AT(o, 0x170, int) = 0;
  } else {
    ctx = AT(AT(o, 0, char *), 0x1c, char *);
    i = 0;
    if (0 < AT(o, 6, short)) {
      ent = o + 0x2a0;
      do {
        if (AT(ent, 0xa2, unsigned short) == 0xfffe) fn_82627DB0(o, ent);
        i++;
        ent += 0x1d0;
      } while (i < AT(o, 6, short));
    }
    fn_82552B50(o + 0x284, 1);
    if (AT(o, 0x274, char *) != 0) {
      char *d = AT(o, 0x274, char *);
      (*(void (*)(char *))AT(AT(d, 0, char *), 8, void *))(d);
      d = AT(o, 0x274, char *);
      if (d != 0) (*(void (*)(char *, int))AT(AT(d, 0, char *), 0, void *))(d, 1);
      AT(o, 0x274, int) = 0;
    }
    if (AT(o, 0x294, char *) != 0) fn_8251FA58(AT(o, 0x294, char *));
    list = AT(ctx, 0x93c, char *);
    if (list != 0) {
      list = AT(list, 0xa0, char *);
      if (list != 0) {
        for (node = AT(list, 8, char *); node != 0; node = AT(node, 4, char *)) {
          item = AT(node, 0, char *);
          if (item != 0 && AT(item, 0x18, char *) == o) {
            AT(item, 0x10, int) = -1;
            AT(item, 0x18, int) = 0;
            AT(AT(item, 4, char *), 0x190, int) = 0;
            break;
          }
        }
      }
    }
    if (AT(o, 0x220, char *) != 0 && AT(o, 0x248, int) != 0) fn_8251FA58(AT(o, 0x220, char *));
    if (AT(o, 0x24c, int) == 0 && AT(o, 0x25c, char *) != 0) fn_8251FA58(AT(o, 0x25c, char *));
    if (AT(o, 0x250, int) == 0 && AT(o, 0x260, char *) != 0) fn_8251FA58(AT(o, 0x260, char *));
    if (AT(o, 0x228, char *) != 0) fn_8251FA58(AT(o, 0x228, char *));
    if (AT(o, 0x22c, char *) != 0) fn_8251FA58(AT(o, 0x22c, char *));
    if (AT(o, 0x230, char *) != 0) fn_8251FA58(AT(o, 0x230, char *));
    if (AT(o, 0x234, char *) != 0) fn_8251FA58(AT(o, 0x234, char *));
    h = AT(o, 0x244, char *);
    if (h != 0) {
      slot = AT(h, 0x238, unsigned);
      AT(h, 0x240, int) = AT(h, 0x240, int) - 1;
      if (slot != 0xffffffff) {
        if (AT(AT(AT(AT(h, 0, char *), ((int)slot >> 8 & 0xff) * 4, char *), 4, char *), (slot & 0xff) * 4, char *) == o)
          AT(h, 0x238, int) = -1;
      }
    }
    fn_82522ED8(o);
  }
  AT(AT(param_1, 4, char *), param_2 * 4, int) = 0;
}
