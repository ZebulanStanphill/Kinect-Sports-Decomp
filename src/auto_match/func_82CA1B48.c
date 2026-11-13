extern int fn_82C9DC48();


void fn_82CA1B48(int param_1,__int64 param_2,__int64 param_3,__int64 param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  unsigned char *pbVar4;
  int iVar5;
  __int64 lVar6;
  
  iVar3 = 0;
  if (0 < param_5) {
    pbVar4 = (unsigned char *)(param_6 + -1);
    iVar2 = *(int *)(param_1 + 0xb4) + 0x1f >> 5;
    do {
      iVar5 = 0;
      lVar6 = ((int)*(int *)(param_1 + 0xcc) * (int)iVar3 & 0x1fffffffU) * 8 + param_2;
      if (0 < iVar2) {
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          fn_82C9DC48(param_1,lVar6,bVar1 >> 4,*(unsigned int *)(param_1 + 0xcc),
                        *(unsigned int *)(param_1 + 0xf8));
          fn_82C9DC48(param_1,lVar6 + 0x10,bVar1 & 0xf,*(unsigned int *)(param_1 + 0xcc),
                        *(unsigned int *)(param_1 + 0xf8));
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x20;
          iVar2 = *(int *)(param_1 + 0xb4) + 0x1f >> 5;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  param_5 = param_5 >> 1;
  iVar3 = 0;
  if (0 < param_5) {
    pbVar4 = (unsigned char *)(param_7 + -1);
    iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
    do {
      iVar5 = 0;
      lVar6 = ((int)*(int *)(param_1 + 0xd0) * (int)iVar3 & 0x1fffffffU) * 8 + param_3;
      if (0 < iVar2) {
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          fn_82C9DC48(param_1,lVar6,bVar1 >> 4,*(unsigned int *)(param_1 + 0xd0),
                        *(unsigned int *)(param_1 + 0xf8));
          fn_82C9DC48(param_1,lVar6 + 0x10,bVar1 & 0xf,*(unsigned int *)(param_1 + 0xd0),
                        *(unsigned int *)(param_1 + 0xf8));
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x20;
          iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  iVar3 = 0;
  if (0 < param_5) {
    pbVar4 = (unsigned char *)(param_8 + -1);
    iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
    do {
      iVar5 = 0;
      lVar6 = ((int)*(int *)(param_1 + 0xd0) * (int)iVar3 & 0x1fffffffU) * 8 + param_4;
      if (0 < iVar2) {
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          fn_82C9DC48(param_1,lVar6,bVar1 >> 4,*(unsigned int *)(param_1 + 0xd0),
                        *(unsigned int *)(param_1 + 0xf8));
          fn_82C9DC48(param_1,lVar6 + 0x10,bVar1 & 0xf,*(unsigned int *)(param_1 + 0xd0),
                        *(unsigned int *)(param_1 + 0xf8));
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x20;
          iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  return;
}

