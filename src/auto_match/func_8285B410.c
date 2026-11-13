extern int fn_82F68CC0();


void fn_8285B410(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 100) + param_2;
  iVar2 = *(int *)(param_1 + 100) + param_3;
  fn_82F68CC0(iVar2 + 0x10,iVar6 + 0x10,0x40);
  fn_82F68CC0(iVar2 + 0x50,iVar6 + 0x50,0x40);
  iVar3 = 0;
  *(unsigned char *)(iVar2 + 0x98) = *(unsigned char *)(iVar6 + 0x98);
  *(unsigned char *)(iVar2 + 0x99) = *(unsigned char *)(iVar6 + 0x99);
  *(unsigned int *)(iVar2 + 0x94) = *(unsigned int *)(iVar6 + 0x94);
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      piVar1 = (int *)(iVar2 + *(int *)(param_1 + 0x34));
      iVar2 = iVar2 + 4;
      iVar6 = *(int *)(*piVar1 + 0x40);
      iVar5 = iVar6 + param_2;
      iVar4 = iVar6 + param_3;
      *(unsigned char *)(iVar6 + param_3) = *(unsigned char *)(iVar6 + param_2);
      *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(iVar5 + 4);
      *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar5 + 8);
      *(unsigned int *)(iVar4 + 0xc) = *(unsigned int *)(iVar5 + 0xc);
      *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(iVar5 + 0x10);
      *(unsigned int *)(iVar4 + 0x14) = *(unsigned int *)(iVar5 + 0x14);
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x38));
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      piVar1 = (int *)(iVar2 + *(int *)(param_1 + 0x40));
      iVar2 = iVar2 + 4;
      iVar6 = *(int *)(*piVar1 + 0x50);
      *(unsigned int *)(iVar6 + param_3) = *(unsigned int *)(iVar6 + param_2);
      *(unsigned int *)(iVar6 + param_3 + 4) = *(unsigned int *)(iVar6 + param_2 + 4);
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x44));
  }
  return;
}

