unsigned __int64
fn_82BE0220(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if (param_1 == 0) {
    uVar1 = 0x140;
    uVar7 = 0;
    uVar6 = 4;
    uVar5 = 0x10;
    uVar4 = 0;
    uVar2 = 0x16;
  }
  else {
    if (param_1 == 1) {
      uVar1 = 0x140;
      uVar7 = 2;
      uVar6 = 4;
      uVar5 = 0x10;
      uVar4 = 4;
      uVar3 = 0xfffffffe;
      uVar2 = 1;
      goto LAB_82be02a8;
    }
    if (param_1 < 3) {
      uVar7 = 2;
    }
    else {
      if (param_1 != 3) {
        return 6;
      }
      uVar7 = 6;
    }
    uVar1 = 0x280;
    uVar6 = 5;
    uVar5 = 0x20;
    uVar4 = 4;
    uVar2 = 0x21;
  }
  uVar3 = 7;
LAB_82be02a8:
  *param_2 = uVar1;
  *param_3 = uVar7;
  *param_4 = uVar6;
  *param_5 = uVar5;
  *param_6 = uVar4;
  *param_7 = uVar3;
  *param_8 = uVar2;
  return 0;
}

