#define CARRY8(a,b) ((((unsigned __int64)(a)) + ((unsigned __int64)(b))) < ((unsigned __int64)(a)))


unsigned char * fn_82D40698(unsigned char *param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char bVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  else {
    bVar3 = 1;
    if (*(int *)(iVar1 + 0xc) == 9) {
      uVar2 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 4))(iVar1 + 0x10);
      bVar3 = -!CARRY8(100 - uVar2,uVar2 ^ 0x80000000) & 1;
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0xc) == 0x18) {
      uVar2 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 4))(iVar1 + 0x10);
      bVar3 = -!CARRY8(100 - uVar2,uVar2 ^ 0x80000000) & bVar3;
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0xc) == 7) {
      uVar2 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 4))(iVar1 + 0x10);
      bVar3 = -!CARRY8(100 - uVar2,uVar2 ^ 0x80000000) & bVar3;
    }
    *param_1 = -(*(int *)(*param_2 + 0xc) != 0xf) & bVar3;
  }
  return param_1;
}

