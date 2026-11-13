extern int fn_8302EB70();
extern int fn_83032D88();
extern int fn_83033AB8();


unsigned __int64 fn_83033B60(unsigned __int64 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  iVar4 = fn_8302EB70((unsigned __int64)*(unsigned int *)(param_2 + 0x10) + 4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    *(unsigned int *)(param_2 + 0x10) = 0;
    if (iVar4 != 0) {
      fn_83032D88();
    }
    uVar3 = 0x34;
  }
  else {
    iVar1 = *param_4;
    *(int *)(iVar4 + 0xc) = (int)param_1;
    *(int *)(iVar4 + 0x10) = iVar1;
    iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x78) + 0x10) + 4);
    *(unsigned short *)(iVar4 + 8) = *(unsigned short *)(iVar2 + 8);
    *(unsigned short *)(iVar4 + 10) = *(unsigned short *)(iVar2 + 10);
    if (iVar1 != 0) {
      fn_83033AB8(param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

