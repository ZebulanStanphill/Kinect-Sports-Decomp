extern unsigned int *auStack_40;
extern int fn_82E4FE40();
extern int fn_82E531C8();
extern int fn_82E569B0();


unsigned __int64 fn_82E53870(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int auStack_40;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    do {
      lVar1 = fn_82E531C8(param_1 + 0xa0,uVar2,&auStack_40);
      uVar3 = -(unsigned int)(lVar1 != 0) & auStack_40;
      if (uVar3 != 0) {
        if (*(int *)(uVar3 + 0x18) != 0) {
          fn_82E4FE40();
        }
        *(unsigned int *)(uVar3 + 0x18) = 0;
        fn_82E4FE40(uVar3);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x108));
  }
  fn_82E569B0(param_1 + 0xa0,0);
  *(unsigned int *)(param_1 + 0x108) = 0;
  return 0;
}

