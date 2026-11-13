extern int fn_8232BDB0();
extern int fn_8232C528();
extern int fn_8232CFA0();
extern int fn_8232D150();
extern int fn_82520780();


void fn_8232CDB8(int param_1)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar2;
  unsigned int uVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x27c);
  iVar3 = fn_8232CFA0(param_1,iVar4);
  piVar1 = *(int **)(param_1 + 0xc);
  if (iVar3 == 0) {
    if (((piVar1[3] == 5) || (*(int *)(iVar4 + 0x7ac) != 0)) || (*(int *)(iVar4 + 0x7a0) != 0)) {
      fn_8232C528(piVar1,2);
    }
  }
  else {
    iVar4 = (**(int (***)())(*piVar1 + 0x18))();
    if ((iVar4 == 5) && (*(int *)(param_1 + 0x38) == 0)) {
      fn_8232C528(*(unsigned int *)(param_1 + 0xc),2);
    }
    if ((*(int *)(param_1 + 0x38) != 0) &&
       (iVar4 = (**(int (***)())(**(int **)(param_1 + 0xc) + 0x18))(), iVar4 == 5)) {
      iVar4 = *(int *)(param_1 + 0xc);
      uVar5 = fn_8232D150(param_1,*(int *)(param_1 + 0x38) == 1);
      lVar2 = fn_82520780((double)*(float *)(iVar4 + 0x80),0xffffffff83265a28);
      uVar6 = fn_8232BDB0(iVar4 + 0x6c);
      *(unsigned int *)(iVar4 + 0xc) = uVar6;
      *(unsigned int *)(iVar4 + 0x10) = (unsigned int)(lVar2 != 0);
      *(unsigned int *)(iVar4 + 0x14) = uVar5;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
  }
  return;
}

