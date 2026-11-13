extern unsigned int *auStack_40;
extern unsigned int *auStack_78;
extern unsigned int *auStack_98;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_8223C610();
extern int fn_82429898();
extern int fn_82429BA8();
extern int fn_828ABBC0();
extern int fn_828ABF58();
extern int fn_828E5538();
extern int fn_82A1EFC0();
extern int fn_82F68CC0();
extern unsigned int lbl_821B8BAC;
extern unsigned int lbl_821B8BC4;
extern unsigned int lbl_821B8BDC;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_9c;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_824294B8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char **ppuVar3;
  int in_r0;
  __int64 lVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char **ppuStack_100;
  float fStack_fc;
  float fStack_f8;
  unsigned int auStack_f0 [4];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [16];
  unsigned char **ppuStack_a0;
  unsigned int uStack_9c;
  unsigned char auStack_98 [24];
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_78 [24];
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned char auStack_40 [64];
  
  uStack_9c = 0;
  ppuStack_a0 = &lbl_821B8BAC;
  fn_828ABF58(auStack_98,0,0,3);
  fn_82429898(&ppuStack_a0,param_2,&ppuStack_100);
  fn_828ABF58(auStack_40,0,0xe,0x18);
  fn_828ABBC0(auStack_40,param_2,auStack_f0);
  ppuVar3 = ppuStack_100;
  if (ppuStack_100 == (unsigned char **)0x1) {
    fn_82A1EFC0(auStack_e0,0,0x40);
    puVar1 = (unsigned int *)((int)&ppuStack_100 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    dVar5 = (double)fn_828E5538(param_2,3,8);
    ppuStack_100 = (unsigned char **)(unsigned int)(float)dVar5;
    dVar5 = (double)fn_828E5538(param_2,3,8);
    fStack_fc = (float)dVar5;
    dVar5 = (double)fn_828E5538(param_2,3,8);
    fStack_f8 = (float)dVar5;
    puVar1 = (unsigned int *)((int)&ppuStack_100 + in_r0 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)((int)&ppuStack_100 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    dVar5 = (double)fn_828E5538(param_2,10,3);
    ppuStack_100 = (unsigned char **)(unsigned int)(float)dVar5;
    dVar5 = (double)fn_828E5538(param_2,10,3);
    fStack_fc = (float)dVar5;
    dVar5 = (double)fn_828E5538(param_2,10,3);
    fStack_f8 = (float)dVar5;
    uStack_7c = 0;
    puVar1 = (unsigned int *)((int)&ppuStack_100 + in_r0 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    ppuStack_80 = &lbl_821B8BC4;
    puVar2 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    fn_828ABF58(auStack_78,0,0,2);
    fn_82429898(&ppuStack_80,param_2,auStack_b0);
    lVar4 = fn_8223C610(param_2,1,0,0);
    uStack_b8 = (unsigned int)(lVar4 != 0);
    lVar4 = fn_8223C610(param_2,1,0,0);
    uStack_c0 = 0;
    uStack_bc = (unsigned int)(lVar4 != 0);
    uStack_b4 = 0;
    if (param_3 == 0) {
      return;
    }
    fn_82F68CC0(param_3 + 0x10,auStack_e0,0x40);
  }
  else if (ppuStack_100 == (unsigned char **)0x2) {
    fn_82A1EFC0(&uStack_60,0,0x20);
    fStack_fc = 0.0;
    ppuStack_100 = &lbl_821B8BDC;
    fn_82429BA8(&ppuStack_100,param_2,&uStack_48);
    if (param_3 == 0) {
      return;
    }
    *(unsigned __int64 *)(param_3 + 0x50) = uStack_60;
    *(unsigned __int64 *)(param_3 + 0x58) = uStack_58;
    *(unsigned __int64 *)(param_3 + 0x60) = uStack_50;
    *(unsigned __int64 *)(param_3 + 0x68) = uStack_48;
  }
  if (param_3 != 0) {
    *(unsigned char ***)(param_3 + 8) = ppuVar3;
    *(unsigned int *)(param_3 + 0xc) = auStack_f0[0];
  }
  return;
}

