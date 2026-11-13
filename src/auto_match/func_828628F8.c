extern int fn_828627E0();
extern int fn_82862868();


void fn_828628F8(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (unsigned int *)(*(int *)(param_2 + 8) + *(int *)(param_1 + 0x54));
  puVar1 = (unsigned int *)(*(int *)(param_3 + 8) + *(int *)(param_1 + 0x54));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = puVar2[3];
  puVar1[4] = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[6] = puVar2[6];
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar3 = 0;
    do {
      fn_828627E0(lVar3 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34));
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x2c;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x38));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar3 = 0;
    do {
      fn_82862868(lVar3 + (unsigned __int64)*(unsigned int *)(param_1 + 0x3c));
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x14;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x40));
  }
  return;
}

