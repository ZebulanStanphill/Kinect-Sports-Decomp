extern int fn_82C9CDC8();
extern int fn_82C9CF48();
extern unsigned int iStack0000005c;
extern unsigned int uStack0000004c;


void fn_82C9D0C8(int param_1,__int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  __int64 lVar7;
  int iVar9;
  __int64 lVar8;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iVar15;
  __int64 lVar14;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  __int64 lVar19;
  __int64 lVar20;
  int iVar21;
  unsigned int uStack0000004c;
  int iStack0000005c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  uVar2 = *(unsigned int *)(param_1 + 0x70);
  uVar4 = *(int *)(param_1 + 0xe4) >> 1;
  uVar10 = (unsigned __int64)(int)uVar4;
  iVar9 = *(int *)(param_1 + 0x84) + -1;
  uVar3 = *(unsigned int *)(param_1 + 0xcc);
  iVar21 = *(int *)(param_1 + 0xd0);
  lVar19 = param_2 + 3;
  lVar5 = ((unsigned __int64)uVar1 & 0x7fffffff) * 2 + -1;
  uStack0000004c = uVar1;
  iStack0000005c = iVar9;
  if (0 < lVar5) {
    do {
      fn_82C9CF48(lVar19,uVar3);
      lVar5 = lVar5 + -1;
      lVar19 = lVar19 + 8;
    } while (lVar5 != 0);
  }
  lVar5 = ((unsigned __int64)uVar3 & 0x3fffffff) * -4 + -1;
  iVar6 = 0;
  if (0 < iVar9) {
    lVar19 = (unsigned __int64)uVar2 + param_4;
    lVar7 = (unsigned __int64)uVar2 + param_3 + 4;
    do {
      lVar17 = (unsigned __int64)(uVar3 * 8 + uVar4) + param_2;
      iVar15 = -4;
      fn_82C9CDC8(param_2 + uVar10,uVar3);
      lVar16 = param_2 + uVar10 + 4;
      fn_82C9CDC8(lVar17);
      lVar17 = lVar17 + 4;
      if (iVar6 == 0) {
        iVar15 = -8;
      }
      else if (iVar6 == iVar9 + -1) {
        iVar15 = -4;
      }
      fn_82C9CDC8(lVar7 + -4,iVar21);
      lVar12 = (__int64)iVar15 * (__int64)iVar21 + -1;
      fn_82C9CDC8(lVar19);
      lVar14 = (unsigned __int64)uStack0000004c - 1;
      lVar18 = lVar7 + (unsigned __int64)(unsigned int)((int)param_4 - (int)param_3);
      lVar20 = lVar7;
      if (0 < (int)lVar14) {
        do {
          lVar13 = lVar16 + lVar5;
          lVar11 = lVar12 + lVar20;
          lVar8 = lVar18 + lVar12;
          fn_82C9CDC8(lVar16,uVar3);
          lVar16 = lVar16 + 0x10;
          fn_82C9CDC8(lVar17);
          lVar17 = lVar17 + 0x10;
          fn_82C9CF48(lVar13);
          fn_82C9CDC8(lVar20,iVar21);
          lVar20 = lVar20 + 8;
          fn_82C9CDC8(lVar18);
          lVar18 = lVar18 + 8;
          fn_82C9CF48(lVar11);
          fn_82C9CF48(lVar8);
          fn_82C9CF48(lVar13 + 8,uVar3);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar10 = (unsigned __int64)uVar4;
        iVar9 = iStack0000005c;
      }
      fn_82C9CDC8(lVar16,uVar3);
      fn_82C9CDC8(lVar17);
      fn_82C9CF48(lVar16 + lVar5);
      fn_82C9CDC8(lVar20,iVar21);
      fn_82C9CDC8(lVar18);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + (unsigned __int64)uVar2;
      lVar19 = lVar19 + (unsigned __int64)uVar2;
      param_2 = param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 100);
      uVar1 = uStack0000004c;
    } while (iVar6 < iVar9);
  }
  fn_82C9CDC8(param_2 + uVar10,uVar3);
  lVar19 = param_2 + uVar10 + 4;
  iVar21 = 0;
  if (0 < (int)uVar1) {
    do {
      lVar7 = lVar19 + lVar5;
      fn_82C9CDC8(lVar19,uVar3);
      lVar19 = lVar19 + 0x10;
      fn_82C9CF48(lVar7);
      if (iVar21 < (int)(uVar1 - 1)) {
        fn_82C9CF48(lVar7 + 8);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)uVar1);
  }
  return;
}

