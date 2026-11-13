extern int fn_82FA9DC8();
extern int fn_82FAE150();
extern int fn_82FAE168();


void fn_82FAA478(int param_1,char param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x60);
    if (param_2 == '\0') {
      iVar4 = fn_82FAE168(uVar1);
      iVar4 = iVar4 - *(int *)(param_1 + 0x44);
    }
    else {
      iVar3 = fn_82FAE150();
      iVar2 = *(int *)(param_1 + 0x44);
      iVar4 = fn_82FAE168(uVar1);
      iVar4 = iVar4 + (iVar3 - iVar2);
    }
    *(int *)(param_1 + 0x34) = iVar4;
    fn_82FA9DC8(param_1,*(unsigned int *)(param_1 + 8));
  }
  return;
}

