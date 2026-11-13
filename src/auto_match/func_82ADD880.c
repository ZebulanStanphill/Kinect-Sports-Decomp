extern int fn_82AD1B28();
extern int fn_82B81338();
extern int fn_82B894C8();


unsigned int fn_82ADD880(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  puVar1 = *(unsigned int **)(param_2 + 0x2c);
  fn_82B894C8(param_1,*(unsigned int *)(param_2 + 0x1c),param_2 & 0xfffffffc,puVar1);
  uVar2 = puVar1[3];
  fn_82B81338(uVar2,*puVar1 >> 0x19 & 7,*puVar1 >> 5 & 0xff);
  *puVar1 = *puVar1 & 0xffffe01f | 0x1c80;
  *(unsigned int *)(uVar2 + 8) = *(unsigned int *)(uVar2 + 8) & 0xfffe3fe1 | 0x1001e;
  fn_82AD1B28(uVar2);
  return uVar2;
}

