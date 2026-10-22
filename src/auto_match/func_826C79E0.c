typedef int (*code)();
extern int fn_8267B890(int, int, int);
extern int fn_8267BE38();

typedef struct { int v[4]; } Q;

void fn_826C79E0(int *param_1, Q *param_2)
{
  unsigned int iVar1;
  unsigned char changed;
  iVar1 = param_1[0x29];
  changed = (param_2 != 0) != (iVar1 != 0);
  if (param_2 == 0) {
    fn_8267BE38(iVar1);
    param_1[0x29] = 0;
    *(unsigned char *)((int)param_1 + 0x66) &= 0xfe;
  }
  else {
    if (iVar1 == 0) {
      param_1[0x29] = fn_8267B890(*(int *)(param_1[0x28] + 0x14),0x10,0);
    }
    *(Q *)param_1[0x29] = *param_2;
    *(unsigned char *)((int)param_1 + 0x66) |= 1;
  }
  if (changed) {
    (*(code *)(*param_1 + 0x3c))(param_1);
  }
  *(unsigned int *)(param_1[0x28] + 0xb00) |= 0x400;
}
