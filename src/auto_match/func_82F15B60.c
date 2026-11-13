extern int fn_82BA02A8();
extern int fn_82E89078();
extern int fn_82F02410();
extern int fn_82F65350();


void fn_82F15B60(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  
  if (((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) != 0)) &&
     (*(int *)(param_1 + 0x6de8) == 1)) {
    param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2d4) + param_2;
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),param_2,9);
  uVar1 = fn_82F65350();
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar1 & 1,1);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      fn_82E89078(param_1,*(unsigned int *)(param_1 + 0x900));
    }
    else if (*(int *)(param_1 + 0x7b38) == 0) {
      fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0x900));
    }
    else {
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1,*(unsigned int *)(param_1 + 0x900));
    }
  }
  return;
}

