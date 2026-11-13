extern int fn_826543B0();
extern int fn_82A1BB18();


unsigned __int64 fn_82646F48(int *param_1)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int in_r13;
  __int64 lVar5;
  
  iVar4 = *param_1;
  lVar5 = 4;
  do {
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((*(unsigned char *)(iVar4 + 0x2abd) & 2) == 0) {
    iVar1 = *(int *)(*(int *)(in_r13 + 0x100) + 0x58);
    if (param_1[2] != **(int **)(iVar4 + 0x2a90)) {
      iVar3 = **(int **)(iVar4 + 0x2a90);
      param_1[3] = iVar1;
      param_1[2] = iVar3;
    }
    iVar3 = fn_82A1BB18();
    if ((*(int *)(iVar4 + 0x2a88) == iVar3) && (*(int *)(iVar4 + 0x2b00) != 0)) {
      param_1[3] = iVar1;
    }
    if (4999 < (unsigned int)(iVar1 - param_1[3])) {
      iVar4 = fn_826543B0(iVar4);
      if (iVar4 != 0) goto LAB_82647014;
      param_1[3] = iVar1;
    }
    uVar2 = 1;
  }
  else {
LAB_82647014:
    uVar2 = 0;
  }
  return uVar2;
}

