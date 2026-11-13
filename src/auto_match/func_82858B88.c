extern int fn_82639380();
extern int fn_82639528();
extern int fn_826397C8();
extern int fn_826398E8();
extern int fn_82639990();
extern int fn_8263CBB0();


void fn_82858B88(int param_1,int param_2,int param_3,int param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar13 = *(int *)(param_1 + 0x5c);
  if (*(short *)(param_2 + 8) == 0) {
    return;
  }
  uVar1 = *(unsigned short *)(param_2 + 0x14);
  uVar12 = (unsigned __int64)uVar1;
  uVar11 = 0;
  uVar2 = *(unsigned short *)(param_2 + 0x16);
  iVar10 = (uVar1 + 3) * 4;
  if (*(unsigned int *)(iVar10 + param_1) != (unsigned int)uVar2) {
    iVar8 = *(int *)(param_1 + 4);
    iVar9 = (uVar1 + 0x30) * 0x18;
    iVar5 = **(int **)((unsigned int)uVar2 * 4 + param_4);
    *(unsigned int *)(iVar9 + iVar8) =
         (*(unsigned int *)(iVar5 + 4) & 7) << 10 | *(unsigned int *)(iVar9 + iVar8) & 0xffffe3ff;
    *(unsigned __int64 *)(iVar8 + 0x18) =
         0x8000000000000000U >> (uVar12 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar8 + 0x18);
    iVar8 = *(int *)(param_1 + 4);
    uVar3 = *(unsigned short *)(param_2 + 0x14);
    iVar9 = (uVar3 + 0x30) * 0x18;
    *(unsigned int *)(iVar9 + iVar8) =
         (*(unsigned int *)(iVar5 + 0xc) & 7) << 0xd | *(unsigned int *)(iVar9 + iVar8) & 0xffff1fff;
    *(unsigned __int64 *)(iVar8 + 0x18) =
         0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar8 + 0x18);
    iVar8 = *(int *)(param_1 + 4);
    uVar3 = *(unsigned short *)(param_2 + 0x14);
    iVar9 = (uVar3 + 0x30) * 0x18;
    *(unsigned int *)(iVar9 + iVar8) =
         (*(unsigned int *)(iVar5 + 0x14) & 7) << 0x10 | *(unsigned int *)(iVar9 + iVar8) & 0xfff8ffff;
    *(unsigned __int64 *)(iVar8 + 0x18) =
         0x8000000000000000U >> ((unsigned __int64)uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar8 + 0x18);
    uVar11 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x1c);
    fn_82639380(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_2 + 0x14),
                      *(unsigned int *)(iVar5 + 0x24));
    uVar3 = *(unsigned short *)(param_2 + 0x14);
    iVar8 = *(int *)(param_1 + 4);
    iVar9 = (unsigned int)uVar3 * 0x18 + iVar8;
    *(unsigned int *)(iVar9 + 0x48c) =
         (*(unsigned int *)(iVar5 + 0x2c) & 3) << 0x17 | *(unsigned int *)(iVar9 + 0x48c) & 0xfe7fffff;
    *(unsigned __int64 *)(iVar8 + 0x18) =
         0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar8 + 0x18);
    fn_82639528(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_2 + 0x14),
                      *(unsigned int *)(iVar5 + 0x34));
    fn_826398E8(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_2 + 0x14),
                 *(unsigned int *)(iVar5 + 0x3c));
    fn_826397C8(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_2 + 0x14),
                 *(unsigned int *)(iVar5 + 0x44));
    *(unsigned int *)(iVar10 + param_1) = (unsigned int)uVar2;
  }
  iVar10 = *(int *)(*(int *)(param_2 + 0x10) * 4 + iVar13);
  iVar13 = *(int *)(*(int *)(param_2 + 0xc) * 4 + iVar13);
  if ((iVar10 == 0) || (*(char *)(iVar10 + 0x30) != *(char *)(iVar13 + 0x30))) {
    uVar7 = (unsigned __int64)*(unsigned char *)(iVar13 + 0x30) - 1;
    iVar8 = (int)uVar7;
    iVar10 = 1;
    if (iVar8 < 2) {
      iVar10 = iVar8;
    }
    if (((int)uVar11 < iVar10) && (uVar11 = uVar7, 1 < iVar8)) {
      uVar11 = 1;
    }
    fn_82639990(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_2 + 0x14),uVar11);
  }
  else {
    fn_82639990(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_2 + 0x14),uVar11);
    iVar13 = iVar10;
  }
  if (*(int *)(iVar13 + 0x1c) == 4) {
    uVar6 = *(unsigned int *)
             ((unsigned int)*(unsigned char *)(*(int *)(iVar4 + param_3 + 8) + (unsigned int)uVar1) * 4 +
             *(int *)(iVar13 + 0x34));
  }
  else {
    uVar6 = *(unsigned int *)(iVar13 + 0x34);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(unsigned int *)(param_1 + 4),uVar12,uVar6,
                    0x8000000000000000 >> (uVar12 + 0x20 & 0x7f));
}

