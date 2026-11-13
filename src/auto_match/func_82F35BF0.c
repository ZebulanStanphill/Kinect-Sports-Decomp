extern int fn_82F35400();
extern unsigned int uStack_60;


unsigned __int64 fn_82F35BF0(int param_1,unsigned __int64 *param_2,unsigned __int64 *param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uStack_60;
  int *piStack_5c;
  __int64 alStack_58;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    uVar2 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x130) & 0x3fffffff) * 4 + 0x22 & 0xffffffff;
    if (*(int *)(param_1 + 0xc4) != 0) {
      do {
        fn_82F35400(param_1 + 0x5c,uVar4,&piStack_5c);
        piVar1 = (int *)*piStack_5c;
        if (piVar1 != (int *)0x0) {
          uStack_60 = 0;
          (**(int (***)())(*piVar1 + 0x10))(piVar1,&uStack_60);
          (**(int (***)())(*piVar1 + 0xc))(piVar1,uStack_60 | 1);
          alStack_58 = 0;
          (**(int (***)())(*piVar1 + 0x18))(piVar1,&alStack_58);
          lVar5 = alStack_58 + lVar5;
          (**(int (***)())(*piVar1 + 0xc))(piVar1,uStack_60);
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xc4));
    }
    *(unsigned __int64 *)(param_1 + 0x20) = lVar5 + uVar2;
    if (param_2 != (unsigned __int64 *)0x0) {
      *param_2 = uVar2;
    }
    if (param_3 != (unsigned __int64 *)0x0) {
      *param_3 = *(unsigned __int64 *)(param_1 + 0x20);
    }
    uVar3 = 0;
  }
  return uVar3;
}

