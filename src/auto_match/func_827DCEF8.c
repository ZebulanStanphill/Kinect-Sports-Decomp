extern int fn_822315A0();
extern int fn_8281C6D0();
extern unsigned int iStack0000003c;


unsigned __int64
fn_827DCEF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,int param_6)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iStack0000003c;
  
  iStack0000003c = param_6;
  iVar2 = fn_8281C6D0(param_2,param_3,param_4);
  if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
    if (*(int *)(param_6 + 4) != 0) {
      fn_822315A0();
    }
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_6 + 4) != 0) {
      fn_822315A0();
    }
    uVar1 = 0x65b;
  }
  return uVar1;
}

