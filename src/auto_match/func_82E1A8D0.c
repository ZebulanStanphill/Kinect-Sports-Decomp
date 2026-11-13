extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CFC050();
extern int fn_82CFC288();


int fn_82E1A8D0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  int *piVar9;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82CE5410();
    lVar8 = (param_3 + (param_3 & 0x3fffffff) * 4 & 0x3fffffff) << 2;
    iVar3 = fn_82CE52E0(*(unsigned int *)(iVar3 + 0x10),lVar8);
    fn_82CFC050(iVar3,param_2,lVar8);
    if (0 < (int)param_3) {
      piVar9 = (int *)(iVar3 + 8);
      do {
        iVar4 = fn_82CFC288(piVar9[-2]);
        piVar9[-2] = iVar4;
        piVar1 = piVar9 + -1;
        piVar9[1] = 0;
        iVar4 = *piVar9;
        iVar5 = fn_82CE5410();
        uVar2 = fn_82CE52E0(*(unsigned int *)(iVar5 + 0x10),iVar4 << 3);
        piVar9[-1] = (int)uVar2;
        fn_82CFC050(uVar2,*(unsigned int *)((int)piVar1 + (param_2 - iVar3)),*piVar9 << 3);
        iVar4 = 0;
        if (0 < *piVar9) {
          iVar5 = 0;
          do {
            uVar6 = fn_82CFC288(*(unsigned int *)(*piVar1 + iVar5 + 4));
            iVar4 = iVar4 + 1;
            iVar7 = *piVar1 + iVar5;
            iVar5 = iVar5 + 8;
            *(unsigned int *)(iVar7 + 4) = uVar6;
          } while (iVar4 < *piVar9);
        }
        param_3 = param_3 - 1;
        piVar9 = piVar9 + 5;
      } while (param_3 != 0);
    }
  }
  return iVar3;
}

