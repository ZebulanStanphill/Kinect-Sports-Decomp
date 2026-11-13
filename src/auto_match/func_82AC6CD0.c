extern int fn_82B841E8();


unsigned int fn_82AC6CD0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  uVar2 = *(unsigned int *)(param_2 + 0x1c);
  puVar3 = (unsigned int *)(param_2 + 0x1c);
  if ((((uVar2 & 1) != 0) || (uVar2 == 0)) || ((*(unsigned int *)(uVar2 + 8) & 0x3f80) != 0x3f00)) {
    uVar2 = fn_82B841E8(param_1,param_2,0,0x7e,0,0);
    uVar1 = uVar2 & 0xfffffffe;
    *(unsigned int *)(uVar1 + 0x28) = *puVar3;
    *(unsigned int *)((*puVar3 & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(unsigned int *)(uVar1 + 0x24) = (unsigned int)puVar3 | 1;
    *puVar3 = uVar1;
  }
  *(unsigned int *)(uVar2 + 0x14) = *(unsigned int *)(uVar2 + 0x14) | 0x10000;
  return uVar2;
}

