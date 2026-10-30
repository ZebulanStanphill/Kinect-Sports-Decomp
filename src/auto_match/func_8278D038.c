typedef struct Str_8278D038 {
  int pad0[2];
  unsigned int f8;
  char pad[0x1e];
  union { unsigned short f2a; struct { unsigned short : 4; unsigned short b11 : 1; unsigned short : 11; } bf; };
} Str_8278D038;
extern unsigned int strlen(const char *);
extern char *strchr(const char *, int);
extern unsigned int fn_8268ACE8(unsigned int *);
extern int fn_8268AE58(char *, const char *, unsigned int);
extern void fn_8268B610(unsigned int *, const char *, unsigned int);
extern void fn_8268BEA8(unsigned int *);
extern void fn_8278CF00(Str_8278D038 *);

void fn_8278D038(Str_8278D038 *s, const char *p, unsigned int len)
{
  if (len == 0xffffffff) {
    len = strlen(p);
  }
  if ((unsigned char)s->bf.b11 != 0) {
    if (fn_8268ACE8(&s->f8) != len || fn_8268AE58((char *)((s->f8 & 0xfffffffc) + 8), p, len) != 0) {
      fn_8278CF00(s);
    }
  }
  fn_8268BEA8(&s->f8);
  fn_8268B610(&s->f8, p, len);
  s->f2a = s->f2a | 4;
  if (strchr((char *)((s->f8 & 0xfffffffc) + 8), 0x2c) == 0) {
    s->f2a = s->f2a | 0x1000;
  } else {
    s->f2a = s->f2a & 0xefff;
  }
}
