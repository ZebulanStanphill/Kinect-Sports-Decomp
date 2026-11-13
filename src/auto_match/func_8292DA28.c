extern int fn_828F1108();
extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82002AE0;


void fn_8292DA28(int param_1,int param_2,int param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  uVar2 = (__int64)*(int *)(param_1 + 0x60) * (__int64)param_2 +
          (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  uVar1 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0x3fffffff) * 4 + uVar2;
  if ((uVar2 & 0xffffffff) < (uVar1 & 0xffffffff)) {
    dVar3 = (double)lbl_82002AE0;
    do {
      fn_828F1108(param_4,uVar2,2);
      uVar2 = uVar2 + 4;
      *(float *)(param_4 + 0xc) = (float)dVar3;
      *(float *)(param_4 + 8) = (float)dVar3;
      param_4 = param_4 + 0x10;
    } while ((uVar2 & 0xffffffff) < (uVar1 & 0xffffffff));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82B8FD40(param_1,param_4 + *(int *)(param_1 + 0x68) * -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + *(int *)(param_1 + 0x68) * -0x10);
  }
  return;
}

