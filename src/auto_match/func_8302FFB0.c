extern int fn_83030F20();
extern int fn_83030FE8();
extern int fn_83031378();
extern int fn_83033A68();
extern unsigned int lbl_831BC768;


void fn_8302FFB0(__int64 param_1)

{
  int iVar1;
  
  iVar1 = fn_83033A68();
  if (((iVar1 == 1) &&
      (iVar1 = fn_83031378(param_1 + 0xc4,4,0xffffffffffffffff,lbl_831BC768), iVar1 == 1)) &&
     (iVar1 = fn_83030F20(param_1 + 0xe4,4,0xffffffffffffffff,lbl_831BC768), iVar1 == 1)) {
    fn_83030FE8(param_1 + 0x104,4,0xffffffffffffffff,lbl_831BC768);
  }
  return;
}

