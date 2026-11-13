extern unsigned int *auStack_c0;
extern int fn_82AA66A8();
extern int fn_82B45880();
extern int fn_82B80788();
extern int fn_82B808B0();
extern int fn_82B81B40();


void fn_82B83528(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_c0 [192];
  
  iVar2 = fn_82B45880(param_1,param_3);
  uVar5 = 0;
  uVar1 = *(unsigned int *)(iVar2 + 0x18);
  uVar7 = *(unsigned int *)(param_2 + 0x2c) & 0x1e0000;
  while (uVar7 != 0) {
    uVar6 = uVar7 & ~(uVar7 - 1);
    uVar7 = uVar7 - uVar6;
    if (uVar6 == 0x20000) {
      uVar4 = 0;
    }
    else if (uVar6 == 0x40000) {
      uVar4 = 1;
    }
    else {
      if (uVar6 != 0x80000) {
        if (uVar6 != 0x100000) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        fn_82B80788(param_1,auStack_c0,100,param_3,param_4);
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xe2b,auStack_c0);
      }
      uVar4 = 2;
    }
    uVar5 = fn_82B808B0(param_1,param_7,uVar4,uVar5,param_3,param_4);
  }
  cVar3 = fn_82B81B40(param_1,uVar1,param_4,param_5,param_6,uVar5,param_3,param_7);
  if (cVar3 == '\0') {
    uVar7 = *(unsigned int *)(param_1 + 0x30);
    fn_82B80788(param_1,auStack_c0,100,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,(-(unsigned __int64)((uVar7 & 0xffff0000) == 0xffff0000) & 7) + 0xdc4,
                      auStack_c0);
  }
  return;
}

