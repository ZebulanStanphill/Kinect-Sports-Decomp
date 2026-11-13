typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822ABA88();
extern int fn_822ABBF0();
extern int fn_822AF138();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821B65FC;


void fn_823E5F38(int param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned char **ppuStack_70;
  int iStack_6c;
  unsigned char **ppuStack_68;
  int iStack_64;
  
  iVar2 = *(int *)(*(int *)(param_2[4] * 4 + *param_2) + 0x10);
  ppuStack_70 = &lbl_821B65FC;
  iStack_6c = -1;
  fn_822ABBF0(*(unsigned int *)(param_2[4] * 4 + *param_2),&ppuStack_70);
  if (*(int *)(*(int *)(param_2[4] * 4 + *param_2) + 8) == 0) {
    ppuStack_70 = &lbl_821AC4A4;
    iVar2 = *(int *)(*(int *)(param_3[4] * 4 + *param_3) + 0x10);
    ppuStack_68 = &lbl_821B65FC;
    iStack_64 = -1;
    fn_822ABBF0(*(unsigned int *)(param_2[4] * 4 + *param_2),&ppuStack_68);
    if (*(int *)(*(int *)(param_3[4] * 4 + *param_3) + 8) != 0) {
      param_1 = iVar2 * 0x150 + param_1;
      uVar3 = 8;
      *(unsigned int *)(param_1 + 0x10b0) = 0;
      *(unsigned char *)(param_1 + 0x10b4) = 0;
      *(unsigned char *)(param_1 + 0x10b5) = 0;
      if (iStack_64 != 0) {
        uVar3 = 10;
      }
      iVar2 = fn_822ABA88(*(unsigned int *)(param_3[4] * 4 + *param_3),0);
                    /* WARNING: Subroutine does not return */
      fn_822AF138(*(unsigned int *)(iVar2 + 0x110),uVar3);
    }
    return;
  }
  param_1 = iVar2 * 0x150 + param_1;
  *(unsigned int *)(param_1 + 0x10b0) = 0;
  *(unsigned char *)(param_1 + 0x10b4) = 0;
  *(unsigned char *)(param_1 + 0x10b5) = 0;
  if (iStack_6c == 0) {
    uVar3 = 0x12;
  }
  else {
    uVar4 = 0;
    do {
      if (*param_4 == 0) {
        bVar1 = true;
        goto LAB_823e6000;
      }
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 1;
    } while (uVar4 < 3);
    bVar1 = false;
LAB_823e6000:
    uVar3 = 2;
    if (!bVar1) {
      uVar3 = 0x16;
    }
  }
  iVar2 = fn_822ABA88(*(unsigned int *)(param_2[4] * 4 + *param_2),0);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(iVar2 + 0x110),uVar3);
}

