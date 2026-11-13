extern unsigned int *auStack_30;
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826A2E40();
extern int fn_826B32D0();


void fn_826A3298(int param_1)

{
  int iVar1;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar5;
  unsigned char auStack_30 [16];
  
  cVar4 = fn_82695468(param_1,7);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      lVar5 = 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
    uVar2 = fn_826B32D0(*(int *)(param_1 + 0x18),*(unsigned int *)(iVar1 + 0x2a0),iVar1 + 0x10,0
                              ,0xffffffffffffffff);
    if (uVar2 != 0) {
      fn_826961B0(auStack_30,lVar5);
      fn_826A2E40(uVar2,*(unsigned int *)(param_1 + 0x18),auStack_30);
      fn_82696330(auStack_30);
      lVar5 = 0;
      if (0 < *(int *)(param_1 + 0x1c)) {
        do {
          uVar3 = fn_826957D0(param_1,lVar5);
          fn_826A2E40(uVar2,*(unsigned int *)(param_1 + 0x18),uVar3);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(param_1 + 0x1c));
      }
    }
    fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar2);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_826824B0(uVar2);
    }
  }
  return;
}

