extern int fn_82645110();
extern int fn_82647C20();
extern int fn_82647DE8();
extern int fn_82647E90();
extern int fn_82655D90();


void fn_82647F88(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int *piVar2;
  
  if ((*(unsigned int *)(param_1 + 0x5e88) & 4) != 0) {
    fn_82647C20(param_1,0);
  }
  if ((param_2 & 4) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
      uVar1 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar1 + 4) = 0x1973;
    *(unsigned int *)(uVar1 + 8) = 0x10000;
    *(unsigned int *)(uVar1 + 0xc) = 0x1964;
    *(unsigned int *)(uVar1 + 0x10) = 1;
    *(unsigned int *)(uVar1 + 0x14) = 0x1973;
    *(unsigned int *)(uVar1 + 0x18) = 0;
    *(unsigned int *)(uVar1 + 0x1c) = 0xc0043c00;
    *(unsigned int *)(uVar1 + 0x20) = 3;
    *(unsigned int *)(uVar1 + 0x24) = 0x1973;
    *(unsigned int *)(uVar1 + 0x28) = 0;
    *(unsigned int *)(uVar1 + 0x2c) = 1;
    *(unsigned int *)(uVar1 + 0x30) = 0x100;
    *(unsigned int *)(uVar1 + 0x34) = 0x1852;
    *(unsigned int *)(uVar1 + 0x38) = 0;
    *(unsigned int *)(uVar1 + 0x3c) = 0x1838;
    *(unsigned int *)(uVar1 + 0x40) = 1;
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x40);
    fn_82655D90(param_1,param_5,param_6,param_7);
  }
  fn_82647DE8(param_1,param_4);
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0x1844;
  piVar2 = (int *)(uVar1 + 8);
  *piVar2 = ((param_3 >> 0x14) + 0x200 & 0x1000) + (param_3 & 0x1fffffff);
  if ((param_2 & 4) != 0) {
    *(unsigned int *)(uVar1 + 0xc) = 0x1838;
    *(unsigned int *)(uVar1 + 0x10) = 0;
    *(unsigned int *)(uVar1 + 0x14) = 0xc0043c00;
    *(unsigned int *)(uVar1 + 0x18) = 3;
    *(unsigned int *)(uVar1 + 0x1c) = 0x1973;
    *(unsigned int *)(uVar1 + 0x20) = 0;
    *(unsigned int *)(uVar1 + 0x24) = 1;
    *(unsigned int *)(uVar1 + 0x28) = 0x100;
    *(unsigned int *)(uVar1 + 0x2c) = 0x1852;
    piVar2 = (int *)(uVar1 + 0x30);
    *piVar2 = 1;
  }
  *(int **)(param_1 + 0x30) = piVar2;
  if ((param_2 & 2) != 0) {
    fn_82647E90(param_1,param_4,param_8);
  }
  fn_82645110(param_1);
  return;
}

