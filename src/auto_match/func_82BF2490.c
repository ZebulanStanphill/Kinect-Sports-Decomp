extern unsigned int lbl_831751D0;


unsigned __int64 fn_82BF2490(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = (*(int (**)())lbl_831751D0)(param_2);
  *(int *)(param_1 + 0x20) = iVar2;
  *(int *)(param_1 + 0x24) = iVar2;
  *(unsigned int *)(param_1 + 0x28) = 0;
  if (iVar2 == 0) {
    uVar1 = 0x65;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = 0;
    *(int *)(param_1 + 0x2c) = (int)param_2;
  }
  return uVar1;
}

