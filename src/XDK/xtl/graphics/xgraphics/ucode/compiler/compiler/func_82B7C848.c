extern unsigned int *auStack_c0;
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int uStack_40;


void fn_82B7C848(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned char auStack_c0 [128];
  unsigned char uStack_40;
  
  iVar1 = *(int *)(param_1 + 0x5dc);
  lVar3 = 0;
  if (0 < iVar1) {
    uVar2 = *(unsigned int *)(param_1 + 0x5d8);
    do {
      fn_82F68CC0(auStack_c0,(unsigned __int64)uVar2 + lVar3,0x80);
      uStack_40 = 0;
      fn_82BA02A8(param_1,0xffffffff821c4da8,auStack_c0);
      lVar3 = lVar3 + 0x80;
    } while ((int)lVar3 < iVar1);
  }
  fn_82BA02A8(param_1,0xffffffff821cc86c);
  *(unsigned int *)(param_1 + 0x5dc) = 0;
  *(unsigned int *)(param_1 + 0x5e0) = 0;
  return;
}

