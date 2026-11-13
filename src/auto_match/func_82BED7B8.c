extern int fn_82BE8D50();
extern int fn_82BED360();
extern int fn_82BED468();
extern int fn_82BF6B38();
extern int fn_82BF6BC0();
extern int fn_82BF7B48();
extern unsigned int lbl_83175468;


void fn_82BED7B8(int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  
  if ((param_1[0x14] != 2) && (param_1[0x14] == 0)) {
    iVar4 = param_1[0xd];
    if (iVar4 == 0) {
      uVar1 = thunk_FUN_82be5550(0x1c);
      if ((uVar1 & 0xffffffff) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)fn_82BF7B48(uVar1,0,param_1[2],lbl_83175468,0,0);
      }
      if (piVar3 == (int *)0x0) {
        param_1[0x14] = 2;
      }
      else {
        iVar4 = fn_82BF6B38(param_1 + 0xb,piVar3);
        if ((iVar4 == 0) || (iVar4 = (**(int (***)())(*piVar3 + 4))(piVar3), iVar4 == 0)) {
          param_1[0x14] = 2;
        }
        fn_82BE8D50(piVar3);
      }
    }
    else {
      piVar3 = *(int **)(iVar4 + 0x10);
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(int (***)())(*piVar3 + 8))(piVar3);
        if (iVar2 == 0) {
          return;
        }
        iVar2 = (**(int (***)())(*piVar3 + 0xc))(piVar3);
        if (iVar2 != 0) {
          if (piVar3[4] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(unsigned int *)(piVar3[4] + 0x10);
          }
          iVar2 = fn_82BED468(param_1,uVar5);
          if (iVar2 != 0) {
            if (piVar3[4] == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(piVar3[4] + 0x10);
            }
            param_1[0x11] = *(int *)(iVar2 + 0xc);
            fn_82BF6BC0(param_1 + 0xb,iVar4);
            (**(int (***)())(*param_1 + 0x10))(param_1);
            return;
          }
        }
      }
      fn_82BED360(param_1);
    }
  }
  return;
}

