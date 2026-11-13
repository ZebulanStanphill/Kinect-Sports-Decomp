extern int fn_828647C0();


unsigned __int64 fn_82877780(int param_1,unsigned __int64 param_2,unsigned char param_3)

{
  int iVar1;
  unsigned char cVar3;
  unsigned __int64 uVar2;
  unsigned int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar4 = *(int *)(param_1 + 4); iVar4 != iVar1; iVar4 = iVar4 + 0x30) {
    cVar3 = fn_828647C0(iVar4 + 4,param_2);
    if (cVar3 != '\0') break;
  }
  if (iVar4 == *(int *)(param_1 + 8)) {
    uVar2 = 0xffffffffa0320000;
  }
  else {
    *(unsigned char *)(iVar4 + 0x28) = param_3;
    uVar2 = 0x20320000;
  }
  return uVar2;
}

