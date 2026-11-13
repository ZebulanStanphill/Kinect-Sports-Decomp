extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int memcpy();


int fn_82F3EF98(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int uVar2;
  
  uVar2 = 0;
  if (*(unsigned int *)(param_1 + 0x4c) != 0) {
    fn_82E4FE40(*(int *)(param_1 + 0x4c));
  }
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(int *)(param_1 + 0x58) = (int)param_2;
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar2 = 0x80070057;
    }
    else if (param_2 > 0) {
      uVar1 = fn_82E50BE8(param_2,0,0,0,0);
      *(int *)(param_1 + 0x4c) = (int)uVar1;
      if (uVar1 == 0) {
        uVar2 = 0x8007000e;
      }
      else {
        memcpy(uVar1,param_3,*(unsigned int *)(param_1 + 0x58));
      }
    }
  }
  return uVar2;
}

