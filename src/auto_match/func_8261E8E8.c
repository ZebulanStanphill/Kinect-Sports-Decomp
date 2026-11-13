extern int fn_8261FF40();
extern int fn_826200B0();


unsigned int fn_8261E8E8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  
  uVar1 = param_2[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar2 = *param_2;
    iVar6 = 0;
    do {
      if ((((*(unsigned int *)(iVar6 + iVar2) & 2) != 0) || ((*(unsigned int *)(iVar6 + iVar2) & 1) != 0)) &&
         ((uVar3 = *(unsigned int *)(iVar6 + iVar2 + 4), (uVar3 & param_4) != 0 || ((uVar3 & 1) != 0)))) {
        iVar4 = *(int *)(iVar6 + iVar2 + 0xc);
        if (iVar4 == 0) {
          iVar4 = fn_8261FF40(param_1);
        }
        else {
          if ((iVar4 != 1) && (iVar4 != 3)) goto LAB_8261e98c;
          iVar4 = fn_826200B0(param_1);
        }
        if (iVar4 != 0) {
          return *(unsigned int *)(uVar5 * 0x18 + iVar2 + 0x10);
        }
      }
LAB_8261e98c:
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar5 < uVar1);
  }
  return 2;
}

