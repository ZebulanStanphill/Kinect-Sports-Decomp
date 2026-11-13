extern int fn_8289F2E0();
extern int fn_828ACC40();
extern int fn_828ACCB0();
extern int fn_828ACD00();
extern int fn_828BE850();
extern int fn_828BE888();
extern int fn_828BE8C0();
extern int fn_828BE930();
extern int fn_82A4AAA8();


unsigned __int64 fn_828BD8C8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  
  uVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  uVar1 = ((~uVar2 & 0xffffffff) >> 0x1f) + (unsigned __int64)(0x1a < uVar2) & 1;
  cVar5 = fn_828ACC40(param_1);
  if (cVar5 == '\0') {
    cVar5 = fn_828ACD00(param_1);
    if (cVar5 == '\0') {
      if ((int)param_3 != 0) {
        piVar3 = (int *)fn_8289F2E0(param_1,param_3);
        iVar4 = (**(int (***)())(*piVar3 + 0xc))();
        if ((iVar4 != 0) && (iVar4 = fn_82A4AAA8(), iVar4 == 2)) {
          if (uVar1 == 0) {
            return 2;
          }
          cVar5 = fn_828BE930(uVar2,1);
          if (cVar5 != '\0') {
            return 1;
          }
          return 2;
        }
      }
      cVar5 = fn_828ACCB0(param_1);
      if (cVar5 != '\0') {
        if (uVar1 == 0) {
          return 2;
        }
        cVar5 = fn_828BE888(uVar2,1);
        if (cVar5 == '\0') {
          return 2;
        }
      }
    }
    else {
      if (uVar1 == 0) {
        return 2;
      }
      cVar5 = fn_828BE8C0(uVar2,1);
      if (cVar5 == '\0') {
        return 2;
      }
    }
  }
  else if ((uVar1 == 0) || (cVar5 = fn_828BE850(uVar2,1), cVar5 == '\0')) {
    return 2;
  }
  return 1;
}

