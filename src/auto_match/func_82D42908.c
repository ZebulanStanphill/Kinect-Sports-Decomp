extern int fn_82CE5410();
extern int fn_82CE6310();


int fn_82D42908(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned char *puVar6;
  int *piVar7;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    iVar4 = param_1 + 0x20;
    *(int *)(param_1 + 0xb4) = iVar4;
    *(unsigned int *)(param_1 + 0xbc) = 0x80000001;
    *(unsigned int *)(param_1 + 0xb8) = 1;
  }
  else {
    piVar7 = (int *)(param_1 + 0xb4);
    iVar3 = fn_82CE5410();
    iVar4 = *(int *)(param_1 + 0xb8);
    iVar5 = iVar4 + 1;
    if ((int)(*(unsigned int *)(param_1 + 0xbc) & 0x3fffffff) < iVar5) {
      iVar2 = (*(unsigned int *)(param_1 + 0xbc) & 0x3fffffff) << 1;
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),piVar7,iVar5,0x60);
    }
    puVar6 = (unsigned char *)(*(int *)(param_1 + 0xb8) * 0x60 + *piVar7);
    if (puVar6 != (unsigned char *)0x0) {
      *(unsigned int *)(puVar6 + 0x10) = 0;
      puVar6[0x49] = 0;
      *puVar6 = 0;
      puVar6[1] = 1;
      *(unsigned short *)(puVar6 + 8) = 0;
      *(unsigned short *)(puVar6 + 2) = 0;
      *(unsigned short *)(puVar6 + 10) = 1;
      *(unsigned int *)(puVar6 + 0xc) = 0;
      *(unsigned int *)(puVar6 + 4) = 0;
      puVar1 = (unsigned int *)((unsigned int)(puVar6 + in_r0 + 0x30) & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      *(unsigned int *)(puVar6 + 0x50) = 0;
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    iVar4 = iVar4 * 0x60 + *piVar7;
  }
  return iVar4;
}

