extern int memcpy();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C0;
extern unsigned int lbl_832967B8;


void fn_824E7360(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  if ((-1 < param_4) && (param_4 < 2)) {
    iVar3 = param_4 * 0x170 + param_2;
    *(unsigned int *)(iVar3 + 0x160) = 0;
    if (-2 < param_4) {
      if (param_4 == -1) {
        puVar2 = &lbl_832967B8;
      }
      else {
        puVar2 = &lbl_832967B8 + param_4 * 0x1a;
      }
      memcpy(iVar3 + 0x78,puVar2,0x68);
    }
    memcpy(iVar3 + 0xe0,iVar3 + 0x10,0x68);
    if ((float)(param_1 - (double)lbl_8218EC10) < 0.0) {
      param_1 = lbl_821955C0;
    }
    *(float *)(iVar3 + 0x14c) = (float)param_1;
    uVar1 = *(unsigned int *)(param_2 + 0x300);
    *(unsigned int *)(iVar3 + 0x148) = 1;
    *(unsigned int *)(iVar3 + 0x15c) = uVar1;
  }
  return;
}

