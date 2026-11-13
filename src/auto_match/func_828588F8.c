extern int fn_82639380();
extern int fn_82639528();
extern int fn_826397C8();
extern int fn_8263CBB0();


void fn_828588F8(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int *piVar14;
  unsigned short *puVar15;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar5 = param_1[0x17];
  if (*(short *)(param_2 + 10) != 0) {
    uVar12 = (unsigned __int64)*(unsigned short *)(param_2 + 0x10);
    uVar1 = *(unsigned short *)(param_2 + 0x12);
    iVar4 = *(unsigned short *)(param_2 + 0x10) + 3;
    if (param_1[iVar4] != (unsigned int)uVar1) {
      puVar10 = *(unsigned int **)((unsigned int)uVar1 * 4 + param_1[2]);
      uVar6 = puVar10[1];
      uVar13 = (unsigned __int64)uVar6;
      piVar14 = (int *)*puVar10;
      if (0 < (int)uVar6) {
        do {
          (**(int (***)())(*piVar14 + param_1[1] + 0x1d4))(param_1[1],uVar12,piVar14[1]);
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar13 != 0);
      }
      param_1[iVar4] = (unsigned int)uVar1;
    }
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(param_1[1],uVar12,
                      *(unsigned int *)(*(int *)(*param_1 + 0x100) + *(int *)(param_2 + 0xc) * 4),
                      0x8000000000000000 >> (uVar12 + 0x20 & 0x7f));
  }
  if (*(short *)(param_2 + 8) != 0) {
    puVar15 = (unsigned short *)(param_2 + 0x10);
    uVar1 = *puVar15;
    uVar12 = (unsigned __int64)uVar1;
    uVar2 = *(unsigned short *)(param_2 + 0x12);
    if (param_1[uVar1 + 3] != (unsigned int)uVar2) {
      iVar7 = param_1[1];
      iVar11 = (uVar1 + 0x30) * 0x18;
      iVar8 = **(int **)((unsigned int)uVar2 * 4 + param_4);
      *(unsigned int *)(iVar11 + iVar7) =
           (*(unsigned int *)(iVar8 + 4) & 7) << 10 | *(unsigned int *)(iVar11 + iVar7) & 0xffffe3ff;
      *(unsigned __int64 *)(iVar7 + 0x18) =
           0x8000000000000000U >> (uVar12 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar7 + 0x18);
      iVar7 = param_1[1];
      uVar3 = *puVar15;
      iVar11 = (uVar3 + 0x30) * 0x18;
      *(unsigned int *)(iVar11 + iVar7) =
           (*(unsigned int *)(iVar8 + 0xc) & 7) << 0xd | *(unsigned int *)(iVar11 + iVar7) & 0xffff1fff;
      *(unsigned __int64 *)(iVar7 + 0x18) =
           0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar7 + 0x18);
      iVar7 = param_1[1];
      uVar3 = *puVar15;
      iVar11 = (uVar3 + 0x30) * 0x18;
      *(unsigned int *)(iVar11 + iVar7) =
           (*(unsigned int *)(iVar8 + 0x14) & 7) << 0x10 | *(unsigned int *)(iVar11 + iVar7) & 0xfff8ffff;
      *(unsigned __int64 *)(iVar7 + 0x18) =
           0x8000000000000000U >> ((unsigned __int64)uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar7 + 0x18);
      fn_82639380(param_1[1],*puVar15,*(unsigned int *)(iVar8 + 0x24));
      uVar3 = *puVar15;
      iVar7 = param_1[1];
      iVar11 = (unsigned int)uVar3 * 0x18 + iVar7;
      *(unsigned int *)(iVar11 + 0x48c) =
           (*(unsigned int *)(iVar8 + 0x2c) & 3) << 0x17 | *(unsigned int *)(iVar11 + 0x48c) & 0xfe7fffff;
      *(unsigned __int64 *)(iVar7 + 0x18) =
           0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar7 + 0x18);
      fn_82639528(param_1[1],*puVar15,*(unsigned int *)(iVar8 + 0x34));
      fn_826397C8(param_1[1],*puVar15,*(unsigned int *)(iVar8 + 0x44));
      param_1[uVar1 + 3] = (unsigned int)uVar2;
    }
    iVar5 = *(int *)(*(int *)(param_2 + 0xc) * 4 + iVar5);
    if (*(int *)(iVar5 + 0x1c) == 4) {
      uVar9 = *(unsigned int *)
               ((unsigned int)*(unsigned char *)(*(int *)(iVar4 + param_3 + 8) + (unsigned int)uVar1) * 4 +
               *(int *)(iVar5 + 0x34));
    }
    else {
      uVar9 = *(unsigned int *)(iVar5 + 0x34);
    }
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(param_1[1],uVar12,uVar9,0x8000000000000000 >> (uVar12 + 0x20 & 0x7f));
  }
  return;
}

