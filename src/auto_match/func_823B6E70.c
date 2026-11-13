extern int fn_823B65F8();
extern int fn_8243C3D0();
extern int fn_8243C490();
extern int fn_8288B760();
extern int fn_828AAF70();
extern int fn_828B00A0();
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_823B6E70(unsigned int *param_1)

{
  char cVar4;
  int *piVar2;
  __int64 lVar1;
  int iVar3;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  unsigned __int64 uStack_18;
  
  if (param_1[3] != 0) {
    cVar4 = fn_8288B760((unsigned __int64)param_1[3] - 0x68);
    if (cVar4 != '\0') {
      piVar2 = (int *)(param_1[3] - 0x68);
      if (param_1[3] == 0) {
        piVar2 = (int *)0x0;
      }
      lVar1 = (**(int (***)())(*piVar2 + 8))();
      iVar3 = fn_8243C3D0(lVar1 + 0x9c,0);
      if (iVar3 == 1) {
        piVar2 = (int *)(param_1[3] - 0x68);
        if (param_1[3] == 0) {
          piVar2 = (int *)0x0;
        }
        lVar1 = (**(int (***)())(*piVar2 + 8))();
        iVar3 = fn_8243C3D0(lVar1 + 0xf0,0);
        if (iVar3 == 0) {
          uStack_1c = (**(int (***)())(**(int **)(*param_1 + 0x308) + 8))();
          ppuStack_20 = &lbl_821B9BC8;
          fn_823B65F8(param_1,&ppuStack_20);
          uStack_18 = fn_828B00A0((unsigned __int64)*param_1 + 0x278);
          piVar2 = (int *)(param_1[3] - 0x68);
          if (param_1[3] == 0) {
            piVar2 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piVar2 + 8))();
          fn_8243C490(lVar1 + 0xf0,&uStack_18);
          piVar2 = (int *)(param_1[3] - 0x68);
          if (param_1[3] == 0) {
            piVar2 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piVar2 + 8))();
          fn_828AAF70(lVar1 + 0x144,1);
          param_1[4] = 0;
        }
      }
    }
  }
  return;
}

