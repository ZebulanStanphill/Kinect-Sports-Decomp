extern int fn_8245C7B8(param_1);
extern int fn_8245C8D0();
extern int fn_82579EF0();
extern int fn_82579F78();


void fn_8245C700(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  fn_8245C7B8(param_1);
  iVar3 = param_1 + 0x6c8;
  iVar1 = fn_82579EF0(iVar3,"CompressionPartitionSizeInBytes",0x8000);
  if (iVar1 < 0x8000) {
    iVar1 = 0x8000;
  }
  else if (0x1000000 < iVar1) {
    iVar1 = 0x1000000;
  }
  *(int *)(param_1 + 0x668) = iVar1;
  iVar1 = fn_82579EF0(iVar3,"CompressionWindowSizeInBytes",0x8000);
  if (iVar1 < 0x8000) {
    iVar1 = 0x8000;
  }
  else if (0x200000 < iVar1) {
    iVar1 = 0x200000;
  }
  *(int *)(param_1 + 0x66c) = iVar1;
  uVar2 = fn_82579F78(iVar3,"ShouldCompressData");
  *(unsigned int *)(param_1 + 0x660) = uVar2 & 0xff;
  fn_8245C8D0(param_1);
  return;
}

