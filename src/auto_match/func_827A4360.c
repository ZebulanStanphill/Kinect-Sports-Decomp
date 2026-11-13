extern int fn_827A0B88();
extern int fn_827A0C20();
extern int fn_827A0E48();
extern int fn_827A1F10();
extern int fn_827A3A50();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;


void fn_827A4360(double param_1,int param_2)

{
  int iVar3;
  int iVar4;
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  unsigned short uVar6;
  double dVar7;
  
  uVar6 = *(unsigned short *)(param_2 + 0x68);
  dVar7 = *(double *)(param_2 + 0x40);
  *(double *)(param_2 + 0x40) = param_1;
  if ((uVar6 & 1) == 0) {
    dVar7 = (param_1 - dVar7) + *(double *)(param_2 + 0x38);
    if (lbl_82005730 < dVar7) {
      if ((uVar6 >> 4 & 1) == 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          uVar6 = uVar6 | 8;
        }
        else {
          uVar6 = uVar6 & 0xfff7;
        }
        *(unsigned short *)(param_2 + 0x68) = uVar6;
      }
      dVar7 = lbl_82005710;
      *(unsigned short *)(param_2 + 0x68) = *(unsigned short *)(param_2 + 0x68) & 0xffef;
    }
    *(double *)(param_2 + 0x38) = dVar7;
  }
  if ((*(unsigned short *)(param_2 + 0x68) >> 5 & 1) == 0) {
    return;
  }
  dVar7 = (double)*(float *)(param_2 + 0x50);
  iVar3 = fn_827A0C20(*(unsigned int *)(param_2 + 8));
  iVar4 = *(int *)(param_2 + 8);
  if ((double)*(float *)(iVar3 + 4) < dVar7) {
    iVar4 = fn_827A0C20();
    if (*(float *)(param_2 + 0x50) < *(float *)(iVar4 + 0xc)) {
      return;
    }
    lVar1 = fn_827A1F10(*(unsigned int *)(param_2 + 8));
    uVar5 = lVar1 + 1;
    uVar2 = fn_827A0B88(*(unsigned int *)(param_2 + 8));
    if ((uVar2 & 0xffffffff) <= (uVar5 & 0xffffffff)) {
      return;
    }
    iVar4 = *(int *)(param_2 + 8);
    dVar7 = (double)*(float *)(param_2 + 0x50);
  }
  else {
    if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x38) == 0) {
      return;
    }
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x38) - 1;
  }
  uVar2 = fn_827A0E48(dVar7,iVar4,uVar5);
  if ((uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 0x18)) {
    fn_827A3A50(param_2,uVar2,*(unsigned short *)(param_2 + 0x68) >> 1 & 1);
  }
  return;
}

