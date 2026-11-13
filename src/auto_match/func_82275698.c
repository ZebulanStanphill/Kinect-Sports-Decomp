extern int fn_822755F8();
extern int fn_82275B20();
extern int fn_82275D00();
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82275698(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar6;
  __int64 lVar5;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  
  iVar6 = (int)param_3;
  iVar4 = param_1;
  if (0x1f < iVar6) {
    uVar12 = (param_3 & 0xffffffff) >> 5;
    iVar14 = param_1;
    do {
      iVar4 = iVar14 + 0x100;
      fn_822755F8(iVar14,iVar4);
      uVar12 = uVar12 - 1;
      iVar14 = iVar4;
    } while (uVar12 != 0);
  }
  fn_822755F8(iVar4,param_2);
  uVar12 = 0x20;
  if (0x20 < iVar6) {
    do {
      stack_pair_80.first = 0;
      stack_pair_80.second = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      (*(unsigned int **)(param_4 + 0x10))[1] = **(unsigned int **)(param_4 + 0x10);
      uStack_70 = *(unsigned int *)(param_4 + 0x10);
      fn_82275B20(param_1,param_2,&stack_pair_80.first,uVar12,param_3);
      uVar1 = uVar12 & 0x7fffffff;
      uVar11 = uVar1 * 2;
      uVar12 = uVar1 << 2;
      uVar2 = (unsigned __int64)**(unsigned int **)(param_4 + 0x10);
      iVar10 = (int)uVar12;
      uVar8 = (unsigned __int64)(*(unsigned int **)(param_4 + 0x10))[1];
      iVar14 = iVar6;
      iVar4 = param_1;
      if (iVar10 <= iVar6) {
        lVar9 = (uVar11 & 0x1fffffff) * 8;
        uVar3 = uVar2;
        uVar13 = param_3;
        do {
          lVar5 = lVar9 + uVar3;
          uVar2 = lVar9 + lVar5;
          iVar4 = fn_82275D00(uVar3,lVar5,lVar5,uVar2);
          uVar13 = uVar13 + uVar1 * -4;
          iVar14 = (int)uVar13;
          uVar3 = uVar2;
        } while (iVar10 <= iVar14);
      }
      if ((int)uVar11 < iVar14) {
        lVar9 = (uVar11 & 0x1fffffff) * 8 + uVar2;
        fn_82275D00(uVar2,lVar9,lVar9,uVar8);
      }
      else if ((uVar2 & 0xffffffff) != uVar8) {
        iVar4 = iVar4 - (int)uVar2;
        do {
          puVar7 = (unsigned int *)uVar2;
          *(unsigned int *)(iVar4 + (int)puVar7) = *puVar7;
          uVar2 = uVar2 + 8;
          *(unsigned int *)((int)puVar7 + iVar4 + 4) = puVar7[1];
        } while ((uVar2 & 0xffffffff) != uVar8);
      }
    } while (iVar10 < iVar6);
  }
  return;
}

