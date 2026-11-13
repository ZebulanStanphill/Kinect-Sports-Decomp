#define true 1
extern int fn_82B7BEB0();


void fn_82BC4CB0(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
LAB_82bc4d04:
  do {
    if (*(int *)(iVar4 + param_1[5]) != 0) {
      if (*(int *)(*(int *)(iVar4 + param_1[5]) + 4) != 0) {
        iVar2 = *(int *)(iVar4 + param_1[5]);
        uVar1 = *(unsigned int *)(iVar2 + 4);
        if (iVar2 != 0) {
          fn_82B7BEB0(*(unsigned int *)(iVar2 + -4),iVar2 + -4);
        }
        *(unsigned int *)(iVar4 + param_1[5]) = uVar1;
        goto LAB_82bc4d04;
      }
    }
    iVar2 = *(int *)(iVar4 + param_1[5]);
    if (iVar2 != 0) {
      fn_82B7BEB0(*(unsigned int *)(iVar2 + -4),iVar2 + -4);
    }
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + 4;
    if ((unsigned int)param_1[7] < uVar3) {
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),param_1[5]);
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),param_1[6]);
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),*param_1);
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),param_1[3]);
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),param_1[4]);
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),param_1[1]);
      fn_82B7BEB0(*(unsigned int *)(param_1[9] + 0x5b0),param_1[2]);
      param_1[6] = 0;
      return;
    }
  } while( true );
}

