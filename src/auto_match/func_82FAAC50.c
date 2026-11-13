extern int fn_82FA5190();
extern int fn_82FA9A38();
extern int fn_82FAE2B8();
extern unsigned int iStack_50;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_40;


int fn_82FAAC50(int param_1,unsigned int *param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iStack_50;
  int *piStack_48;
  int *piStack_44;
  unsigned int uStack_40;
  
  *param_4 = 0;
  piStack_48 = (int *)0x0;
  piStack_44 = (int *)0x0;
  uStack_40 = 0;
  if (*(int *)(param_2[1] + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(*(int *)(param_2[1] + 0x40) + 0x60);
  }
  fn_82FAE2B8(uVar1,param_3,&piStack_48);
  if ((int)piStack_44 - (int)piStack_48 >> 2 == 0) {
    iVar4 = 3;
  }
  else if (*piStack_48 == 0) {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
    piVar3 = piStack_48;
    if (piStack_48 != piStack_44) {
      do {
        iVar2 = fn_82FA9A38(param_2[1],*(unsigned int *)(param_1 + 8),*param_2,0,0,*piVar3,0,0);
        if ((iVar2 == 1) && ((iVar4 == 1 || (iStack_50 < *param_4)))) {
          *param_4 = iStack_50;
          iVar4 = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != piStack_44);
    }
  }
  if (piStack_48 != (int *)0x0) {
    piStack_44 = piStack_48;
    fn_82FA5190(lbl_831BC768);
  }
  return iVar4;
}

