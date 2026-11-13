extern int fn_82240070();
extern int fn_822EF4E0();
extern int fn_822EF538();
extern int fn_822EF668();


unsigned __int64 fn_822ECAF8(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int *apiStack_30 [12];
  
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_822EF4E0(apiStack_30);
  cVar2 = fn_822EF668(apiStack_30[0],1);
  if (cVar2 == '\0') {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    if (*(int *)piVar1[8] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)piVar1[0xc];
    }
    if (iVar3 < 1) {
      uVar4 = (**(int (***)())(*piVar1 + 0x18))();
    }
    else {
      uVar4 = (unsigned __int64)**(unsigned char **)piVar1[8];
    }
    if ((int)uVar4 == -1) {
      uVar5 = 3;
    }
    else {
      fn_822EF538(*(unsigned int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
      *(__int64 *)(param_1 + 2) = *(__int64 *)(param_1 + 2) + 1;
    }
  }
  iVar3 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar5 != 0) {
    uVar5 = *(unsigned int *)(iVar3 + 0xc) | uVar5;
    if (*(int *)(iVar3 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    fn_82240070(iVar3,uVar5,0);
  }
  piVar1 = *(int **)((int)apiStack_30[0] + *(int *)(*apiStack_30[0] + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))();
  }
  return uVar4;
}

