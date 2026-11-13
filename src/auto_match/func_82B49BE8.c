extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B841E8();


unsigned int fn_82B49BE8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  
  uVar4 = fn_82B841E8(param_1,*(unsigned int *)(param_1 + 0x234),0,0x11,2,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    param_2 = fn_82ACA920(param_1,param_2,*(unsigned int *)(param_2 + 0xc));
  }
  uVar5 = fn_82AD1978(uVar4,param_2);
  *(unsigned int *)(uVar4 + 0x2c) = uVar5;
  uVar3 = fn_82AD17B0(param_1,param_3);
  uVar5 = fn_82AD1978(uVar4,uVar3);
  *(unsigned int *)(uVar4 + 0x30) = uVar5;
  uVar2 = uVar4 & 0xfffffffe;
  *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(uVar4 + 8) & 0xfffe3fff | 0x4000;
  iVar1 = *(int *)(param_1 + 0x234);
  puVar6 = (unsigned int *)(iVar1 + 0x18);
  *(unsigned int *)(uVar2 + 0x24) = *puVar6;
  *(unsigned int *)(*puVar6 & 0xfffffffe) = uVar2;
  *(unsigned int *)(uVar2 + 0x28) = iVar1 - 0xcU | 1;
  *puVar6 = uVar2 + 0x28;
  return uVar4;
}

