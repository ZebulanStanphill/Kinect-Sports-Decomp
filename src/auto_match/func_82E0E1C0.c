extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA280();


void fn_82E0E1C0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82CEA280(param_1 + 0x20,param_2,0xffffffffffffffff);
  if (param_3 != 0) {
    iVar2 = fn_82CE5410();
    fn_82CEA160(param_1 + 0x20,*(unsigned int *)(iVar2 + 0x10),param_3,iVar1);
  }
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x14);
    do {
      **(unsigned int **)(iVar1 * 8 + iVar2) = (int)param_3;
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(iVar1 * 8 + iVar2 + 4);
    } while (iVar1 != -1);
  }
  return;
}

