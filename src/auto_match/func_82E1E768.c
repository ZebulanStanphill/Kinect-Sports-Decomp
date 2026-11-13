extern int fn_8265C9E0();
extern int fn_82A1E7D8();
extern int fn_82E21B08();


void fn_82E1E768(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  fn_82A1E7D8(*(unsigned int *)(param_1 + 0x3c));
  uVar1 = fn_8265C9E0(0xc);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82E21B08(uVar1,param_2,param_3);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    *(unsigned int *)(param_1 + 0x18) = uVar2;
  }
  else {
    *(unsigned char *)(param_1 + 0x14) = 1;
    do {
      puVar3 = (unsigned int *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 8);
    } while (iVar4 != 0);
    *puVar3 = uVar2;
    *(unsigned char *)(param_1 + 0x14) = 0;
  }
  return;
}

