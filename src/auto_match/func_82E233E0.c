extern int fn_82E22E18();
extern int fn_82E23350();
extern int fn_82E23750();
extern int fn_82E23950();
extern int memcpy();


__int64 fn_82E233E0(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  
  memcpy(param_1 + 0xc,param_2,0x20);
  *(unsigned int *)(param_1 + 0x15c) = 0;
  *(unsigned int *)(param_1 + 0x160) = 0;
  *(unsigned int *)(param_1 + 0x164) = 0;
  uVar2 = param_2[2];
  if (uVar2 < 0x201) {
    uVar2 = 0x200;
  }
  *(unsigned int *)(param_1 + 0x184) = uVar2 << 6;
  lVar1 = fn_82E23750(param_1 + 0x30,*param_2,param_2[1],param_2[2],uVar2 << 6,0);
  if ((lVar1 != 0) || (lVar1 = fn_82E23350(param_1), lVar1 != 0)) {
    fn_82E22E18(param_1);
    fn_82E23950(param_1 + 0x30);
  }
  return lVar1;
}

