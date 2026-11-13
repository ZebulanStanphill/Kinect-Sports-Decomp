extern int fn_82F24118();


void fn_82F0F4E8(int param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  uVar1 = *(unsigned int *)(param_2 + 0x108);
  lVar2 = (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
          ((__int64)*(int *)(param_1 + 0x568) * (__int64)(int)uVar1 & 0x1fffffffU) * 8;
  fn_82F24118(param_1,(__int64)(*(int *)(param_1 + 0x564) >> 1) *
                          (__int64)*(int *)(param_1 + 0x6de4) +
                          ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar1 & 0xfffffffU)
                          * 0x10 + (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + 4,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar2 + 4,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar2 + 4,*(int *)(param_1 + 0x2d0) << 1,
                  ((unsigned __int64)*(unsigned int *)(param_2 + 0x10c) - (unsigned __int64)uVar1 & 0xfffffff) << 4,
                  *(unsigned int *)(param_2 + 0xec),*(unsigned int *)(param_2 + 0xf4));
  return;
}

