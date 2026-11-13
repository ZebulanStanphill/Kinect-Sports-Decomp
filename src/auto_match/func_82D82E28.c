extern unsigned int *auStack_30;
extern int fn_82CE4118();
extern int fn_82D913E0();
extern int fn_82D9A260();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADC08();


void fn_82D82E28(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  __int64 lVar3;
  unsigned char auStack_30 [4];
  int *piStack_2c;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x98) + (unsigned __int64)*(unsigned int *)(param_1 + 0x94) == 0) {
    *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x94) + 1;
    fn_82DADC08(param_1,param_2);
    fn_82D9A260(param_2);
    fn_82D913E0(param_1,param_2);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x118)) {
      piVar1 = *(int **)(param_1 + 0x114);
      do {
        if ((int *)*piVar1 == param_2) goto LAB_82d82ecc;
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x118));
    }
    iVar4 = -1;
LAB_82d82ecc:
    iVar2 = *(int *)(param_1 + 0x118) + -1;
    *(int *)(param_1 + 0x118) = iVar2;
    if (iVar2 != iVar4) {
      *(unsigned int *)(iVar4 * 4 + *(int *)(param_1 + 0x114)) =
           *(unsigned int *)(iVar2 * 4 + *(int *)(param_1 + 0x114));
    }
    param_2[2] = 0;
    if (*(short *)(param_2 + 1) == 0) {
      (**(int (***)())(*param_2 + 0x34))(param_2);
    }
    fn_82CE4118(param_2);
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar3;
    if ((lVar3 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(unsigned int *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(unsigned int *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(unsigned int *)(param_1 + 0x88));
      }
    }
  }
  else {
    auStack_30[0] = 0xe;
    piStack_2c = param_2;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_30);
  }
  return;
}

