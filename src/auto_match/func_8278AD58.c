extern int fn_826861D8();


unsigned __int64 fn_8278AD58(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar2 = *(unsigned int *)(param_2 + 0xc);
  uVar3 = *(unsigned int *)(param_2 + 0x10);
  uVar4 = fn_826861D8(*(unsigned int *)(param_2 + 0x14));
  return uVar4 ^ (uVar3 ^ uVar2 ^ uVar1) >> 7 ^ (unsigned __int64)uVar3 ^ (unsigned __int64)uVar2 ^
         (unsigned __int64)uVar1;
}

