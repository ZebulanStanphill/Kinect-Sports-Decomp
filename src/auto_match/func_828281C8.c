extern void *fn_8265C9E0(int);
extern int fn_82822300();
extern void *fn_828252D0(int);
extern unsigned fn_82827980();
extern int fn_82828B78();
extern int fn_82829A80();
extern char *strncpy(char *, const char *, unsigned);
extern unsigned strlen(const char *);
typedef struct { int p0; int p4; char *name; int fc; int f10; unsigned char f14; char pad[7]; int f1c; int f20; char f24[4]; int f28; } Ent_828281C8;
typedef struct { char pad[0x51]; unsigned char cnt; } Obj_828281C8;
unsigned fn_828281C8(char *obj, char *name, Ent_828281C8 **out)
{
  unsigned r;
  Ent_828281C8 *e;
  unsigned len;
  int m;
  unsigned char c;
  char buf[1];
  r = fn_82827980();
  if ((unsigned char)r == 0) {
    obj[0x51] = obj[0x51] + 1;
    e = (Ent_828281C8 *)fn_828252D0(0x2c);
    len = strlen(name) + 1;
    e->name = (char *)fn_828252D0(len);
    strncpy(e->name, name, len);
    c = obj[0x51];
    e->fc = 0;
    e->f1c = 0;
    e->f20 = 0;
    e->f14 = c;
    fn_82822300(obj + 0x2f4, e);
    r = (unsigned char)obj[0x51];
    if (obj[0x3f1] != 0) {
      fn_82829A80(obj, "pool", name, &e->f24, 0x20);
      m = (int)fn_8265C9E0(0x10);
      if (m != 0) {
        fn_82828B78(m, buf, buf);
      } else {
        m = 0;
      }
      e->f28 = m;
    }
    if (out != 0) {
      *out = e;
    }
  }
  return r;
}
