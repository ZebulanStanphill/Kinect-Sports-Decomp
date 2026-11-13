#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_430;
extern unsigned int *auStack_750;
extern unsigned int *auStack_770;
extern int fn_82C00470();
extern int fn_82C07A18();
extern int fn_82C08958();
extern int fn_82C08BA0();
extern int fn_82F691F0();


unsigned __int64 fn_82C02288(int param_1)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_770 [32];
  unsigned char auStack_750 [800];
  unsigned char auStack_430 [1040];
  
  fn_82C00470(param_1 + 0x88);
  *(unsigned __int64 *)(param_1 + 0x210) = 0;
  *(unsigned int *)(param_1 + 500) = 1;
  *(unsigned int *)(param_1 + 0x218) = 0;
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0x220) = 0;
  pcVar1 = *(int (***)())(**(int **)(param_1 + 0x34) + 0x38);
  uVar4 = ZEXT48(pcVar1);
  uVar2 = (*pcVar1)(*(int **)(param_1 + 0x34),1);
  if (-1 < (int)uVar2) {
    lVar3 = fn_82C08958(param_1 + 0x208,9,*(int *)(param_1 + 0x224) == 0,0xffffffffffffffff,0,
                              uVar4);
    uVar2 = -(unsigned __int64)(lVar3 != 0) & 0xffffffff8000ffff;
  }
  if (-1 < (int)uVar2) {
    lVar3 = fn_82C07A18(*(unsigned int *)(param_1 + 0x208),auStack_770);
    uVar2 = -(unsigned __int64)(lVar3 != 0) & 0xffffffff8000ffff;
    if (-1 < (int)uVar2) {
      lVar3 = fn_82C08BA0(*(unsigned int *)(param_1 + 0x208),*(unsigned int *)(param_1 + 0x1fc),
                                auStack_750);
      uVar2 = -(unsigned __int64)(lVar3 != 0) & 0xffffffff8000ffff;
      if (-1 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_430,0,0x3f8);
      }
    }
  }
  return uVar2;
}

