extern int fn_8280CD18();


void fn_82855BE8(int param_1,__int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x6930);
  uVar2 = *(unsigned int *)(param_1 + 0x68);
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6934);
  if (0 < (int)param_2) {
    puVar3 = (unsigned short *)(param_3 + -8);
    do {
      puVar3 = puVar3 + 4;
      fn_8280CD18((unsigned __int64)*puVar3 * 0x40 + (unsigned __int64)uVar2,uVar4);
      param_2 = param_2 + -1;
      uVar4 = uVar4 + 0x40;
    } while (param_2 != 0);
  }
  *(unsigned int *)(iVar1 * 0xd0 + param_1 + 0x1f0) = *(unsigned int *)(param_1 + 0x6934);
  return;
}

