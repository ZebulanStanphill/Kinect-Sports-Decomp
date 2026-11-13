extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA130();


void fn_828ABAC8(int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar2;
  int iVar3;
  __int64 lVar1;
  int iVar4;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < iVar2) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_828E9FF8(param_2,iVar2);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(param_1 + 0xc) + iVar2;
    }
  }
  else {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 5) {
      lVar1 = 0;
    }
    else {
      lVar1 = fn_828E9FF8(param_2,5);
    }
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < (int)(lVar1 + 1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_828EA130(param_2,lVar1 + 1);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
  }
  return;
}

