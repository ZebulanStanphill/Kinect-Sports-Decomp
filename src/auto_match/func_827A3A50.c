extern unsigned int *auStack_30;
extern int fn_827912D8();
extern int fn_8279A718();
extern int fn_8279C658();
extern int fn_827A3578();
extern int fn_827A36C0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005710;


void fn_827A3A50(int param_1,unsigned __int64 param_2,char param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned short uVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned int auStack_30 [12];
  
  if ((int)param_2 != -1) {
    uVar1 = fn_827912D8(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
    uVar7 = param_2;
    if ((uVar1 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar7 = uVar1;
    }
    uVar6 = *(unsigned short *)(param_1 + 0x68);
    if ((uVar6 & 1) == 0) {
      uVar6 = uVar6 | 8;
    }
    else {
      uVar6 = uVar6 & 0xfff7;
    }
    *(unsigned short *)(param_1 + 0x68) = uVar6;
    *(unsigned __int64 *)(param_1 + 0x38) = lbl_82005710;
    param_2 = uVar7;
    if ((((*(int *)(*(int *)(param_1 + 8) + 0x18) != 0) &&
         (iVar2 = fn_827A3578(param_1,uVar7,auStack_30), iVar2 != 0)) &&
        (uVar1 = (unsigned __int64)(*(unsigned short *)(iVar2 + 4) >> 0xc), uVar1 != 1)) &&
       ((uVar5 = (unsigned __int64)auStack_30[0], uVar5 != (uVar7 & 0xffffffff) &&
        (param_2 = uVar1 + uVar5, (uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x18))))) {
      param_2 = uVar5;
    }
  }
  *(int *)(param_1 + 0x18) = (int)param_2;
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + -1;
  *(unsigned int *)(param_1 + 0x48) = lbl_8200133C;
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_827A36C0(param_1,*(int *)(param_1 + 0x18),1,*(unsigned char *)(param_1 + 0x68) & 1);
    fn_8279A718(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x18));
  }
  uVar6 = *(unsigned short *)(param_1 + 0x68);
  if ((uVar6 >> 1 & 1) != 0) {
    if (param_3 == '\0') {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar4;
    }
    else if (((uVar6 >> 6 & 1) == 0) && ((uVar6 >> 5 & 1) == 0)) {
      iVar2 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0x18);
      iVar3 = iVar4;
      if ((*(int *)(iVar2 + 0x1c) == iVar4) && (*(int *)(iVar2 + 0x20) == iVar4)) {
        return;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0x18);
      if (*(int *)(iVar2 + 0x20) == iVar4) {
        return;
      }
      iVar3 = *(int *)(iVar2 + 0x1c);
    }
    fn_8279C658(iVar2,iVar3,iVar4);
    return;
  }
  return;
}

