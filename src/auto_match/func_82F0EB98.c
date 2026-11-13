extern int fn_82F242D8();
extern unsigned int lbl_8324E3B0;


void fn_82F0EB98(int param_1,int param_2)

{
  __int64 lVar1;
  
  lVar1 = (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4);
  fn_82F242D8(param_1,(__int64)(*(int *)(param_1 + 0x564) >> 1) *
                            (__int64)*(int *)(param_1 + 0x6de4) +
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94),
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar1,
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar1,lbl_8324E3B0,
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x658) - 1,*(unsigned int *)(param_2 + 4),1);
  return;
}

