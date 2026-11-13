extern int fn_8243E578();
extern int fn_8243E640();


__int64 fn_8243E700(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  
  puVar4 = (unsigned int *)fn_8243E578();
  if (puVar4 == (unsigned int *)0x0) {
    lVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    lVar3 = 0;
    uVar7 = 0;
    uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x5c;
    if (uVar1 != 0) {
      uVar6 = (unsigned __int64)*puVar4;
      iVar8 = 0;
      do {
        if (*(int *)(iVar8 + iVar2) != (int)uVar6) {
          if (param_3 == 0) {
            iVar5 = fn_8243E640(param_1);
            if (iVar5 != 0) goto LAB_8243e78c;
          }
          else if (puVar4[0x11] < *(unsigned int *)(iVar8 + iVar2 + 0x44)) {
LAB_8243e78c:
            lVar3 = lVar3 + 1;
          }
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x5c;
      } while (uVar7 < uVar1);
    }
    lVar3 = lVar3 + 1;
  }
  return lVar3;
}

