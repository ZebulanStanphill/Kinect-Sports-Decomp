extern int fn_824560A0();
extern int fn_8252CAF8();
extern int fn_825327A8();


void fn_82456250(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  if (param_2 == 1) {
    puVar3 = param_1 + 1;
    if (0xf < (unsigned int)param_1[6]) {
      puVar3 = (unsigned int *)*puVar3;
    }
    fn_825327A8(*param_1,puVar3);
    fn_8252CAF8(*param_1,1,0);
    param_1[0xf] = 1;
    puVar3 = param_1 + 0x1c;
    if (0xf < (unsigned int)param_1[0x21]) {
      puVar3 = (unsigned int *)*puVar3;
    }
    fn_825327A8(param_1[0x1b],puVar3);
    fn_8252CAF8(param_1[0x1b],1,0);
    param_1[0x2a] = 1;
    puVar3 = param_1 + 0x37;
    if (0xf < (unsigned int)param_1[0x3c]) {
      puVar3 = (unsigned int *)*puVar3;
    }
    fn_825327A8(param_1[0x36],puVar3);
    fn_8252CAF8(param_1[0x36],1,0);
    param_1[0x45] = 1;
  }
  else if (param_2 == 2) {
    if (param_1[0x54] == 0) {
      fn_824560A0(param_1,param_1[0x52],0,param_1[0x55],1,param_1[0x56]);
      fn_824560A0(param_1 + 0x1b,param_1[0x52],1,param_1[0x55],1,param_1[0x56]);
      uVar2 = 0;
    }
    else {
      if (param_1[0x57] == 0) {
        uVar1 = param_1[0x53];
      }
      else {
        uVar1 = param_1[0x52];
      }
      fn_824560A0(param_1,uVar1,0,param_1[0x55],param_1[0x57],param_1[0x56]);
      if (param_1[0x57] == 0) {
        uVar1 = param_1[0x52];
      }
      else {
        uVar1 = param_1[0x53];
      }
      fn_824560A0(param_1 + 0x1b,uVar1,0,param_1[0x55],param_1[0x57] == 0,param_1[0x56]);
      uVar2 = 1;
    }
    fn_824560A0(param_1 + 0x36,param_1[0x52],uVar2,param_1[0x55],1,param_1[0x56]);
  }
  param_1[0x51] = param_2;
  return;
}

