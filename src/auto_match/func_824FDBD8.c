typedef struct B_824FDBD8 { char pad[0x20]; int v; } B_824FDBD8;
typedef struct A_824FDBD8 { char pad[0x14]; B_824FDBD8 *p14; B_824FDBD8 *p18; char pad2[0xf8]; unsigned int f114; } A_824FDBD8;
extern A_824FDBD8 *fn_8249ABC0();

unsigned int fn_824FDBD8(int param_1)
{
  A_824FDBD8 *a;
  int x;

  if (param_1 == 0) {
    a = fn_8249ABC0();
    if (a->f114 != 0xffffffff) {
      return a->f114;
    }
    a = fn_8249ABC0();
    x = a->p14->v;
    if (x < 0) {
      x = a->p18->v;
      if (x < 0) {
        x = 0;
      }
      else {
        x = x == 0;
      }
    }
  }
  else {
    a = fn_8249ABC0();
    x = a->p18->v;
    if (x < 0) {
      x = a->p14->v;
      if (x < 0) {
        x = 1;
      }
      else {
        x = x == 0;
      }
    }
  }
  return x;
}
