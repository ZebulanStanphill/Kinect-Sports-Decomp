extern int fn_82CE50D8();


void fn_82DB4C60(int param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 in_r0;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + *param_2);
      lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + (unsigned __int64)*(unsigned int *)(iVar1 + 0xa4);
      puVar2 = (unsigned int *)(iVar1 + 0x1b0U & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (unsigned int *)((int)lVar5 + 0x10U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      iVar4 = (int)(lVar5 + 0x50);
      puVar2 = (unsigned int *)((int)in_r0 + iVar4 & 0xfffffff0);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar2 = (unsigned int *)
               ((*(unsigned int *)(iVar1 + 0xa4) >> 2 & 0x3fffffe0) + *(int *)(param_1 + 0x18) + 0x10 &
               0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (unsigned int *)((int)in_r0 + iVar4 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      fn_82CE50D8(lVar5 + 0x20,lVar5 + 0x50,iVar1 + 0x1c0);
      iVar7 = iVar7 + 1;
      puVar2 = (unsigned int *)((int)in_r0 + iVar4 & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      iVar6 = iVar6 + 4;
    } while (iVar7 < param_2[1]);
  }
  return;
}

