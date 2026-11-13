extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D7C120();
extern int fn_82DB05D8();


void fn_82DA8590(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (int)*(char *)(*param_2 + 5) + *param_2;
  iVar3 = (int)*(char *)(param_2[1] + 5) + param_2[1];
  iVar1 = *(char *)(iVar1 + 0x10) + iVar1;
  iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  if ((((*(char *)(iVar2 + 0x68) != '\0') && (*(char *)(iVar1 + 0xe8) != '\x05')) &&
      (*(char *)(iVar3 + 0xe8) != '\x05')) && (*(int *)(iVar1 + 0xcc) != *(int *)(iVar3 + 0xcc))) {
    iVar1 = fn_82CE5410();
    if (*(unsigned int *)(iVar2 + 0x98) != (*(unsigned int *)(iVar2 + 0x9c) & 0x3fffffff)) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x98) * 8 + *(int *)(iVar2 + 0x94));
      if (piVar4 != (int *)0x0) {
        *piVar4 = *param_2;
        piVar4[1] = param_2[1];
      }
      *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(iVar2 + 0x94),8);
  }
  iVar2 = fn_82D7C120();
  if (iVar2 != 0) {
    fn_82DB05D8();
  }
  return;
}

