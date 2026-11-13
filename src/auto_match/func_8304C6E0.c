extern int fn_82FEC7F0();
extern int fn_83037510();
extern unsigned int lbl_82002AE0;


void fn_8304C6E0(int param_1,int *param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  __int64 lVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    *(unsigned short *)((int)param_2 + 0xe) = 0;
    param_2[7] = lbl_82002AE0;
    *(unsigned short *)(param_2 + 3) = 0;
    param_2[2] = 0x2b;
    *(unsigned short *)(param_2 + 4) = 0;
    param_2[5] = 0;
    param_2[6] = -1;
    param_2[8] = -1;
    param_2[9] = 1;
    param_2[0xd0] = 2;
    return;
  }
  uVar1 = *(unsigned short *)(param_2 + 3);
  if (uVar1 == 0) {
    param_2[0xd0] = 0x11;
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x14) == 0) {
    if ((uVar2 & 1) == 1) {
      iVar3 = fn_83037510(param_2,uVar1,uVar2 >> 0xe);
      if (iVar3 == 1) goto LAB_8304c78c;
    }
    else {
      iVar3 = fn_82FEC7F0((__int64)(int)(unsigned int)uVar1 * (__int64)(int)(uVar2 >> 3 & 0x1f));
      if (iVar3 != 0) {
        *param_2 = iVar3;
        goto LAB_8304c784;
      }
    }
    param_2[0xd0] = 2;
  }
  else {
    *param_2 = *(int *)(param_1 + 0x14);
LAB_8304c784:
    param_2[1] = uVar2 >> 0xe;
    *(unsigned short *)((int)param_2 + 0xe) = 0;
LAB_8304c78c:
    param_2[2] = 0x2b;
    (**(int (***)())(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),param_2);
    param_2[0xd0] = param_2[2];
    param_2 = param_2 + -1;
    piVar4 = (int *)(param_1 + 0x10);
    lVar5 = 10;
    do {
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = *param_2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

