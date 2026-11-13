extern int fn_8248BC38();
extern int fn_8248CDD8();
extern int fn_8248D078();


int * fn_8248C5E0(int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar5;
  unsigned __int64 uVar4;
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  puVar3 = (unsigned int *)(param_3 + 0x68);
  if (puVar3 != puVar1) {
    iVar5 = param_3 + 8;
    do {
      *(unsigned int *)(iVar5 + -8) = *puVar3;
      *(unsigned int *)(iVar5 + -4) = *(unsigned int *)(iVar5 + 100);
      fn_8248CDD8(iVar5,iVar5 + 0x68);
      *(unsigned int *)(iVar5 + 0x10) = *(unsigned int *)(iVar5 + 0x78);
      *(unsigned int *)(iVar5 + 0x14) = *(unsigned int *)(iVar5 + 0x7c);
      *(unsigned int *)(iVar5 + 0x18) = *(unsigned int *)(iVar5 + 0x80);
      *(unsigned int *)(iVar5 + 0x1c) = *(unsigned int *)(iVar5 + 0x84);
      *(unsigned int *)(iVar5 + 0x20) = *(unsigned int *)(iVar5 + 0x88);
      *(unsigned int *)(iVar5 + 0x24) = *(unsigned int *)(iVar5 + 0x8c);
      *(unsigned int *)(iVar5 + 0x28) = *(unsigned int *)(iVar5 + 0x90);
      *(unsigned int *)(iVar5 + 0x2c) = *(unsigned int *)(iVar5 + 0x94);
      *(unsigned int *)(iVar5 + 0x30) = *(unsigned int *)(iVar5 + 0x98);
      *(unsigned int *)(iVar5 + 0x34) = *(unsigned int *)(iVar5 + 0x9c);
      *(unsigned int *)(iVar5 + 0x38) = *(unsigned int *)(iVar5 + 0xa0);
      *(unsigned int *)(iVar5 + 0x3c) = *(unsigned int *)(iVar5 + 0xa4);
      *(unsigned int *)(iVar5 + 0x40) = *(unsigned int *)(iVar5 + 0xa8);
      fn_8248D078(iVar5 + 0x44,iVar5 + 0xac);
      puVar3 = puVar3 + 0x1a;
      *(unsigned int *)(iVar5 + 0x54) = *(unsigned int *)(iVar5 + 0xbc);
      *(unsigned int *)(iVar5 + 0x58) = *(unsigned int *)(iVar5 + 0xc0);
      *(unsigned int *)(iVar5 + 0x5c) = *(unsigned int *)(iVar5 + 0xc4);
      iVar5 = iVar5 + 0x68;
    } while (puVar3 != puVar1);
  }
  uVar2 = *(unsigned int *)(param_2 + 4);
  for (uVar4 = (unsigned __int64)uVar2 - 0x68; (uVar4 & 0xffffffff) != (unsigned __int64)uVar2;
      uVar4 = uVar4 + 0x68) {
    fn_8248BC38(uVar4,0);
  }
  iVar5 = *(int *)(param_2 + 4);
  *param_1 = param_3;
  *(int *)(param_2 + 4) = iVar5 + -0x68;
  return param_1;
}

