extern int fn_82AB15D0();
extern int fn_82B6B230();
extern int fn_82B6D458();
extern int fn_82B7F170();


__int64 fn_82B6D6E8(int param_1,unsigned int *param_2)

{
  int iVar2;
  __int64 lVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d9f48,0x341);
  }
  if (param_2 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0b8,0xffffffff820d9f48,0x342);
  }
  uVar5 = 0;
  puVar3 = (unsigned int *)(param_1 + 0x1c);
  puVar4 = param_2;
  do {
    iVar2 = fn_82B6D458(param_1,*puVar3,puVar4[1],uVar5);
    if (iVar2 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x34d);
    }
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  } while ((uVar5 & 0xffffffff) < 6);
  iVar2 = fn_82B6D458(param_1,*(unsigned int *)(param_1 + 0x34),param_2[7],6);
  if (iVar2 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x357);
  }
  param_2[7] = 0;
  lVar1 = fn_82B6D458(param_1,*(unsigned int *)(param_1 + 0x38),param_2[8],7);
  if (lVar1 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x360);
  }
  param_2[8] = 0;
  fn_82B7F170(*param_2);
  fn_82B6B230(*(unsigned int *)(param_1 + 0x13c),param_2);
  return lVar1;
}

