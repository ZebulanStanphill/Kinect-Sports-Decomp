extern int fn_8288CCB8();
extern int fn_828A12E8();


unsigned int fn_8288F1E8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  int aiStack_20 [2];
  
  iVar1 = fn_828A12E8();
  fn_8288CCB8(aiStack_20,iVar1 + 4,param_2);
  uVar2 = 0;
  if (aiStack_20[0] != *(unsigned int *)(iVar1 + 8)) {
    uVar2 = *(unsigned int *)(aiStack_20[0] + 0x14);
  }
  return uVar2;
}

