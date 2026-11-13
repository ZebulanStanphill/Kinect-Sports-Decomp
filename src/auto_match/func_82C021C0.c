extern unsigned int *auStack_28;
extern int fn_82C094B8();


unsigned __int64 fn_82C021C0(int param_1,unsigned int param_2,unsigned int *param_3)

{
  __int64 lVar1;
  unsigned int *puStack00000024;
  unsigned char auStack_28 [16];
  
  *(unsigned __int64 *)(param_1 + 0x210) = 0;
  *(unsigned int *)(param_1 + 0x218) = 0;
  puStack00000024 = param_3;
  lVar1 = fn_82C094B8(*(unsigned int *)(param_1 + 0x208),param_2,auStack_28);
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  return -(unsigned __int64)(lVar1 != 0) & 0xffffffff80004005;
}

