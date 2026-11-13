extern int fn_8301E4B8();
extern int fn_830251B0();
extern int fn_830251D0();
extern int fn_83025270();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_83023DA8(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  char cVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x70) != 1) {
    cVar3 = fn_83025270(0xffffffff832645b0);
    uVar2 = lbl_821AAD20;
    fVar1 = lbl_82002AE0;
    if (cVar3 == '\0') {
      dVar4 = (double)lbl_82002AE0;
      *(float *)(param_1 + 8) = lbl_82002AE0;
      *(float *)(param_1 + 4) = fVar1;
      *(float *)(param_1 + 0x10) = fVar1;
      *(unsigned int *)(param_1 + 0x14) = uVar2;
      *(unsigned int *)(param_1 + 0x18) = uVar2;
    }
    else {
      dVar4 = (double)fn_830251B0(0xffffffff832645b0);
      *(float *)(param_1 + 0x14) = (float)dVar4;
      dVar4 = (double)fn_8301E4B8();
      *(float *)(param_1 + 4) = (float)dVar4;
      dVar4 = (double)fn_830251D0(0xffffffff832645b0);
      *(float *)(param_1 + 0x18) = (float)dVar4;
      dVar4 = (double)fn_8301E4B8();
      *(float *)(param_1 + 0x10) = (float)dVar4;
      *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 4);
    }
    *(float *)(param_1 + 0xc) = (float)dVar4;
  }
  return;
}

