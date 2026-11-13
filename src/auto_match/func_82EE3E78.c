typedef struct Inner_82EE3E78 { char pad[0x40]; unsigned int count; } Inner_82EE3E78;
typedef struct Obj_82EE3E78 {
  char pad[0xc];
  unsigned int f0c;
  char pad10[0x48 - 0x10];
  char tab[0xb0 - 0x48];
  unsigned int count;
} Obj_82EE3E78;
extern void fn_82EE3630(char *, unsigned int, Inner_82EE3E78 ***);
extern int fn_82E3C590(Inner_82EE3E78 *, void *, int);

int fn_82EE3E78(Obj_82EE3E78 *o, unsigned int a, void *b)
{
  Inner_82EE3E78 **pi;
  if (o->f0c == 0) {
    return 0xc00d36b6;
  } else {
    a = a & 0xffff;
    if (a >= o->count) {
      return 0xc00d36d5;
    } else {
      fn_82EE3630(o->tab, a, &pi);
      if ((*pi)->count >= 1) return 0xc00d3a9a;
      fn_82EE3630(o->tab, a, &pi);
      return fn_82E3C590(*pi, b, 0) == 0 ? 0x8007000e : 0;
    }
  }
}
