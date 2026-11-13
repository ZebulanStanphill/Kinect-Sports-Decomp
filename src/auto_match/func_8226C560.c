extern int fn_8280A580();
extern unsigned int lbl_82193E50;


void fn_8226C560(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar3 = 0;
    dVar5 = (double)lbl_82193E50;
    do {
      if ((*(unsigned int *)(*(int *)(param_1 + 0x40) + iVar3 + 0xe4) & param_2) != 0) {
        iVar1 = *(int *)(param_1 + 0x40) + iVar3;
        *(float *)(iVar1 + 0xc0) = (float)((double)*(float *)(iVar1 + 0xc0) + dVar5);
        dVar4 = (double)fn_8280A580((double)*(float *)(*(int *)(param_1 + 0x40) + iVar3 + 0xc0));
        *(float *)(*(int *)(param_1 + 0x40) + iVar3 + 0xc0) = (float)dVar4;
        iVar1 = *(int *)(param_1 + 0x40) + iVar3;
        *(unsigned int *)(iVar1 + 0xe8) = *(unsigned int *)(iVar1 + 0xc0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xf0;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

