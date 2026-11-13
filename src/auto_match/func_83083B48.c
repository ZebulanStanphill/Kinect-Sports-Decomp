extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_83083970();


void fn_83083B48(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  
  *(unsigned int *)(param_1 + 0xc) = 0xffffffff;
  puVar3 = (unsigned int *)((int)param_2 + in_r0 + 0x10 & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (unsigned int *)(in_r0 + param_1 + 0x30 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  puVar3 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  uVar7 = (unsigned __int64)*(unsigned char *)((int)param_2 + 5);
  uVar9 = (unsigned __int64)*param_2;
  if (uVar7 != 0) {
    uVar9 = uVar9 + 4;
  }
  lVar8 = (uVar9 & 0x7fffffff) * 2;
  *(int *)(param_1 + 0x14) = (int)lVar8;
  bVar1 = *(unsigned char *)(param_2 + 1);
  if (bVar1 == 0) {
    lVar10 = 0;
  }
  else {
    uVar2 = *param_2;
    trapWord(6,(unsigned __int64)bVar1,0);
    lVar10 = (__int64)((int)uVar2 / (int)(unsigned int)bVar1);
    uVar7 = (unsigned __int64)bVar1 &
            ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1);
    trapWord(5,uVar7,0xffff);
  }
  *(int *)(param_1 + 0x18) = (int)lVar10;
  fn_83083970(param_1,lVar8 + lVar10,param_3,param_4,uVar7);
  uVar2 = *param_2;
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  iVar5 = fn_82CE5410();
  if ((int)(*(unsigned int *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
    uVar6 = (*(unsigned int *)(param_1 + 0x24) & 0x3fffffff) << 1;
    if ((int)uVar6 <= (int)uVar2) {
      uVar6 = uVar2;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_1 + 0x1c,uVar6,0x10);
  }
  *(unsigned int *)(param_1 + 0x20) = uVar2;
  return;
}

