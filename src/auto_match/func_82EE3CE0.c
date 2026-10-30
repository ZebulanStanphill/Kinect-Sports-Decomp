typedef struct Inner_82EE3CE0 { char pad[0x40]; unsigned int count; } Inner_82EE3CE0;
typedef struct Obj_82EE3CE0 {
  char pad[0xc];
  unsigned int f0c;
  char pad10[0x48 - 0x10];
  char tab[0xb0 - 0x48];
  unsigned int count;
} Obj_82EE3CE0;
extern void fn_82EE3630(char *, unsigned int, Inner_82EE3CE0 ***);
extern void fn_82E3C5F8(Inner_82EE3CE0 *, unsigned int, unsigned short **);

int fn_82EE3CE0(Obj_82EE3CE0 *o, unsigned int a, unsigned int b, unsigned short *out)
{
  Inner_82EE3CE0 **pi;
  unsigned short *pe;
  if (o->f0c == 0) {
    return 0xc00d36b6;
  } else if (out == 0) {
    return 0x80070057;
  } else {
    a = a & 0xffff;
    if (a >= o->count) {
      return 0xc00d36d5;
    } else {
      fn_82EE3630(o->tab, a, &pi);
      if ((b & 0xffff) >= (*pi)->count) return 0xc00d36d5;
      fn_82EE3630(o->tab, a, &pi);
      fn_82E3C5F8(*pi, b & 0xffff, &pe);
      *out = *pe;
      return 0;
    }
  }
}
