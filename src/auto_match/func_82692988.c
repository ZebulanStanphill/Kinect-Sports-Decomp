extern int fn_82692370();
extern int fn_82692538();
extern int fn_826932A8();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E60;
extern unsigned int lbl_831F129C;


unsigned __int64 fn_82692988(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  if ((*(unsigned int *)(param_2 + 0x10) & 0x80000000) != 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x18);
    uVar3 = fn_82692370(param_1,param_4,1 << (*(unsigned short *)(param_2 + 0xe) & 0x3f));
    if (uVar3 == 0) {
      return 0;
    }
    uVar5 = (unsigned __int64)uVar1;
    if ((param_4 & 0xffffffff) <= (unsigned __int64)uVar1) {
      uVar5 = param_4;
    }
    fn_82F68CC0(uVar3,param_3,uVar5);
    fn_82692538(param_1,param_2,param_3);
    return uVar3;
  }
  uVar5 = (unsigned __int64)(unsigned int)param_1[0x7e];
  uVar7 = (unsigned __int64)(unsigned int)(1 << (*(unsigned short *)(param_2 + 0xe) & 0x3f));
  uVar1 = *(unsigned int *)(param_2 + 0x18);
  uVar3 = (unsigned __int64)uVar1;
  trapWord(6,uVar5,0);
  uVar5 = (__int64)
          (int)(((((uVar7 + param_4) - 1 & ~(uVar7 - 1)) + uVar5) - 1 & 0xffffffff) / uVar5) *
          (__int64)(int)param_1[0x7e];
  if ((uVar5 & 0xffffffff) == uVar3) {
    return (unsigned __int64)*(unsigned int *)(param_2 + 0x1c);
  }
  uVar6 = (unsigned __int64)lbl_831E7E60;
  RtlEnterCriticalSection(uVar6 + 0x2c4);
  uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0x18);
  if (((uVar5 & 0xffffffff) < uVar8) && ((uVar5 & 0x7fffffff) << 1 < (unsigned __int64)(unsigned int)param_1[0x81])
     ) {
    uVar7 = fn_82692370(param_1,uVar5,1 << (*(unsigned short *)(param_2 + 0xe) & 0x3f));
    if (uVar7 != 0) {
      if ((uVar5 & 0xffffffff) <= uVar8) {
        uVar8 = uVar5;
      }
      fn_82F68CC0(uVar7,param_3,uVar8);
      fn_82692538(param_1,param_2,param_3);
    }
  }
  else {
    if (((uVar3 < (uVar5 & 0xffffffff)) &&
        (((uVar8 = (unsigned __int64)(unsigned int)param_1[0x88], uVar8 != 0 &&
          (uVar8 < (((unsigned int)param_1[0x83] - uVar3) + uVar5 & 0xffffffff))) &&
         (piVar2 = (int *)param_1[0x89], piVar2 != (int *)0x0)))) &&
       ((cVar4 = (**(int (***)())(*piVar2 + 4))
                           (piVar2,*param_1,(((unsigned int)param_1[0x83] - uVar8) - uVar3) + uVar5),
        cVar4 == '\0' ||
        ((unsigned __int64)(unsigned int)param_1[0x88] < (((unsigned int)param_1[0x83] - uVar3) + uVar5 & 0xffffffff))))) {
      uVar7 = fn_82692370(param_1,uVar5,1 << (*(unsigned short *)(param_2 + 0xe) & 0x3f));
    }
    else {
      iVar9 = (int)uVar5;
      if ((*(char *)((int)param_1 + 0x1f7) != '\0') &&
         (cVar4 = (**(int (***)())(*(int *)param_1[1] + 0xc))
                            ((int *)param_1[1],*(unsigned int *)(param_2 + 0x1c),uVar3,uVar5,uVar7),
         cVar4 != '\0')) {
        if (uVar3 < (uVar5 & 0xffffffff)) {
          cVar4 = fn_826932A8(lbl_831F129C,*(unsigned int *)(param_2 + 0x1c),uVar5,uVar3);
          if (cVar4 == '\0') {
            (**(int (***)())(*(int *)param_1[1] + 0xc))
                      ((int *)param_1[1],*(unsigned int *)(param_2 + 0x1c),uVar5,uVar3,uVar7);
            uVar7 = 0;
            goto LAB_82692acc;
          }
        }
        else {
          fn_826932A8(lbl_831F129C,*(unsigned int *)(param_2 + 0x1c),uVar5,uVar3);
        }
        param_1[0x85] = (param_1[0x85] - uVar1) + iVar9;
        param_1[0x83] = (param_1[0x83] - uVar1) + iVar9;
        uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 0x1c);
        *(int *)(param_2 + 0x18) = iVar9;
        goto LAB_82692acc;
      }
      uVar7 = fn_82692370(param_1,uVar5,1 << (*(unsigned short *)(param_2 + 0xe) & 0x3f));
    }
    if (uVar7 != 0) {
      if ((uVar5 & 0xffffffff) <= uVar3) {
        uVar3 = uVar5;
      }
      fn_82F68CC0(uVar7,param_3,uVar3);
      fn_82692538(param_1,param_2,param_3);
    }
  }
LAB_82692acc:
  RtlLeaveCriticalSection(uVar6 + 0x2c4);
  return uVar7;
}

