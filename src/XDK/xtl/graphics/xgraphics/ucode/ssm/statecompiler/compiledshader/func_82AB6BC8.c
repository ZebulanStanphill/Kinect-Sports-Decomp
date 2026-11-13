extern int fn_82AB15D0();
extern int fn_82AB5910();
extern int fn_82AB6498();
extern int fn_82AB6770();
extern int fn_82AB67A8();
extern int fn_82AB8540();
extern int fn_82B6B3E8();
extern int fn_82B6B628();
extern int fn_82B6B868();
extern int fn_82B6BF80();


/* WARNING: Removing unreachable block (ram,0x82ab6c24) */

void fn_82AB6BC8(unsigned int *param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0xe6);
  }
  uVar1 = param_1[0x264];
  param_1[0x264] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    fn_82B6B628(param_1[5],param_1[0x263]);
    while (lVar2 = fn_82AB6498(param_1[0x262]), lVar2 != 0) {
      uVar3 = fn_82AB67A8(lVar2);
      (*(int (**)())param_1[2])(*param_1,uVar3);
      fn_82AB6770(lVar2);
    }
    fn_82B6B868(param_1[6],param_1[0x262]);
    while (lVar2 = fn_82AB6498(param_1[0x261]), lVar2 != 0) {
      uVar3 = fn_82AB67A8(lVar2);
      (*(int (**)())param_1[2])(*param_1,uVar3);
      fn_82AB6770(lVar2);
    }
    fn_82B6B868(param_1[6],param_1[0x261]);
    while (lVar2 = fn_82AB6498(param_1[0x25f]), lVar2 != 0) {
      uVar3 = fn_82AB67A8(lVar2);
      (*(int (**)())param_1[2])(*param_1,uVar3);
      fn_82AB6770(lVar2);
    }
    fn_82B6B868(param_1[6],param_1[0x25f]);
    while (uVar4 = fn_82AB5910(param_1[0x260]), (uVar4 & 0xffffffff) != 0) {
      (*(int (**)())param_1[2])(*param_1,uVar4);
    }
    fn_82B6B3E8(param_1[4],param_1[0x260]);
    fn_82AB8540(param_1[0xd]);
    if (param_1[0xe] != 0) {
      fn_82B6BF80();
    }
    if (param_1[0xb] != 0) {
      (*(int (**)())param_1[2])(*param_1);
    }
    (*(int (**)())param_1[2])(*param_1,param_1);
  }
  return;
}

