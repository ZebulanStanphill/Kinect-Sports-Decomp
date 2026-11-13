extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8267DD08();
extern int fn_8267DDF8();
extern int fn_8267F658();
extern int fn_82A1E658();
extern int fn_82F6A6C8();
extern unsigned int lbl_831E7E6C;


unsigned __int64 fn_8267DF78(int param_1,__int64 param_2)

{
  char cVar2;
  int iVar1;
  
  if (((int)param_2 != 0) &&
     (((*(int *)(param_1 + 0x1c) < 1 && ((*(unsigned int *)(param_1 + 0x18) & 1) == 0)) ||
      (cVar2 = fn_8267F658(param_1,0xffffffffffffffff), cVar2 != '\0')))) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_82A1E658();
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    fn_8267C4C8(param_1);
    fn_8267DDF8(param_1);
    *(unsigned int *)(param_1 + 0x30) = 0;
    sync(1);
    *(unsigned int *)(param_1 + 0x1c) = 0;
    sync(1);
    *(unsigned int *)(param_1 + 0x18) = -(unsigned int)(param_2 != 1) & 8;
    iVar1 = fn_82F6A6C8(0,*(unsigned int *)(param_1 + 0x20),0xffffffff8267def8,param_1,0,0);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
    sync(1);
    *(unsigned int *)(param_1 + 0x18) = 0;
    fn_8267C4F0(param_1);
    fn_8267DD08(lbl_831E7E6C,param_1);
  }
  return 0;
}

