extern int fn_827FF0D0();
extern int fn_82809E58();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827FF7C8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  unsigned int uVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x30);
  if (iVar2 == 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(iVar1 + 0x22);
  }
  if (sVar5 != 0) {
    iVar3 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (unsigned int)*(unsigned short *)(iVar1 + 0x22);
    }
    dVar9 = (double)lbl_82002AE0;
    dVar8 = (double)fn_82809E58((double)(float)((double)(__int64)(int)(uVar6 - 1) *
                                                 (double)*(float *)(iVar2 + 0x28) + dVar9));
    uVar6 = (unsigned int)(__int64)dVar8 & 0xffff;
    iVar4 = fn_827FF0D0(param_1);
    iVar1 = lbl_821AAD20;
    piVar7 = (int *)(iVar4 * (uVar6 - 1) * 4 + iVar3);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      param_1[0x32] = lbl_821AAD20;
    }
    else {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      param_1[0x32] = iVar3;
    }
    if (*(char *)(iVar2 + 0x1d) == '\0') {
      param_1[0x33] = iVar1;
    }
    else {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      param_1[0x33] = iVar3;
    }
    if (*(char *)(iVar2 + 0x1e) == '\0') {
      param_1[0x34] = iVar1;
    }
    else {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      param_1[0x34] = iVar3;
    }
    if (((*(char *)(iVar2 + 0x1f) == '\0') && (*(char *)(iVar2 + 0x20) == '\0')) &&
       (*(char *)(iVar2 + 0x21) == '\0')) {
      param_1[0x35] = iVar1;
      param_1[0x36] = iVar1;
      param_1[0x37] = iVar1;
      param_1[0x38] = (int)(float)dVar9;
    }
    else {
      param_1[0x35] = *piVar7;
      param_1[0x36] = piVar7[1];
      param_1[0x37] = piVar7[2];
      param_1[0x38] = piVar7[3];
    }
  }
  return;
}

