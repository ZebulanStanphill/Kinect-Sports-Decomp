extern int fn_82F68CC0();
extern int fn_830A81D8();


void fn_830A8900(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned __int64 uVar13;
  
  uVar3 = *param_1;
  uVar13 = (unsigned __int64)uVar3;
  uVar4 = *param_3;
  uVar1 = param_1[2];
  uVar5 = param_1[0xb];
  uVar2 = param_1[1];
  uVar6 = param_1[7];
  uVar10 = (unsigned __int64)param_1[9];
  *(unsigned char *)(uVar4 + 3) = 0x1f;
  *(unsigned int *)(uVar4 + 0x18) = uVar2;
  *(unsigned int *)(uVar4 + 0x1c) = uVar1;
  *(short *)(uVar4 + 4) = (short)uVar3;
  *(unsigned int *)(uVar4 + 8) = uVar5;
  lVar8 = uVar13 + 1;
  *(unsigned int *)(uVar4 + 0x10) = (uVar3 & 0xffff) * 0x534 + 0x53 & 0xfffffff0;
  if (lVar8 != 0) {
    puVar7 = (unsigned int *)((uVar3 & 0xffff) * 0x4f0 + uVar4 + 0x3c);
    puVar9 = (unsigned int *)(uVar6 - 4);
    do {
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar9;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar12 = (unsigned int)*(unsigned short *)(uVar4 + 4) * 0x4f4 + uVar4 + 0x44;
  uVar11 = uVar13;
  if (0 < (int)uVar3) {
    do {
      fn_82F68CC0(iVar12,uVar10,0x40);
      uVar11 = uVar11 - 1;
      iVar12 = iVar12 + 0x40;
      uVar10 = uVar10 + 0x40;
    } while (uVar11 != 0);
  }
  *(unsigned int *)(uVar4 + 0x14) = param_1[10];
  *(unsigned int *)(uVar4 + 8) = param_1[0xb];
  fn_830A81D8(*param_1,param_1 + 3,param_1[9],(unsigned __int64)*param_3 + 0x20,
                    (uVar13 + ((unsigned __int64)uVar3 & 0x1fffffff) * 8 & 0xfffffff) * 0x10 +
                    (unsigned __int64)*param_3 + 0x20,(unsigned int)*(unsigned short *)(uVar4 + 4) * 0x4f0 + uVar4 + 0x40,
                    param_1[8],(unsigned int)*(unsigned short *)(uVar4 + 4) * 0xf0 + uVar4 + 0x20);
  *param_3 = *(int *)(uVar4 + 0x10) + *param_3;
  return;
}

