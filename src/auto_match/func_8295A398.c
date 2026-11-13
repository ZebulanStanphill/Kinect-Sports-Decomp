extern unsigned int *auStack_40;
extern int fn_82935220();
extern int fn_82935240();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_829355B8();
extern int fn_82958950();
extern int fn_82975B00();
extern int fn_82976860();
extern int memmove();


__int64 fn_8295A398(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int * apiStack_50;
  unsigned char auStack_40 [16];
  
  apiStack_50 = (int *)0x0;
  fn_82935220(auStack_40,0x53455250);
  lVar1 = fn_82976860(param_1);
  if (-1 < lVar1) {
    lVar1 = (**(int (***)())(**(int **)(param_1 + 0xe4) + 8))(*(int **)(param_1 + 0xe4),&apiStack_50);
    if (-1 < lVar1) {
      if ((int)lVar1 == 0) {
        uVar2 = (**(int (***)())(*apiStack_50 + 0x10))();
        uVar3 = (**(int (***)())(*apiStack_50 + 0xc))(apiStack_50);
        lVar1 = fn_829352D0(auStack_40,uVar3,uVar2,1,0,0);
        if (lVar1 < 0) goto LAB_8295a4f4;
      }
      uVar4 = fn_82935240(auStack_40);
      if ((uVar4 & 0xffffffff) < 0x8001) {
        lVar1 = fn_82958950(param_1,uVar4);
        if (-1 < lVar1) {
          memmove((uVar4 + 1 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x110),
                       (unsigned __int64)*(unsigned int *)(param_1 + 0x110) + 4,
                       ((unsigned __int64)*(unsigned int *)(param_1 + 0x114) - 1 & 0x3fffffff) << 2);
          lVar1 = fn_829355B8(auStack_40,(unsigned __int64)*(unsigned int *)(param_1 + 0x110) + 4,uVar4);
          if (-1 < lVar1) {
            lVar1 = 0;
            iVar5 = *(int *)(param_1 + 0x114) + (int)uVar4;
            *(int *)(param_1 + 0x114) = iVar5;
            *(int *)(param_1 + 0x124) = (int)uVar4 + *(int *)(param_1 + 0x124);
            *(int *)(param_1 + 0x120) = iVar5;
          }
        }
      }
      else {
        fn_82975B00(param_1,0,0x11c4,0xffffffff820380f4);
        lVar1 = -0x7fffbffb;
      }
    }
  }
LAB_8295a4f4:
  if (apiStack_50 != (int *)0x0) {
    (**(int (***)())(*apiStack_50 + 8))();
    apiStack_50 = (int *)0x0;
  }
  fn_82935258(auStack_40);
  return lVar1;
}

