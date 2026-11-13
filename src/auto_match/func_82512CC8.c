extern int fn_825269D0();
extern int fn_82535EB8();
extern int iRam8326c2bc;
extern unsigned int lbl_8326C390;


void fn_82512CC8(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar3 = param_1[9];
  uVar4 = 0;
  uVar2 = (unsigned int)(param_1[10] != uVar3);
  uVar5 = uVar2;
  for (; uVar3 != param_1[10]; uVar3 = uVar3 + 0xc) {
    if (*(int *)(uVar3 + 4) != 0) {
      uVar4 = 1;
    }
    uVar5 = -(unsigned int)(*(int *)(uVar3 + 8) == 0) & uVar5;
  }
  for (uVar3 = param_1[5]; uVar3 != param_1[6]; uVar3 = uVar3 + 0xc) {
    uVar4 = -(unsigned int)(*(int *)(uVar3 + 8) == 0) & uVar4;
    if (*(int *)(uVar3 + 4) != 0) {
      uVar2 = 0;
      uVar5 = 0;
    }
  }
  if (uVar2 != *param_1) {
    *param_1 = uVar2;
    if (uVar2 == 0) {
      uVar1 = 0x38;
      iRam8326c2bc = iRam8326c2bc + -1;
    }
    else {
      uVar1 = 0x37;
      iRam8326c2bc = iRam8326c2bc + 1;
    }
    lbl_8326C390 = (unsigned int)(uVar2 != 0);
    fn_825269D0(uVar1,0);
  }
  if (uVar4 != param_1[1]) {
    param_1[1] = uVar4;
    uVar1 = 0x39;
    if (uVar4 == 0) {
      uVar1 = 0x3a;
    }
    fn_825269D0(uVar1,0);
  }
  if (uVar5 != param_1[2]) {
    param_1[2] = uVar5;
    fn_82535EB8(uVar5 == 1);
  }
  return;
}

