extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82696958();
extern int fn_8269A190();
extern int fn_8269A678();
extern int fn_826F6FA8();
extern int fn_82703770();
extern int fn_8271BF18();
extern int fn_8271CE40();
extern unsigned int lbl_82005710;


void fn_82704528(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar1;
  __int64 lVar5;
  int aiStack_50 [2];
  __int64 lStack_48;
  
  iVar2 = fn_82696958(param_2 + 0x30,0);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 0x10) == -1) {
      piVar4 = (int *)fn_8269A678(*(unsigned int *)(param_2 + 0x14),param_1);
      if (piVar4 != (int *)0x0) {
        piVar4[1] = piVar4[1] + 1;
      }
    }
    else {
      piVar4 = (int *)fn_826F6FA8(param_1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)fn_82703770(param_1,param_3,*(unsigned int *)(param_2 + 0x10));
        if (piVar4 == (int *)0x0) {
          return;
        }
      }
      else {
        piVar4[1] = piVar4[1] + 1;
      }
    }
    iVar2 = (**(int (***)())(*piVar4 + 0x9c))(piVar4);
    if (iVar2 == 0x1b) {
      lStack_48 = (__int64)param_5;
      if (*(double *)(piVar4 + 0xe) < lbl_82005710) {
        *(double *)(piVar4 + 0xe) = lbl_82005710;
      }
      *(double *)(piVar4 + 0xc) = (double)lStack_48;
      *(double *)(piVar4 + 0xe) = *(double *)(piVar4 + 0xe) + (double)lStack_48;
    }
    uVar1 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
    fn_8271BF18(uVar1,piVar4 + 0x1a,param_4);
    fn_8267C498(piVar4);
  }
  else {
    iVar2 = fn_82696958(param_2 + 0x30,0);
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))(*(int **)(param_1 + 0x68));
    fn_8269A190(aiStack_50,(unsigned __int64)*(unsigned int *)(iVar3 + 0x78) + 0x254,param_4);
    lStack_48 = (__int64)param_5;
    if (*(double *)(iVar2 + 0x38) < lbl_82005710) {
      *(double *)(iVar2 + 0x38) = lbl_82005710;
    }
    *(double *)(iVar2 + 0x30) = (double)lStack_48;
    *(double *)(iVar2 + 0x38) = *(double *)(iVar2 + 0x38) + (double)lStack_48;
    fn_8271CE40(iVar2,iVar3,aiStack_50);
    lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
  }
  return;
}

