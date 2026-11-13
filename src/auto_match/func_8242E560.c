extern int fn_8242E3E0();
extern int fn_8242E460();


int fn_8242E560(int param_1)

{
  int iVar2;
  int uVar1;
  
  iVar2 = fn_8242E3E0();
  if (((iVar2 != 0) || (uVar1 = fn_8242E460(param_1), (int)uVar1 != 0)) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x18) + 0xc) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

