typedef struct Dev_82AB0FC0 { char pad[0xa0]; unsigned int mask; } Dev_82AB0FC0;
typedef struct Ctx_82AB0FC0 { char pad[0x10]; Dev_82AB0FC0 *dev; } Ctx_82AB0FC0;
extern int fn_82AB0F30(unsigned int **, int);

int fn_82AB0FC0(unsigned int a, unsigned int **cur, int b, Ctx_82AB0FC0 *c)
{
  unsigned int *p;
  int i;
  if (fn_82AB0F30(cur, b) != 0) {
    return 1;
  }
  if (a < 0xffff0200) {
    p = *cur;
    *p = 0x47;
    *++p = 0x570000;
    *++p = 0x155;
    *++p = 0x40000;
  }
  else {
    if (a < 0xffff0300) {
      Dev_82AB0FC0 *d = c->dev;
      p = *cur;
      for (i = 0; i < 4; i++) {
        if ((d->mask >> i & 1) != 0) {
          *p = 0xe;
          *++p = (i & 0xffff) | 0x170000;
          *++p = ((i + 0x23) & 0xffff) | 0x40000;
          p++;
          *cur = p;
        }
      }
      *cur = p;
    }
    if (*(int *)((char *)c->dev + 0x9c) == 0) {
      return 0;
    }
    p = *cur;
    *p = 0x47;
    *++p = 0x580000;
    *++p = 0x155;
    *++p = 0x40022;
  }
  *cur = p + 1;
  return 0;
}
