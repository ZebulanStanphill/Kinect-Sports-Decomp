extern unsigned int *auStack_30;
extern int fn_82831618();
extern int fn_82F674A8();
extern int fn_82F67988();
extern int fn_82F6D000();


unsigned __int64 fn_8282D318(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int auStack_30;
  
  iVar2 = fn_82F674A8(&auStack_30,param_2,0xffffffff8201ed40);
  if (iVar2 == 0) {
    fn_82F6D000(auStack_30,0xffffffff8201ed44,*(unsigned int *)(param_1 + 8));
    uVar4 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      lVar3 = 0;
      do {
        fn_82831618((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + lVar3,auStack_30);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 < *(unsigned int *)(param_1 + 8));
    }
    fn_82F67988(auStack_30);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

