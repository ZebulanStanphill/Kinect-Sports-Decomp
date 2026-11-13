extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82B83B68();


unsigned int fn_82B84290(int param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  
  lVar2 = fn_82ABDD90(param_1,0x70,0,1);
  iVar3 = fn_82AC6560(param_1,lVar2 + 4,0x23);
  uVar4 = iVar3 + 4;
  fn_82B83B68(uVar4,param_1,param_2,0x70,0,1);
  uVar1 = uVar4 & 0xfffffffe;
  *(unsigned int *)(uVar1 + 0x24) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(*(unsigned int *)(param_2 + 0x10) & 0xfffffffe) = uVar1;
  *(unsigned int *)(uVar1 + 0x28) = param_2 - 0x14U | 1;
  *(unsigned int *)(param_2 + 0x10) = uVar1 + 0x28;
  *(unsigned int *)(iVar3 + 0xc) = *(unsigned int *)(iVar3 + 0xc) | 0x800000;
  **(unsigned int **)(param_1 + 0x68) = uVar4;
  *(unsigned int *)(param_1 + 0x68) = (int)lVar2 + uVar4 + -4;
  return uVar4;
}

