extern int fn_8252AF80();
extern unsigned int lbl_82191100;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82195708;
extern unsigned int lbl_831D17A0;
extern unsigned int lbl_831D9FE4;


void fn_824107D0(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(**(int **)(param_1 + 0x24) + 0xcb8) != 0) {
    puVar1 = &lbl_82191100;
    dVar3 = (double)*(float *)(*(int *)(param_1 + 0x28) + 0x1fc);
    dVar4 = (double)lbl_82191FC8;
    if (dVar3 != dVar4) {
      dVar3 = (double)(float)((double)(float)(dVar4 - dVar3) * (double)lbl_831D17A0 + dVar3);
      if (((double)lbl_82195708 <= dVar3) && (dVar3 <= (double)lbl_831D9FE4)) {
        dVar3 = dVar4;
      }
      dVar3 = (double)fn_8252AF80(dVar3,*(int *)(param_1 + 0x28),0);
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x1e0);
      if ((double)*(float *)(puVar1 + 0x18) <= dVar3) {
        uVar2 = uVar2 & 0xffffffdf;
      }
      else {
        uVar2 = uVar2 | 0x20;
      }
      *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x1e0) = uVar2;
    }
  }
  return;
}

