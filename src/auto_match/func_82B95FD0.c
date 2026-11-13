extern int fn_828F0E90();
extern int fn_82B8FDD0();


void fn_82B95FD0(int param_1,int param_2,int param_3,int param_4)
{
  int lVar1;
  unsigned uVar2;
  unsigned n;

  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar2 = 0;
  lVar1 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 + *(unsigned *)(param_1 + 0x20);
  if (*(unsigned int *)(param_1 + 0x68) > 0) {
    int p = param_4;
    do {
      fn_828F0E90(lVar1,2,p,4,2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 4;
      p = p + 0x10;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x68));
  }
}
