typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82322440();
extern int fn_82322518();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern unsigned int iStack_90;
extern unsigned int iStack_ac;
extern unsigned int lbl_82002B04;
extern unsigned int uStack_98;
extern unsigned int uStack_a4;
extern V16 loadVectorLeftIndexed128();


void fn_82321E18(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  int iVar3;
  int iVar4;
  char cVar5;
  unsigned __int64 uVar6;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  float in_register_00010030;
  float in_register_00010034;
  float in_register_00010038;
  float in_vr3;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  unsigned int *puStack_b0;
  int iStack_ac;
  unsigned char **ppuStack_a8;
  unsigned int uStack_a4;
  unsigned char auStack_a0 [8];
  unsigned int uStack_98;
  unsigned int *puStack_94;
  int iStack_90;
  
  iVar3 = fn_82F6DA24();
  *(unsigned int *)(iVar3 + 8) = 0;
  iVar4 = fn_8265C9E0(0x1c);
  if (iVar4 != 0) {
    *(int *)(iVar3 + 4) = iVar4;
    *(int *)iVar4 = iVar4;
    *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
    *(int *)(*(int *)(iVar3 + 4) + 8) = *(int *)(iVar3 + 4);
    *(unsigned char *)(*(int *)(iVar3 + 4) + 0x18) = 1;
    uVar6 = param_2 + 0xc4;
    *(unsigned char *)(*(int *)(iVar3 + 4) + 0x19) = 1;
    puVar1 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    *(unsigned short *)(iVar3 + 0x12) = 4;
    *(unsigned short *)(iVar3 + 0x10) = 1;
    loadVectorLeftIndexed128(in_r0,0xffffffff8218e8e8);
    pfVar2 = (float *)(iVar3 + 0x30U & 0xfffffff0);
    *pfVar2 = in_register_00010010 * in_register_00010000;
    pfVar2[1] = in_register_00010014 * in_ACC;
    pfVar2[2] = in_register_00010018 * in_register_00010008;
    pfVar2[3] = in_vr1 * in_vr0;
    *(unsigned short *)(iVar3 + 0x40) = 1;
    *(unsigned short *)(iVar3 + 0x42) = 1;
    puVar1 = (unsigned int *)(iVar3 + 0x50U & 0xfffffff0);
    *puVar1 = in_register_00010040;
    puVar1[1] = in_register_00010044;
    puVar1[2] = in_register_00010048;
    puVar1[3] = in_vr4;
    pfVar2 = (float *)(iVar3 + 0x60U & 0xfffffff0);
    *pfVar2 = in_register_00010030 * in_register_00010000;
    pfVar2[1] = in_register_00010034 * in_ACC;
    pfVar2[2] = in_register_00010038 * in_register_00010008;
    pfVar2[3] = in_vr3 * in_vr0;
    fn_82F68CC0(iVar3 + 0x70,uVar6,0xe8,0xffffffff8218e8e8);
    fn_82F68CC0(iVar3 + 0x158,param_2 + 0x1ac,0xe8);
    for (; (param_2 & 0xffffffff) != (uVar6 & 0xffffffff); param_2 = param_2 + 0x1c) {
      fn_82322440(&puStack_b0,param_2);
      iVar4 = iStack_ac;
      puVar1 = puStack_b0;
      puStack_94 = (unsigned int *)0x0;
      iStack_90 = 0;
      uStack_98 = *puStack_b0;
      if (iStack_ac != 0) {
        cVar5 = fn_8223AAC0(iStack_ac);
        if (cVar5 != '\0') {
          iStack_90 = iVar4;
          puStack_94 = puVar1;
        }
      }
      fn_82322518(auStack_a0,iVar3,&uStack_98);
      if (iStack_90 != 0) {
        fn_822315A0();
      }
      if (iVar4 != 0) {
        fn_822315A0(iVar4);
      }
    }
    fn_82F6DCBC(iVar3);
    return;
  }
  uStack_a4 = 0;
  ppuStack_a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_a8);
}

