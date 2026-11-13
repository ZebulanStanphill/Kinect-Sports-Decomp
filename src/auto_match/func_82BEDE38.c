extern int fn_82BE8D50();
extern int fn_82BEDD30();
extern int fn_82BF7540();
extern unsigned int iStack_30;


void fn_82BEDE38(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iStack_30;
  int aiStack_2c;
  
  if (param_1[0x14] == 2) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_2[5] == 0) {
    return;
  }
  iStack_30 = param_2[2];
  piVar2 = (int *)0x0;
  iVar1 = (**(int (***)())(*param_2 + 0xc))(param_2);
  if (iVar1 != 0) {
    if (param_2[4] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2[4] + 0x10);
    }
    if (iVar1 != 0) {
      aiStack_2c = 0;
      iVar1 = fn_82BF7540(param_1 + 3,&iStack_30,&aiStack_2c);
      if (iVar1 == 0) goto LAB_82bedf6c;
      if (param_2[4] == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_2[4] + 0x10);
      }
      if (*(int *)(aiStack_2c + 0x18) == *(int *)(iVar1 + 0xc)) {
        piVar2 = (int *)(**(int (***)())(*param_1 + 8))(param_1,*(unsigned int *)(aiStack_2c + 0xc));
        if (piVar2 == (int *)0x0) goto LAB_82bedf6c;
        if (param_2[4] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(unsigned int *)(param_2[4] + 0x10);
        }
        iVar1 = (**(int (***)())(*piVar2 + 0xc))(piVar2,uVar3);
        if (iVar1 != 0) goto LAB_82bedf6c;
        fn_82BE8D50(piVar2);
      }
    }
  }
  piVar2 = (int *)0x0;
  fn_82BEDD30(param_1,iStack_30);
LAB_82bedf6c:
  (*(int (**)())param_2[5])(iStack_30,piVar2,param_2[6]);
  return;
}

