extern int fn_82F68700();
extern int fn_82F79400();


/* WARNING: Removing unreachable block (ram,0x82f68844) */
/* WARNING: Removing unreachable block (ram,0x82f6881c) */
/* WARNING: Removing unreachable block (ram,0x82f6882c) */
/* WARNING: Removing unreachable block (ram,0x82f6883c) */
/* WARNING: Removing unreachable block (ram,0x82f68834) */
/* WARNING: Removing unreachable block (ram,0x82f68824) */

unsigned __int64 fn_82F68780(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = param_1 & 0x300;
  uVar1 = 0;
  if (uVar3 != 0) {
    if (uVar3 == 0x300) {
      uVar1 = 1;
    }
    else if (uVar3 == 0x200) {
      uVar1 = 2;
    }
    else if (uVar3 == 0x100) {
      uVar1 = 3;
    }
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  uVar3 = 0;
  if ((param_2 & 1) != 0) {
    uVar3 = 8;
  }
  if ((param_2 & 2) != 0) {
    uVar3 = uVar3 | 0x20;
  }
  if ((param_2 & 4) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((param_2 & 8) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if ((param_2 & 0x10) != 0) {
    uVar3 = uVar3 | 0x80;
  }
  fn_82F79400(uVar1,(param_2 & 0x300) >> 8 | uVar3);
  uVar2 = fn_82F68700();
  fn_82F79400(0,0);
  uVar3 = fn_82F68700();
  KeEnableFpuExceptions((uVar3 & 0x8001f) != 0x8001f);
  return uVar2;
}

