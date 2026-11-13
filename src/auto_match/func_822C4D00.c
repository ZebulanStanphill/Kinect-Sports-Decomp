extern int fn_822C6B30();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8288B760();
extern unsigned int uStack00000038;


void fn_822C4D00(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uStack00000038;
  
  uStack00000038 = param_3;
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x16c);
  }
  else {
    uVar1 = fn_8288B760();
    uVar1 = uVar1 & 0xff;
  }
  if ((uVar1 == 0) && (*(int *)(param_1 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x114) + 0x50;
    fn_822C6D68(lVar2,param_1 + 0x80,param_1 + 0xc0);
    fn_822C6B30(lVar2,param_1 + 0x80,param_1 + 0xc0,param_2,
                      uStack00000038 & 0xffffffff00000000);
  }
  return;
}

