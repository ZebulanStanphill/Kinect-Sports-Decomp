extern int fn_823AA970();
extern int fn_82F4DA20();
extern int fn_82F4DD20();
extern int fn_82F4EBC0();
extern int fn_82F4ECF8();


unsigned __int64 fn_824A9298(int param_1)

{
  unsigned char uVar4;
  int lVar1;
  int iVar2;
  int iVar3;
  
  *(unsigned int *)(param_1 + 0x6c) = 0;
  uVar4 = fn_823AA970();
  lVar1 = fn_82F4EBC0(uVar4);
  if (lVar1 != 0) {
    iVar2 = fn_82F4DA20(2);
    iVar3 = fn_82F4ECF8(lVar1);
    fn_82F4DD20(*(unsigned int *)(iVar3 * 0x1c0 + iVar2 + 0x34));
  }
  return 0;
}

