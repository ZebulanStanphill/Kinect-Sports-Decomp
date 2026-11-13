void fn_828624E8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    iVar3 = 0;
    do {
      iVar2 = 0;
      iVar6 = *(int *)(iVar3 + *(int *)(param_1 + 0x3c) + 0xc);
      iVar5 = iVar6 + param_2;
      iVar4 = iVar6 + param_3;
      *(unsigned int *)(iVar6 + param_3) = *(unsigned int *)(iVar6 + param_2);
      *(unsigned short *)(iVar4 + 8) = *(unsigned short *)(iVar5 + 8);
      *(unsigned int *)(iVar4 + 0xc) = *(unsigned int *)(iVar5 + 0xc);
      *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(iVar5 + 0x10);
      *(unsigned int *)(iVar4 + 0x14) = *(unsigned int *)(iVar5 + 0x14);
      *(unsigned int *)(iVar4 + 0x18) = *(unsigned int *)(iVar5 + 0x18);
      *(unsigned int *)(iVar4 + 0x1c) = *(unsigned int *)(iVar5 + 0x1c);
      *(unsigned int *)(iVar4 + 0x20) = *(unsigned int *)(iVar5 + 0x20);
      *(unsigned int *)(iVar4 + 0x24) = *(unsigned int *)(iVar5 + 0x24);
      if (*(short *)(iVar3 + *(int *)(param_1 + 0x3c) + 8) != 0) {
        iVar6 = 0;
        do {
          iVar2 = iVar2 + 1;
          iVar4 = *(int *)(iVar3 + *(int *)(param_1 + 0x3c) + 4) + iVar6;
          iVar6 = iVar6 + 0x34;
          iVar4 = *(int *)(iVar4 + 0x30);
          *(unsigned char *)(iVar4 + param_3) = *(unsigned char *)(iVar4 + param_2);
        } while (iVar2 < (int)(unsigned int)*(unsigned short *)(iVar3 + *(int *)(param_1 + 0x3c) + 8));
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar1 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x40));
  }
  return;
}

