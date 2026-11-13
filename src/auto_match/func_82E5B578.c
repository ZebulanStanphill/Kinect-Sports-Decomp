extern unsigned int *auStack_40;
extern int fn_82E4FE40();
extern int fn_82E569B0();
extern int fn_82E5AF48();


unsigned __int64 fn_82E5B578(int param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      lVar1 = fn_82E5AF48(param_1 + 0x8c,uVar3,&auStack_40);
      uVar2 = -(unsigned int)(lVar1 != 0) & auStack_40;
      if (*(int *)(uVar2 + 0x18) != 0) {
        fn_82E4FE40();
      }
      *(unsigned int *)(uVar2 + 0x18) = 0;
      fn_82E4FE40(uVar2);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xf4));
  }
  fn_82E569B0(param_1 + 0x8c,0);
  *(unsigned int *)(param_1 + 0xf4) = 0;
  return 0;
}

