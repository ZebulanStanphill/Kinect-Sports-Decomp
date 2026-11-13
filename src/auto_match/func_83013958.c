extern unsigned int lbl_832645E4;
extern unsigned int lbl_832645E8;


unsigned __int64 fn_83013958(unsigned __int64 param_1,int param_2,int param_3)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int *puVar4;
  
  for (piVar3 = lbl_832645E4; (piVar3 != lbl_832645E8 && (*piVar3 != param_3)); piVar3 = piVar3 + 3)
  {
  }
  puVar4 = (unsigned int *)(-(unsigned int)(lbl_832645E8 != piVar3) & (unsigned int)(piVar3 + 1));
  if (puVar4 != (unsigned int *)0x0) {
    if (param_2 == 1) {
      pcVar1 = (int (**)())*puVar4;
    }
    else {
      pcVar1 = (int (**)())puVar4[1];
    }
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 0;
}

