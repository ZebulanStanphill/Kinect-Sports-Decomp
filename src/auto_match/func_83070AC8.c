extern int fn_830708B8();


unsigned __int64 fn_83070AC8(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 0xd24) == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (int)param_3;
    if ((iVar1 == 2) || (uVar4 = 0, iVar1 != 4)) {
      uVar4 = 1;
    }
    uVar2 = fn_830708B8((double)*(float *)(param_1 + 0xd20),(param_3 + 2U & 0xfffffff) << 4,
                              uVar4);
    if ((iVar1 == 2) || (uVar4 = 0, iVar1 == 4)) {
      uVar4 = 1;
    }
    cVar3 = fn_830708B8((double)*(float *)(param_1 + 0xd20),uVar2,uVar4);
    if (((uVar2 & 0xff) != 0) || (uVar4 = 0, cVar3 != '\0')) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

