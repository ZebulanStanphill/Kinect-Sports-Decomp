extern unsigned int lbl_8326B474;


void fn_82544918(unsigned int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_1 == 0) {
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) | 0x70;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
    *(unsigned int *)(param_2 + 0x2f14) = 1;
    *(unsigned int *)(param_2 + 0x2934) =
         (-(unsigned int)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
         *(unsigned int *)(param_2 + 0x2934) & 0xfffffffd;
LAB_82544b04:
    uVar1 = *(unsigned __int64 *)(param_2 + 0x10);
  }
  else {
    if (param_1 == 1) {
      *(unsigned int *)(param_2 + 0x2934) =
           ((-(unsigned int)(lbl_8326B474 != 0) & 3) + 3) * 0x10 | *(unsigned int *)(param_2 + 0x2934) & 0xffffff8f;
      *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
      *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) | 4;
      *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
      *(unsigned int *)(param_2 + 0x2f14) = 1;
      *(unsigned int *)(param_2 + 0x2934) =
           (-(unsigned int)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
           *(unsigned int *)(param_2 + 0x2934) & 0xfffffffd;
    }
    else {
      if (2 < param_1) {
        if (param_1 != 3) {
          return;
        }
        *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) | 0x70;
        *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
        *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) | 4;
        *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
        *(unsigned int *)(param_2 + 0x2f14) = 1;
        *(unsigned int *)(param_2 + 0x2934) =
             (-(unsigned int)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
             *(unsigned int *)(param_2 + 0x2934) & 0xfffffffd;
        goto LAB_82544b04;
      }
      *(unsigned int *)(param_2 + 0x2934) =
           ((-(unsigned int)(lbl_8326B474 != 0) & 3) + 3) * 0x10 | *(unsigned int *)(param_2 + 0x2934) & 0xffffff8f;
      *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
      *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffffffb;
      *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
      *(unsigned int *)(param_2 + 0x2f14) = 1;
      *(unsigned int *)(param_2 + 0x2934) =
           (-(unsigned int)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
           *(unsigned int *)(param_2 + 0x2934) & 0xfffffffd;
    }
    uVar1 = *(unsigned __int64 *)(param_2 + 0x10);
  }
  *(unsigned __int64 *)(param_2 + 0x10) = uVar1 | 0x20800;
  return;
}

