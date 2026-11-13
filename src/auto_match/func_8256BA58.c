extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82569B10();
extern int fn_8256A9F8();
extern int fn_8256B310();
extern int fn_8256B850();
extern int fn_8256BD38();
extern int fn_8256BDE0();
extern int fn_8265CA20();
extern int fn_82837D98();


void fn_8256BA58(int param_1)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  int iVar5;
  int * apiStack_30;
  
  iVar3 = fn_82569B10();
  *(unsigned char *)(iVar3 + 0x40) = 0;
  fn_8256B850(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_8256B310(param_1);
    fn_8256A9F8(param_1);
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82522ED8();
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_82837D98(*(unsigned int *)(*(int *)(param_1 + 8) + 0x14),0,&apiStack_30);
    fn_8251FA58(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x20)) {
    iVar3 = fn_82569B10();
    iVar3 = *(int *)(iVar3 + 0x48);
    iVar5 = *(int *)(param_1 + 0x20);
    iVar4 = fn_82569B10();
    *(unsigned int *)(iVar5 * 4 + *(int *)(iVar4 + 0x44)) = *(unsigned int *)(iVar3 + -4);
    iVar3 = fn_82569B10();
    *(unsigned int *)(*(int *)(*(int *)(iVar3 + 0x48) + -4) + 0x20) = *(unsigned int *)(param_1 + 0x20);
    iVar3 = fn_82569B10();
    if (*(int *)(iVar3 + 0x44) != *(int *)(iVar3 + 0x48)) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + -4;
    }
  }
  lVar2 = fn_82569B10();
  fn_8256BD38(&apiStack_30,lVar2 + 0x10,param_1);
  iVar3 = fn_82569B10();
  iVar5 = fn_8256BDE0(iVar3 + 0x10,apiStack_30 + 2);
  piVar1 = (int *)(iVar5 * 8 + *(int *)(iVar3 + 0x20));
  if ((int *)piVar1[1] == apiStack_30) {
    if ((int *)*piVar1 == apiStack_30) {
      *piVar1 = *(int *)(iVar3 + 0x14);
      *(unsigned int *)(iVar5 * 8 + *(int *)(iVar3 + 0x20) + 4) = *(unsigned int *)(iVar3 + 0x14);
    }
    else {
      piVar1[1] = apiStack_30[1];
    }
  }
  else if ((int *)*piVar1 == apiStack_30) {
    *piVar1 = *apiStack_30;
  }
  if (apiStack_30 != *(int **)(iVar3 + 0x14)) {
    *(int *)apiStack_30[1] = *apiStack_30;
    *(int *)(*apiStack_30 + 4) = apiStack_30[1];
    fn_8265CA20(apiStack_30);
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + -1;
  }
  if ((*(unsigned char *)(param_1 + 0x28) & 0x20) == 0) {
    iVar3 = fn_82569B10();
    iVar3 = *(int *)(iVar3 + 100);
    *(int *)(*(int *)(iVar3 + 0xc) * 4 + *(int *)(iVar3 + 0x10)) = param_1;
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  return;
}

