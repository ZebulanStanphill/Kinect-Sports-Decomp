extern int fn_82AC6560();
extern int fn_82B47068();


unsigned int fn_82B478C8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  uVar2 = fn_82AC6560(param_1,0x7c,5);
  *(unsigned int *)(uVar2 + 0x14) = uVar2 - 0x14 | 1;
  *(unsigned int *)(uVar2 + 0x10) = uVar2 + 0x14 | 1;
  *(unsigned int *)(uVar2 + 0x18) = uVar2 + 0x1c | 1;
  *(unsigned int *)(uVar2 + 0x1c) = uVar2 - 0xc | 1;
  *(unsigned int *)(uVar2 + 0x20) = uVar2 + 0x24 | 1;
  *(unsigned int *)(uVar2 + 0x24) = uVar2 - 4 | 1;
  puVar1 = (unsigned int *)(uVar2 & 0xfffffffe);
  *(unsigned int *)(uVar2 + 0x30) = *(unsigned int *)(uVar2 + 0x30) | 0x80000;
  *(unsigned int *)(uVar2 + 0x44) = *(unsigned int *)(uVar2 + 0x44) & 0xf0000000 | 1;
  *(int *)(uVar2 + 0x74) = (int)param_2;
  *puVar1 = *param_1;
  *(unsigned int **)(*param_1 & 0xfffffffe) = puVar1;
  puVar1[1] = (unsigned int)param_1 | 1;
  *param_1 = (unsigned int)(puVar1 + 1);
  if (param_1[0xba] != 0) {
    fn_82B47068(param_1,uVar2,param_2);
  }
  return uVar2;
}

