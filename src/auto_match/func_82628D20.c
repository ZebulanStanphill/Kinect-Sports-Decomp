extern int fn_822315A0();
extern __int64 fn_827D50B8();


unsigned __int64 fn_82628D20(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_827D50B8(*(unsigned int *)(param_1 + 0x18));
  if (*(unsigned int *)(param_3 + 4) != 0) {
    fn_822315A0(*(int *)(param_3 + 4));
  }
  return uVar1;
}

