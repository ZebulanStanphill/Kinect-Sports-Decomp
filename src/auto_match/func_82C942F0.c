extern unsigned int lbl_820FDD78;


void fn_82C942F0(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_4;
  iVar5 = *param_5;
  iVar4 = *param_6;
  if (((param_2 == 0) || (param_2 == 4)) || (param_2 == 5)) {
    iVar3 = *(int *)(param_1 + 0x19d0);
    iVar2 = param_3 + *(int *)(param_1 + 0x88) * -0x18;
    iVar1 = *(int *)(&lbl_820FDD78 +
                    (*(unsigned int *)((unsigned int)*(unsigned char *)(param_3 + 4) * 0x14 + iVar3 + 0x10) & 0x3f) * 4);
    iVar4 = *(int *)((unsigned int)*(unsigned char *)(iVar2 + -0x14) * 0x14 + iVar3 + 0x10) * iVar1 * iVar4 + 0x20000
            >> 0x12;
    iVar6 = *(int *)((unsigned int)*(unsigned char *)(iVar2 + 4) * 0x14 + iVar3 + 0x10) * iVar1 * iVar6 + 0x20000 >>
            0x12;
    iVar5 = *(int *)((unsigned int)*(unsigned char *)(param_3 + -0x14) * 0x14 + iVar3 + 0x10) * iVar1 * iVar5 +
            0x20000 >> 0x12;
  }
  else {
    if (param_2 == 1) {
      iVar3 = *(int *)((unsigned int)*(unsigned char *)(param_3 + *(int *)(param_1 + 0x88) * -0x18 + 4) * 0x14 +
                       *(int *)(param_1 + 0x19d0) + 0x10) *
              *(int *)(&lbl_820FDD78 +
                      (*(unsigned int *)((unsigned int)*(unsigned char *)(param_3 + 4) * 0x14 + *(int *)(param_1 + 0x19d0) +
                                0x10) & 0x3f) * 4);
      *param_4 = iVar3 * iVar6 + 0x20000 >> 0x12;
      *param_5 = iVar5;
      *param_6 = iVar3 * iVar4 + 0x20000 >> 0x12;
      return;
    }
    if (param_2 == 2) {
      iVar3 = *(int *)((unsigned int)*(unsigned char *)(param_3 + -0x14) * 0x14 + *(int *)(param_1 + 0x19d0) + 0x10);
      iVar1 = *(int *)(&lbl_820FDD78 +
                      (*(unsigned int *)((unsigned int)*(unsigned char *)(param_3 + 4) * 0x14 + *(int *)(param_1 + 0x19d0) +
                                0x10) & 0x3f) * 4);
      *param_4 = iVar6;
      iVar3 = iVar3 * iVar1;
      *param_5 = iVar3 * iVar5 + 0x20000 >> 0x12;
      *param_6 = iVar3 * iVar4 + 0x20000 >> 0x12;
      return;
    }
  }
  *param_4 = iVar6;
  *param_5 = iVar5;
  *param_6 = iVar4;
  return;
}

