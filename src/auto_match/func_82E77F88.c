extern int fn_82E77148();
extern unsigned int uStack00000028;


unsigned int fn_82E77F88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uStack00000028;
  
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = *(unsigned int *)(param_1 + 0x110);
  }
  uStack00000028 = param_3;
  uVar1 = fn_82E77148(param_1,*(unsigned int *)(param_1 + 0x110),param_2,
                        param_3 & 0xffffffff00000000);
  if (-1 < (int)uVar1) {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  }
  return uVar1 >> 0x1f ^ 1;
}

