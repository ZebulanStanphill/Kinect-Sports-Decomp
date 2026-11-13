extern unsigned int *auStack_140;
extern int fn_828358A8();
extern int fn_82836098();
extern int fn_82F64020();
extern int fn_82F68CC0();
extern int fn_82F69A80();


void fn_82836840(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned char auStack_140 [320];
  
  uVar1 = fn_828358A8(*(unsigned int *)(param_1 + 8));
  lVar2 = fn_82F64020(param_3,0x100,0xffffffff8201f434,uVar1,
                            *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x10));
  uVar4 = 0;
  uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x10);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) != 0) {
    lVar2 = lVar2 + param_3;
    do {
      fn_82836098(*(unsigned int *)(param_1 + 8),param_2,auStack_140);
      fn_82F68CC0(lVar2,auStack_140,uVar3);
      uVar4 = uVar4 + 1;
      param_2 = param_2 + uVar3;
      lVar2 = lVar2 + uVar3;
    } while (uVar4 < *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x10));
  }
  fn_82F69A80(param_3,0x100,0xffffffff8201f440);
  return;
}

