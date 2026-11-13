extern unsigned int lbl_8324E3B0;


void fn_82F00638(int param_1,int param_2,int param_3,int param_4,__int64 param_5,__int64 param_6
                  )

{
  short sVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  
  iVar3 = *(int *)(param_1 + 0x7820);
  if (iVar3 != 0) {
    iVar2 = 0;
    if (0 < (int)param_5) {
      do {
        *(unsigned char *)(iVar2 + param_2) =
             *(unsigned char *)
              ((short)((short)((int)((*(unsigned char *)(iVar2 + param_2) - 0x80) *
                                     (int)(short)((short)iVar3 + 8) + 4) >> 3) + 0x80) +
              lbl_8324E3B0);
        iVar2 = iVar2 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  if (*(int *)(param_1 + 0x7804) != 0) {
    iVar3 = 0;
    sVar1 = (short)*(unsigned int *)(param_1 + 0x7824) + 8;
    lVar4 = param_6;
    if (0 < (int)param_6) {
      do {
        *(unsigned char *)(iVar3 + param_3) =
             *(unsigned char *)
              ((short)((short)((int)((*(unsigned char *)(iVar3 + param_3) - 0x80) * (int)sVar1 + 4) >> 3) +
                      0x80) + lbl_8324E3B0);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar3 = 0;
    if (0 < (int)param_6) {
      do {
        *(unsigned char *)(iVar3 + param_4) =
             *(unsigned char *)
              ((short)((short)((int)((*(unsigned char *)(iVar3 + param_4) - 0x80) * (int)sVar1 + 4) >> 3) +
                      0x80) + lbl_8324E3B0);
        iVar3 = iVar3 + 1;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
  }
  return;
}

