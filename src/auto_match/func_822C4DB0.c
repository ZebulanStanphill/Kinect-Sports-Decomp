extern int fn_822C69F0();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8288B760();


void fn_822C4DB0(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  
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
    fn_822C69F0(lVar2,param_1 + 0x80,param_1 + 0xc0);
  }
  return;
}

