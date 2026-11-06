typedef struct Ent_82BA9230 {
  int a;
  unsigned char flag;
  char pad[7];
} Ent_82BA9230;

typedef struct Obj_82BA9230 {
  char pad0[0x10];
  int f10;
  char pad14[0x3c];
  int f50;
  char pad54[0x2c];
  unsigned char f80[4];
  char pad84[0x60];
  struct { unsigned int a : 30; unsigned int b : 1; unsigned int c : 1; } fe4;
} Obj_82BA9230;

extern Ent_82BA9230 lbl_820E7F98[];

int fn_82BA9230(Obj_82BA9230 *param_1)
{
  unsigned char ok;
  int i;
  unsigned char v;

  if (param_1->f10 != 0) {
    if ((unsigned char)param_1->fe4.b == 0) {
      if (lbl_820E7F98[param_1->f50].flag != 0) {
        ok = 1;
        goto L;
      }
    }
  }
  ok = 0;
L:
  if (ok) {
    i = 0;
    do {
      v = param_1->f80[i];
      if (v >= 2 && v <= 3) {
        return 1;
      }
      i = i + 1;
    } while (i < 4);
  }
  return 0;
}
