extern int fn_82418130();
extern unsigned int ltcg_pool_0_0f;


void fn_82412B58(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[0xc];
  if ((*(int *)(param_3 + 0x1a0) != 0) || (iVar5 = 0, *(int *)(param_3 + 0x1e0) != 0)) {
    iVar5 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x200);
  *(float *)(param_1 + 0x20c) = *(float *)(param_1 + 0x2a8) + *(float *)(param_1 + 0x20c);
  if (*(int *)(*param_2 + 0xcb8) == 0) goto LAB_82412c7c;
  iVar2 = param_2[0x20];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
LAB_82412c24:
      uVar3 = 4;
    }
    else if (iVar2 == 2) {
      uVar3 = 6;
    }
    else if (iVar2 == 3) {
      uVar3 = 7;
    }
    else if (iVar2 == 4) {
      uVar3 = 8;
    }
    else {
      if (iVar2 == 5) goto LAB_82412c24;
      if (iVar2 != 6) goto LAB_82412c64;
      uVar3 = 9;
    }
    *(unsigned int *)(param_1 + 0x200) = uVar3;
LAB_82412c64:
    *(unsigned int *)(param_1 + 0x2a4) = 1;
    goto LAB_82412cd8;
  }
  if (iVar4 == 1) {
    if (iVar1 == 0) goto LAB_82412cd8;
    if (iVar5 != 0) {
      *(unsigned int *)(param_1 + 0x200) = 2;
      goto LAB_82412cd8;
    }
    iVar5 = *(int *)(iVar1 + 0x3c);
LAB_82412cc4:
    if (iVar5 == 0) {
      *(unsigned int *)(param_1 + 0x200) = 3;
      uVar3 = fn_82418130();
      *(unsigned int *)(param_1 + 0x2d8) = uVar3;
    }
  }
  else {
    if (iVar4 == 2) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) == 0)) goto LAB_82412cc4;
    }
    else {
      if (iVar4 != 3) {
        if ((iVar4 != 4) && ((iVar4 < 6 || (9 < iVar4)))) goto LAB_82412cd8;
        *(unsigned int *)(param_1 + 0x200) = 1;
        goto LAB_82412c64;
      }
      if ((iVar1 != 0) && (iVar5 == 0)) goto LAB_82412cd8;
    }
LAB_82412c7c:
    *(unsigned int *)(param_1 + 0x200) = 1;
  }
LAB_82412cd8:
  uVar3 = ltcg_pool_0_0f;
  if (iVar4 != *(int *)(param_1 + 0x200)) {
    if (*(int *)(param_1 + 0x200) == 3) {
      *(unsigned int *)(param_1 + 0x280) = ltcg_pool_0_0f;
      *(unsigned int *)(param_1 + 0x284) = 1;
    }
    *(unsigned int *)(param_1 + 0x20c) = uVar3;
    *(unsigned char *)(param_1 + 0x2cc) = 0;
    *(unsigned int *)(param_1 + 0x204) = 0;
  }
  return;
}

