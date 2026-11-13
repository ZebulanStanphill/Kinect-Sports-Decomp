typedef struct Sub_82758D20 {
  unsigned f0; int p4; int p8; int pc; int p10;
  unsigned f14; unsigned f18; int p1c[4];
  unsigned f28; unsigned f2c; unsigned f30; unsigned char f34; unsigned char f35;
} Sub_82758D20;
typedef struct Obj_82758D20 {
  int p0; int p4; int f8; Sub_82758D20 s;
  char pad[0x84 - 0xc - sizeof(Sub_82758D20)];
  unsigned char f84;
} Obj_82758D20;
typedef struct In_82758D20 { char pad[0x24]; unsigned char f24; } In_82758D20;
extern void fn_82758CD0(int);
extern void fn_8275CEE0(int);
extern void fn_8275F338(Sub_82758D20 *, int, int);
extern void fn_8275FA28(Sub_82758D20 *, unsigned, unsigned, int);
extern void fn_82764008(Sub_82758D20 *);

int fn_82758D20(Obj_82758D20 *o, unsigned char param_2)
{
  Sub_82758D20 *s;
  int m;

  if (*(unsigned *)((char *)o + 0x34) != 0) {
    s = (Sub_82758D20 *)((char *)o + 0xc);
    if (s->f0 != 0) {
      fn_82764008(s);
    }
    if (o->f84 != 0) {
      fn_82758CD0(o->f8);
    }
    m = o->f8;
    if (*(unsigned *)((char *)s + 0x28) != 0) {
      fn_8275F338(s, m + 0x28, m + 0x34);
    }
    fn_8275CEE0(o->f8);
    ((In_82758D20 *)o->f8)->f24 = ((In_82758D20 *)o->f8)->f24 & 0xef;
    *(unsigned *)((char *)s + 0x2c) = 0;
    *(unsigned *)((char *)s + 0x30) = 0;
    *(unsigned *)((char *)s + 0x28) = 0;
    *(unsigned char *)((char *)s + 0x35) = 0;
    fn_8275FA28(s, *(unsigned *)((char *)s + 0x14), *(unsigned *)((char *)s + 0x18), 0);
    o->f84 = param_2;
    return 1;
  }
  return 0;
}
