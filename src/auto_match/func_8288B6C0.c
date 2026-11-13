extern unsigned int *auStack_30;
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289F350();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828BE158();
extern int fn_828C6CD0();


void fn_8288B6C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_30 [48];
  
  uVar1 = fn_8289F350(param_1,param_3);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_8265C9E0(0xa8);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828B5580(auStack_30,param_2);
      uVar3 = fn_828C6CD0(uVar2,uVar3);
    }
    fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
    uVar4 = fn_82897BD0(uVar1);
    fn_828BE158(param_1,uVar3,uVar4,0);
  }
  fn_828B55B0(param_2);
  return;
}

