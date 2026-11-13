extern int fn_82A1E968();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8326459C;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


unsigned __int64 fn_83013F90(int param_1,int param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  __int64 lStack_40;
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  
  iVar3 = param_1 + 0x10;
  RtlEnterCriticalSection(iVar3);
  for (piVar2 = *(int **)(param_1 + 4); (piVar2 != *(int **)(param_1 + 8) && (*piVar2 != param_2));
      piVar2 = piVar2 + 10) {
  }
  puVar4 = (unsigned int *)(-(unsigned int)(*(int **)(param_1 + 8) != piVar2) & (unsigned int)(piVar2 + 2));
  if (puVar4 == (unsigned int *)0x0) {
    *param_3 = 0;
    RtlLeaveCriticalSection(iVar3);
    uVar1 = 2;
  }
  else {
    fn_82A1E968(&lStack_40);
    lVar5 = (__int64)
            (((float)(lStack_40 - *(__int64 *)(puVar4 + 4)) / lbl_8326459C) * (float)puVar4[1] +
            ((float)*puVar4 * lbl_8200DFF4) / (float)puVar4[3]);
    uStack_30 = (__int64)(((float)puVar4[2] * lbl_8200DFF4) / (float)puVar4[3]);
    uStack_38 = ((((unsigned __int64)(uStack_38)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    if ((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) <= (((unsigned __int64)(uStack_38) >> 32) & 0xFFFFFFFF)) {
      uStack_38 = ((((unsigned __int64)(uStack_38)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    }
    *param_3 = (((unsigned __int64)(uStack_38) >> 32) & 0xFFFFFFFF);
    uStack_38 = lVar5;
    RtlLeaveCriticalSection(iVar3);
    uVar1 = 1;
  }
  return uVar1;
}

