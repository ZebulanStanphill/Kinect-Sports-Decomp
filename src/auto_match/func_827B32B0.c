typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827B0328();
extern int fn_827B0990();
extern int fn_827B0C90();
extern int fn_827B1020();
extern int fn_827B13A0();
extern int fn_827B1968();
extern int fn_827B1B68();
extern int fn_827B1BE8();
extern int fn_827B1D10();
extern int fn_827B1DA0();
extern int fn_827B1E58();
extern int fn_827B1F18();
extern int fn_827B20F0();
extern int fn_827B28D0();
extern int fn_827B30B8();
extern int fn_827B3250();
extern unsigned int iStack_88;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_827B32B0(int param_1,char param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  short *psVar7;
  unsigned short *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int *puVar15;
  __int64 lVar16;
  __int64 lVar17;
  int iVar18;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned short uStack_90;
  unsigned short uStack_8e;
  unsigned int uStack_8c;
  struct { int first; unsigned int second; } stack_pair_88;

  unsigned int uStack_80;
  
  puVar15 = (unsigned int *)(param_1 + 8);
  uStack_8e = 0;
  uVar1 = **(unsigned int **)(param_1 + 8);
  uStack_90 = (unsigned short)*(unsigned int *)(param_1 + 0x70);
  uStack_8c = uVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_827B28D0();
  }
  fn_827B0328(param_1,&uStack_a0,&uStack_9c,&uStack_98,&uStack_94);
  fn_827B1D10(puVar15,uStack_a0);
  fn_827B1D10(puVar15,uStack_9c);
  fn_827B1D10(puVar15,uStack_98);
  fn_827B1D10(puVar15,uStack_94);
  fn_827B1B68(puVar15,*(unsigned int *)(param_1 + 0x28));
  bVar2 = false;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar9 = 0;
    do {
      uVar13 = 0;
      uVar5 = 1;
      puVar10 = (unsigned int *)(*(int *)((uVar9 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x34)) +
                        (uVar9 & 0x3f) * 8);
      if (1 < puVar10[1]) {
        do {
          uVar13 = uVar13 + 1;
          if ((*(unsigned short *)
                (*(int *)((*puVar10 + uVar5 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                ((*puVar10 + uVar5) * 4 & 0xfc)) & 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < puVar10[1]);
      }
      psVar7 = (short *)(*(int *)((*puVar10 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                        (*puVar10 & 0x3f) * 4);
      lVar16 = (__int64)((int)*psVar7 >> 1);
      lVar11 = (__int64)psVar7[1];
      fn_827B1D10(puVar15,lVar16);
      fn_827B1D10(puVar15,lVar11);
      uVar5 = *(unsigned int *)*puVar15;
      fn_827B1BE8(puVar15,(uVar13 & 0x7fffffff) << 1);
      uVar14 = 1;
      if (1 < puVar10[1]) {
        do {
          uVar6 = *puVar10 + uVar14;
          puVar8 = (unsigned short *)
                   (*(int *)((uVar6 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                   (uVar6 & 0x3f) * 4);
          iVar4 = (int)(short)*puVar8 >> 1;
          if ((*puVar8 & 1) == 0) {
            lVar17 = (__int64)iVar4;
            lVar12 = (__int64)(short)puVar8[1];
            if (iVar4 == (int)lVar16) {
              fn_827B1E58(puVar15,lVar12 - lVar11);
            }
            else if ((int)(short)puVar8[1] == (int)lVar11) {
              fn_827B1DA0();
            }
            else {
              fn_827B1F18(puVar15,lVar17 - lVar16,lVar12 - lVar11);
            }
          }
          else {
            uVar14 = uVar14 + 1;
            uVar6 = *puVar10 + uVar14;
            psVar7 = (short *)(*(int *)((uVar6 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                              (uVar6 & 0x3f) * 4);
            lVar12 = (__int64)psVar7[1];
            lVar17 = (__int64)((int)*psVar7 >> 1);
            fn_827B20F0(puVar15,iVar4 - lVar16,(short)puVar8[1] - lVar11,lVar17 - iVar4,
                          lVar12 - (short)puVar8[1]);
          }
          uVar14 = uVar14 + 1;
          lVar11 = lVar12;
          lVar16 = lVar17;
        } while (uVar14 < puVar10[1]);
      }
      if (param_2 != '\0') {
        stack_pair_88.first = param_1;
        uVar3 = fn_827B0990(param_1,uVar5);
        stack_pair_88.second = (unsigned int)uVar3;
        iVar18 = param_1 + 0x10;
        uStack_80 = uVar5;
        iVar4 = fn_827B30B8(iVar18,&stack_pair_88.first);
        if (iVar4 == 0) {
          fn_827B1020(iVar18,iVar18,&stack_pair_88.first,uVar3);
          bVar2 = true;
        }
        else {
          if (uVar5 < *(unsigned int *)*puVar15) {
            *(unsigned int *)*puVar15 = uVar5;
          }
          fn_827B1BE8(puVar15,*(int *)(iVar4 + 8) << 1 | 1);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((param_2 != '\0') && (!bVar2)) {
    stack_pair_88.first = param_1;
    uVar3 = fn_827B13A0(param_1,uVar1);
    stack_pair_88.second = (unsigned int)uVar3;
    iVar18 = param_1 + 0x14;
    uStack_80 = uVar1;
    iVar4 = fn_827B3250(iVar18,&stack_pair_88.first);
    if (iVar4 == 0) {
      fn_827B1020(iVar18,iVar18,&stack_pair_88.first,uVar3);
    }
    else {
      if (uVar1 < *(unsigned int *)*puVar15) {
        *(unsigned int *)*puVar15 = uVar1;
      }
      uStack_8c = *(unsigned int *)(iVar4 + 8);
    }
  }
  *(unsigned int *)(param_1 + 0x74) = (*(int *)*puVar15 - uVar1) + *(int *)(param_1 + 0x74);
  fn_827B0C90(puVar15,*(unsigned int *)(param_1 + 0x78),*(unsigned int *)(param_1 + 0x70));
  fn_827B0C90(puVar15,(unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 4,*(unsigned int *)(param_1 + 0x74));
  fn_827B1968(param_1 + 0x4c,&uStack_90);
  return;
}

