extern unsigned int lbl_832645F0;
extern unsigned int lbl_832645F4;


unsigned __int64
fn_83013A98(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5,
             unsigned __int64 param_6)

{
  unsigned int uVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  
  for (piVar3 = lbl_832645F0;
      (piVar3 != lbl_832645F4 && (*piVar3 != (param_2 * 0x1000 + param_1) * 0x10 + 4));
      piVar3 = piVar3 + 2) {
  }
  uVar1 = -(unsigned int)((lbl_832645F4 != piVar3) != 0);
  puVar4 = (unsigned int *)(uVar1 & (unsigned int)(piVar3 + 1));
  if (puVar4 != (unsigned int *)0x0) {
    piVar3 = (int *)(*(int (**)())*puVar4)(0xffffffff831bc7fc,uVar1,param_3,
                                       -(unsigned int)(lbl_832645F4 != piVar3));
    *param_5 = piVar3;
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(int (***)())(*piVar3 + 0x14))(piVar3,0xffffffff831bc7fc,param_3,param_4,param_6);
      if ((int)uVar2 == 1) {
        return uVar2;
      }
      (**(int (***)())(*(int *)*param_5 + 4))((int *)*param_5,0xffffffff831bc7fc);
      *param_5 = 0;
    }
  }
  return 2;
}

