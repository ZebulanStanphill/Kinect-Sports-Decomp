extern int fn_82D7D078();
extern int fn_82DB0258();


void fn_82DB05D8(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)*(char *)(*(int *)(param_1 + 0x14) + 0x10) + *(int *)(param_1 + 0x14);
  iVar5 = (int)*(char *)(*(int *)(param_1 + 0x10) + 0x10) + *(int *)(param_1 + 0x10);
  uVar4 = (unsigned __int64)*(unsigned int *)(iVar6 + 0xcc);
  uVar1 = *(unsigned int *)(iVar5 + 0xcc);
  uVar3 = (unsigned __int64)uVar1;
  if (uVar3 == uVar4) {
    *(unsigned char *)(uVar1 + 0x25) = *(unsigned char *)(uVar1 + 0x25) & 0x3f | 0x40;
    uVar4 = uVar3;
  }
  else if ((*(char *)(iVar5 + 0xe8) != '\x05') && (uVar4 = uVar3, *(char *)(iVar6 + 0xe8) != '\x05')
          ) {
    uVar4 = fn_82DB0258(param_1);
    *(unsigned char *)((int)uVar3 + 0x25) = *(unsigned char *)((int)uVar3 + 0x25) & 0x3f | 0x40;
    *(unsigned char *)(*(int *)(iVar6 + 0xcc) + 0x25) =
         *(unsigned char *)(*(int *)(iVar6 + 0xcc) + 0x25) & 0x3f | 0x40;
  }
  piVar2 = *(int **)(param_1 + 8);
  fn_82D7D078(uVar4 + 0x58,param_1,*(unsigned int *)(*(int *)((int)uVar4 + 0x18) + 0x80));
  (**(int (***)())(*piVar2 + 0x24))(piVar2);
  return;
}

