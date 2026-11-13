extern int fn_828EB518();
extern int fn_82A1E860();
extern unsigned int lbl_8218EFD4;
extern unsigned int lbl_82195654;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265988;
extern unsigned int lbl_8326B4BC;
extern unsigned int lbl_8326C390;
extern unsigned int uRam8326c394;
extern unsigned int uStack_3a;


void fn_82594108(int param_1)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  int iVar5;
  unsigned short *puVar6;
  int iVar7;
  unsigned short uStack_3a;
  
  uVar3 = ltcg_pool_0_0f;
  if ((*(unsigned int *)(&lbl_8218EFD4 + param_1 * 4) & lbl_8326B4BC) != 0) {
    iVar7 = param_1 * 0x30;
    if (*(int *)(iVar7 + -0x7cd93d20) != 0) {
      if (lbl_8326C390 == 0) {
        *(unsigned int *)(iVar7 + -0x7cd93d10) = *(unsigned int *)(iVar7 + -0x7cd93d18);
        *(unsigned int *)(iVar7 + -0x7cd93d0c) = *(unsigned int *)(iVar7 + -0x7cd93d14);
      }
      else {
        *(unsigned int *)(iVar7 + -0x7cd93d10) = ltcg_pool_0_0f;
        *(unsigned int *)(iVar7 + -0x7cd93d0c) = uVar3;
      }
    }
    fVar2 = lbl_82195654;
    puVar6 = (unsigned short *)(iVar7 + -0x7cd93d08);
    fVar1 = *(float *)(iVar7 + -0x7cd93d0c) * lbl_82195654;
    *(unsigned int *)(iVar7 + -0x7cd93d14) = uVar3;
    *(unsigned int *)(iVar7 + -0x7cd93d18) = uVar3;
    *(unsigned int *)(iVar7 + -0x7cd93d20) = 1;
    uStack_3a = (unsigned short)(__int64)fVar1;
    uVar4 = uStack_3a;
    uStack_3a = (unsigned short)(__int64)(*(float *)(iVar7 + -0x7cd93d10) * fVar2);
    *puVar6 = uStack_3a;
    *(unsigned short *)(iVar7 + -0x7cd93d06) = uVar4;
    if (uRam8326c394 != 0) {
      iVar5 = lbl_83265988;
      if (param_1 != 0xff) {
        iVar5 = fn_828EB518(param_1);
      }
      if ((iVar5 != 0) &&
         (((unsigned int)*(unsigned char *)((uRam8326c394 >> 3) + *(int *)(*(int *)(iVar5 + 0xf4) + 8)) &
          1 << (uRam8326c394 & 7)) != 0)) {
        *puVar6 = 0;
        *(unsigned short *)(iVar7 + -0x7cd93d06) = 0;
      }
    }
    fn_82A1E860(param_1,puVar6);
  }
  return;
}

