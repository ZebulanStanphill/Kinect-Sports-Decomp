extern int fn_82A29FE0();
extern int fn_82E49568();
extern int fn_82E4A178();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E4A938(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  piVar1 = (int *)0x0;
  fn_82E50CB8(param_1 + 0x58);
  if (((param_2 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) {
    uVar3 = 0xffffffff80070057;
LAB_82e4aa80:
    if (-1 < (int)uVar3) goto LAB_82e4aaa4;
  }
  else {
    if (*(int *)(param_1 + 0x9c) == -1) {
      uVar3 = 0xffffffffc00d36b2;
      goto LAB_82e4aaa4;
    }
    uVar3 = fn_82E50BE8(100,0,0,0,0);
    if ((uVar3 & 0xffffffff) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)fn_82E49568(uVar3,2,0,param_4,param_5);
    }
    if (piVar1 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
      goto LAB_82e4aaa4;
    }
    (**(int (***)())(*piVar1 + 4))(piVar1);
    uVar3 = fn_82E4A178(param_1,param_2,param_3,0,piVar1);
    if (-1 < (__int64)uVar3) {
      iVar2 = fn_82A29FE0(*(unsigned int *)(param_1 + 0x9c),piVar1[0x12],piVar1[0x13],0,
                                piVar1 + 1);
      if ((iVar2 == 0) && (iVar2 = thunk_FUN_82a2b798(), iVar2 != 0x3e5)) {
        uVar3 = thunk_FUN_82a2b798();
        if (0 < (int)uVar3) {
          uVar3 = uVar3 & 0xffff | 0x80070000;
        }
      }
      else {
        *(unsigned __int64 *)(param_1 + 200) = (unsigned __int64)(unsigned int)piVar1[0x10] + *(__int64 *)(param_1 + 200)
        ;
      }
      goto LAB_82e4aa80;
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
LAB_82e4aaa4:
  fn_82E50F10(param_1 + 0x58);
  return uVar3;
}

