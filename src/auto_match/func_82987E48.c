extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82930FC0();
extern int fn_82931B90();
extern int fn_82980C18();
extern int fn_82981050();
extern int fn_82986DF0();


int fn_82987E48(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned int uVar8;
  __int64 lVar9;
  int *piVar10;
  int aiStack_70 [28];
  
  aiStack_70[0] = 0;
  piVar7 = aiStack_70;
  if (param_3 == 0) {
LAB_8298807c:
    aiStack_70[0] = 0;
  }
  else {
    do {
      if (*(int *)(param_3 + 8) == 0) goto LAB_8298807c;
      uVar1 = fn_82930318(0x14);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_829304E0(uVar1,0,0,0xffffffff8204e658);
      }
      *piVar7 = iVar2;
      if (iVar2 == 0) goto LAB_8298807c;
      uVar1 = fn_82930318(0x34);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_82930FC0(uVar1,0,0,0,0,0);
      }
      if (iVar2 == 0) goto LAB_8298807c;
      uVar8 = 1;
      lVar9 = 0;
      *(int *)(*piVar7 + 8) = iVar2;
      piVar7 = (int *)(*piVar7 + 0xc);
      if ((param_2 & 0xffffffff) != 0) {
        iVar3 = fn_82930458(param_2);
        *(int *)(iVar2 + 0x18) = iVar3;
        if (iVar3 == 0) goto LAB_8298807c;
      }
      for (iVar3 = *(int *)(param_3 + 8); *(int *)(iVar3 + 4) != 3; iVar3 = *(int *)(iVar3 + 8)) {
        iVar4 = fn_82930318(0x18);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_82931B90();
        }
        if (iVar4 == 0) goto LAB_8298807c;
        piVar10 = (int *)(iVar4 + 0x14);
        *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(iVar2 + 0x18);
        *(int *)(iVar2 + 0x18) = iVar4;
        if (*(int *)(iVar3 + 0xc) == 0) {
          *(unsigned int *)(iVar4 + 0x14) = 1;
          lVar9 = 0xc00;
        }
        else {
          iVar4 = fn_82986DF0(param_1,*(int *)(iVar3 + 0xc),piVar10);
          if (iVar4 < 0) {
            lVar9 = 0xbf2;
            *piVar10 = 1;
          }
        }
        uVar8 = *piVar10 * uVar8;
      }
      iVar4 = fn_82930458(iVar3);
      *(int *)(iVar2 + 0x14) = iVar4;
      if (iVar4 == 0) goto LAB_8298807c;
      if (lVar9 == 0xbf2) {
        uVar5 = 0xbf2;
        uVar6 = 0xffffffff8204e5b8;
LAB_82988070:
        fn_82980C18(param_1,iVar3 + 0x10,uVar5,uVar6,*(unsigned int *)(iVar3 + 0x18));
        goto LAB_8298807c;
      }
      if (lVar9 == 0xc00) {
        uVar5 = 0xc00;
        uVar6 = 0xffffffff8204e5f4;
        goto LAB_82988070;
      }
      if ((uVar8 == 0) || (0x10000 < uVar8)) {
        uVar5 = 0xbf3;
        uVar6 = 0xffffffff8204e624;
        goto LAB_82988070;
      }
      iVar3 = *(int *)(iVar2 + 0x18);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) {
        *(unsigned int *)(iVar3 + 0x10) = *(unsigned int *)(iVar4 + 0x18);
      }
      iVar2 = fn_82981050(param_1,iVar2,1);
      if (iVar2 < 0) goto LAB_8298807c;
      param_3 = *(int *)(param_3 + 0xc);
    } while (param_3 != 0);
  }
  return aiStack_70[0];
}

