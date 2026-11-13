extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201F5AC;
extern unsigned int uStack_9;


void fn_828510B8(double param_1,int param_2,int param_3,int param_4,int param_5,unsigned __int64 param_6
                  ,int param_7)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  double dVar6;
  unsigned char uStack_9;
  
  puVar4 = (unsigned int *)(*(int *)(param_2 + 0x17c) + param_4 * 0x14);
  uVar3 = puVar4[1];
  iVar2 = param_5 * 0x10 + uVar3;
  if (*(unsigned int *)(iVar2 + 4) == 0) {
    return;
  }
  dVar6 = (double)*(unsigned int *)(iVar2 + 4);
  if ((param_5 + 1U < *puVar4) && (uVar3 = *(unsigned int *)((param_5 + 1U) * 0x10 + uVar3 + 4), uVar3 != 0)
     ) {
    dVar6 = (double)(float)((double)(float)((double)uVar3 - dVar6) * param_1 + dVar6);
  }
  uVar3 = 0;
  if (*(int *)(iVar2 + 8) == 0) {
    return;
  }
  iVar5 = 0;
  uStack_9 = (unsigned char)
             (__int64)
             ((double)(float)(dVar6 - (double)lbl_82002AE0) * (double)lbl_8201F5AC +
             (double)lbl_82002AE0);
  do {
    uVar3 = uVar3 + 1;
    piVar1 = (int *)(*(int *)(iVar2 + 0xc) + iVar5);
    iVar5 = iVar5 + 4;
    *(unsigned char *)(*(int *)(*piVar1 + 8) + *(int *)((param_7 + 4) * 4 + param_3)) = uStack_9;
  } while (uVar3 < *(unsigned int *)(iVar2 + 8));
  return;
}

