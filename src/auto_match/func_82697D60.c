extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_826ADE60();
extern unsigned int iStack_40;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_82697D60(char *param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  unsigned char abStack_70 [16];
  unsigned char **ppuStack_60;
  unsigned char *pbStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned char uStack_4c;
  int *piStack_48;
  unsigned int uStack_44;
  int iStack_40;
  
  if ((*param_1 == '\t') && (param_2 != (int *)0x0)) {
    if (*(int *)(*(int *)(param_1 + 4) + 0x1c) == 0) {
      cVar3 = (**(int (***)())(*param_2 + 4))(param_2);
      if (cVar3 != '\0') {
        fn_826ADE60(param_2,0xffffffff82006288);
      }
    }
    else {
      iVar1 = param_2[2];
      piVar4 = param_2 + 2;
      abStack_70[0] = 0;
      param_2[2] = iVar1 + 0x10U;
      if ((unsigned int)param_2[4] <= iVar1 + 0x10U) {
        fn_826826A8(piVar4);
      }
      if (*piVar4 != 0) {
        fn_82695DA0(*piVar4,param_4);
      }
      pbStack_5c = abStack_70;
      ppuStack_60 = &lbl_8200579C;
      uStack_4c = 0;
      uStack_54 = 0;
      iStack_40 = (*piVar4 - param_2[3] >> 4) + param_2[7] * 0x20 + -0x20;
      uStack_50 = 0;
      uStack_44 = 1;
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
      uStack_58 = param_3;
      piStack_48 = param_2;
      (**(int (***)())(*piVar2 + 0x28))
                (piVar2,&ppuStack_60,*(unsigned int *)(*(int *)(param_1 + 4) + 0x20),0);
      fn_826828D8(&ppuStack_60);
      fn_82683270(piVar4,1);
      if (4 < abStack_70[0]) {
        fn_826959C8(abStack_70);
      }
    }
  }
  return;
}

