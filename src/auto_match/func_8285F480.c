extern float fRam832115dc;
extern float fRam832115f0;
extern int fn_828102A8();
extern int fn_828105C8();
extern int fn_82F68B7C();
extern int iRam832115e0;
extern unsigned int uRam832115d8;
extern unsigned int uRam832115e4;
extern unsigned int uRam832115e8;
extern unsigned int uRam832115ec;


void fn_8285F480(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  unsigned __int64 extraout_f1;
  double dVar5;
  unsigned __int64 uVar6;
  
  if (iRam832115e0 == 0) {
    dVar5 = (double)fRam832115dc;
    if (uRam832115d8 == 0) {
      fn_828105C8((double)(__int64)*(short *)(param_1 + 4),
                   (double)(__int64)*(short *)(param_1 + 6),
                   (double)(__int64)*(short *)(param_1 + 8),0xffffffff832115e4);
      fn_828102A8(dVar5,0xffffffff832115e4,0xffffffff832115e4);
      fRam832115f0 = (float)((double)*(unsigned short *)(param_1 + 10) * dVar5);
    }
    else if (uRam832115d8 == 1) {
      uRam832115e4 = *(unsigned int *)(param_1 + 4);
      uRam832115e8 = *(unsigned int *)(param_1 + 8);
      uRam832115ec = *(unsigned int *)(param_1 + 0xc);
      fRam832115f0 = *(float *)(param_1 + 0x10);
    }
    return;
  }
  if (iRam832115e0 == 1) {
    uVar2 = (unsigned __int64)uRam832115d8;
    lVar3 = -0x7cdeea0c;
    iVar1 = fn_82F68B7C((double)fRam832115dc);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar6 = extraout_f1;
      fn_828105C8((double)(__int64)*(short *)(iVar1 + 4),(double)(__int64)*(short *)(iVar1 + 6),
                   (double)(__int64)*(short *)(iVar1 + 8),lVar3);
      fn_828102A8(uVar6,lVar3,lVar3);
      lVar3 = lVar3 + 0xc;
      fn_828105C8((double)(__int64)*(short *)(iVar1 + 10),
                   (double)(__int64)*(short *)(iVar1 + 0xc),
                   (double)(__int64)*(short *)(iVar1 + 0xe),lVar3);
      fn_828102A8(uVar6,lVar3,lVar3);
    }
    else if ((uVar2 & 0xffffffff) == 1) {
      puVar4 = (unsigned int *)lVar3;
      *puVar4 = *(unsigned int *)(iVar1 + 4);
      puVar4[1] = *(unsigned int *)(iVar1 + 8);
      puVar4[2] = *(unsigned int *)(iVar1 + 0xc);
      puVar4[3] = *(unsigned int *)(iVar1 + 0x10);
      puVar4[4] = *(unsigned int *)(iVar1 + 0x14);
      puVar4[5] = *(unsigned int *)(iVar1 + 0x18);
    }
    return;
  }
  return;
}

