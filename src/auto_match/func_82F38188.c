extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F377E8();
extern int fn_82F48E20();


unsigned __int64 fn_82F38188(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int *apuStack_40 [16];
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x70);
    lVar3 = ((unsigned __int64)uVar1 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar1) {
      lVar3 = -1;
    }
    iVar4 = fn_82E50BE8(lVar3,0,0,0,0);
    if ((iVar4 == 0) || (uVar1 == 0)) {
      iVar9 = 0;
      iVar7 = 0;
    }
    else {
      uVar8 = 0;
      puVar6 = (unsigned int *)(iVar4 + -4);
      do {
        fn_82F377E8(param_1 + 8,uVar8,apuStack_40);
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *apuStack_40[0];
      } while ((uVar8 & 0xffffffff) < (unsigned __int64)uVar1);
      iVar7 = uVar1 * 4 + iVar4;
      iVar9 = iVar4;
    }
    uVar8 = fn_82E50BE8(0x14,0,0,0,0);
    if ((uVar8 & 0xffffffff) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_82F48E20(uVar8,iVar9,iVar7);
    }
    if (piVar5 == (int *)0x0) {
      if (iVar4 != 0) {
        fn_82E4FE40(iVar4);
      }
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = (**(int (***)())*piVar5)(piVar5,0xffffffff82154c28,param_2);
      (**(int (***)())(*piVar5 + 8))(piVar5);
      if (iVar4 != 0) {
        fn_82E4FE40(iVar4);
      }
    }
  }
  return uVar2;
}

