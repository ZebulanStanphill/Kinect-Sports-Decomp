char fn_82E01E28(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  char cVar4;
  int iVar5;
  char cVar7;
  int iVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  (**(int (***)())(**(int **)(param_1 + 0x10) + 0x28))();
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xd4);
  if (iVar1 < 1) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(*(int *)(param_2 + 0x1c) + 0x20);
    if ('\0' < cVar4) {
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 0xe0 + *(int *)(param_2 + 0x48);
        puVar2 = (unsigned int *)(iVar5 + 0x50U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (unsigned int *)(iVar5 + 0x60U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(param_5 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(unsigned int *)(param_5 + 0x20) = *(unsigned int *)(param_1 + 0xc);
        iVar5 = param_3 + 0x10;
        if (param_3 == 0) {
          iVar5 = 0;
        }
        *(int *)(param_5 + 0x24) = iVar5;
        cVar7 = (char)iVar6 + '\x01';
        *(unsigned int *)(param_5 + 0x30) = *(unsigned int *)(param_3 + 0x20);
        iVar6 = (int)cVar7;
        *(unsigned int *)(param_5 + 0x34) = param_4;
        *(unsigned char *)(param_5 + 0x4c) = 0;
        uVar8 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xd0);
        *(int *)(param_5 + 0x40) = param_6;
        param_6 = param_6 + 0x60;
        *(unsigned int *)(param_5 + 0x38) = uVar8;
        *(int *)(param_5 + 0x3c) = iVar1;
        *(unsigned int *)(param_5 + 0x44) = 1;
        *(unsigned int *)(param_5 + 0x48) = 0;
        param_5 = param_5 + 0x50;
      } while (cVar7 < cVar4);
    }
  }
  return cVar4;
}

