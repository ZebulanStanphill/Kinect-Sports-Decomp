extern int fn_8257E190();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824647D0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  double dVar4;
  
  if (param_2 == 8) {
    if (*(int *)(param_1 + 0x10) != 0) {
      *(unsigned char *)(*(int *)(param_1 + 0x10) + 100) = 1;
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x18);
    uVar2 = fn_8265C9E0(0x80);
    dVar4 = (double)lbl_821CA460;
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8257E190((double)*(float *)(param_1 + 0x18),uVar2,
                                *(unsigned int *)(param_1 + 8),param_3,param_4,1);
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(unsigned char *)(iVar3 + 0x67) = 1;
    uVar1 = ltcg_pool_0_0f;
    iVar3 = *(int *)(param_1 + 0x10);
    *(float *)(iVar3 + 0x5c) = (float)dVar4;
    *(unsigned int *)(iVar3 + 0x50) = uVar1;
    *(unsigned char *)(iVar3 + 0x66) = 1;
    *(unsigned int *)(iVar3 + 0x60) = uVar1;
    goto LAB_82464940;
  }
  if (param_2 != 10) {
    if (param_2 == 0xb) {
      if (*(int *)(param_1 + 0x10) != 0) {
        *(unsigned char *)(*(int *)(param_1 + 0x10) + 100) = 1;
        *(unsigned int *)(param_1 + 0x10) = 0;
      }
      *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_8265C9E0(0x80);
      dVar4 = (double)lbl_821CA460;
      if ((uVar2 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_8257E190((double)*(float *)(param_1 + 0x18),uVar2,
                                  *(unsigned int *)(param_1 + 8),param_3,param_4,1);
      }
      *(int *)(param_1 + 0x10) = iVar3;
      *(unsigned char *)(iVar3 + 0x67) = 1;
      iVar3 = *(int *)(param_1 + 0x10);
      *(float *)(iVar3 + 0x5c) = (float)dVar4;
      uVar1 = ltcg_pool_0_0f;
      *(unsigned char *)(iVar3 + 0x66) = 1;
      *(unsigned int *)(iVar3 + 0x50) = uVar1;
      *(unsigned int *)(iVar3 + 0x60) = uVar1;
      goto LAB_82464940;
    }
    if (param_2 != 0xc) goto LAB_82464940;
  }
  uVar2 = fn_8265C9E0(0x80);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_8257E190((double)*(float *)(param_1 + 0x18),(double)lbl_821CA460,uVar2,
                              *(unsigned int *)(param_1 + 8),param_3,param_4,0);
  }
  *(unsigned char *)(iVar3 + 0x67) = 1;
LAB_82464940:
  *(int *)(param_1 + 4) = param_2;
  return;
}

