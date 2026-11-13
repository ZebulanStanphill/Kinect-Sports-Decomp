extern int fn_8236FB68();
extern int fn_82508078();


void fn_8236FD90(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((param_2 & 0xffffffff) < 0x2a) {
    uVar1 = fn_8236FB68(param_2);
  }
  else {
    uVar1 = 0;
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),uVar1,0);
  }
  return;
}

