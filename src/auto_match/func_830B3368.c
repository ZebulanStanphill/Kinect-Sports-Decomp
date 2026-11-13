extern unsigned int *auStack_30;
extern int fn_82A1E658();
extern int fn_82A2A108();


unsigned __int64 fn_830B3368(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int auStack_30;
  
  if ((param_2 == (unsigned int *)0x0) || (param_3 == (unsigned int *)0x0)) {
    uVar1 = 0xffffffff80004003;
  }
  else if ((*(int *)(param_1 + 0xec) == 0) || (*(int *)(param_1 + 0xf0) == 0)) {
    uVar1 = 0xffffffff8004000a;
  }
  else {
    auStack_30 = *(unsigned int *)(param_1 + 0xf8);
    if (auStack_30 == 0) {
      fn_82A1E658();
      uVar1 = 0xffffffff80040001;
    }
    else {
      if (*(unsigned int *)(param_1 + 0xf4) <= auStack_30) {
        auStack_30 = *(unsigned int *)(param_1 + 0xf4);
      }
      iVar2 = fn_82A2A108(*(int *)(param_1 + 0xec),*(int *)(param_1 + 0xf0),auStack_30,
                                &auStack_30,0);
      if (iVar2 == 1) {
        *param_2 = *(unsigned int *)(param_1 + 0xf0);
        *param_3 = auStack_30;
      }
      iVar2 = *(unsigned int *)(param_1 + 0xf8) - auStack_30;
      if (*(unsigned int *)(param_1 + 0xf8) < auStack_30) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0xf8) = iVar2;
      uVar1 = 0;
    }
  }
  return uVar1;
}

