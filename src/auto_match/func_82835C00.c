extern int fn_828315F0();
extern int fn_82F6D000();


void fn_82835C00(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  iVar2 = fn_828315F0(*(unsigned int *)(param_1[1] + 4));
  uVar6 = (unsigned __int64)*(unsigned int *)(*param_1 + 8);
  iVar1 = *(int *)(param_1[1] + 0x10);
  fn_82F6D000(param_2,0xffffffff8201f2c4,uVar6);
  uVar5 = 0;
  uVar3 = *(unsigned int *)(*param_1 + 0xc);
  lVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(*param_1 + 0x10) * 4 + *(int *)(iVar2 + 0x124)) +
          (unsigned __int64)*(unsigned int *)(iVar2 + 0x128);
  if (uVar3 != 0) {
    do {
      if (uVar3 == 1) {
        fn_82F6D000(param_2,0xffffffff8201f2cc,lVar4);
      }
      else {
        fn_82F6D000(param_2,0xffffffff8201f2d0,lVar4,uVar5);
      }
      (**(int (***)())(*(int *)param_1[1] + 4))
                ((int *)param_1[1],param_2,0,uVar6 + param_3,0,0,0xffffffffffffffff);
      uVar5 = uVar5 + 1;
      uVar6 = *(unsigned int *)(iVar1 + 0x10) + uVar6;
      uVar3 = *(unsigned int *)(*param_1 + 0xc);
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)uVar3);
  }
  return;
}

