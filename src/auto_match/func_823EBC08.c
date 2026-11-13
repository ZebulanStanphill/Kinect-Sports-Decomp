extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_90;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CFCE8();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int memcpy();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78C4;
extern unsigned int stack0x00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack00000068;
extern unsigned int uStack_40;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;


void fn_823EBC08(double param_1,int param_2,int (**param_3)(),unsigned int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9)

{
  int in_r0;
  unsigned int *puVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  __int64 lVar4;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned __int64 uStack00000050;
  unsigned __int64 uStack00000058;
  unsigned __int64 uStack00000060;
  unsigned __int64 uStack00000068;
  unsigned char in_stack_00000097;
  int (**pcStack_f0)();
  unsigned int uStack_ec;
  unsigned char **ppuStack_e8;
  unsigned int uStack_e4;
  unsigned char auStack_e0 [16];
  unsigned int *puStack_d0;
  unsigned __int64 uStack_c0;
  unsigned int uStack_b8;
  int (**pcStack_b0)();
  unsigned int uStack_a8;
  unsigned char auStack_a0 [16];
  float fStack_90;
  unsigned __int64 auStack_88 [9];
  unsigned char uStack_40;
  
  uStack_b8 = *(unsigned int *)(param_2 + 4);
  puVar3 = (unsigned __int64 *)&stack0x00000048;
  pcStack_f0 = fn_823CFCE8;
  uStack_ec = 0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_c0 = 0x823cfce800000000;
  puVar2 = auStack_88;
  fStack_90 = (float)param_1;
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_40 = in_stack_00000097;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  uStack00000068 = param_9;
  pcStack_b0 = param_3;
  uStack_a8 = param_4;
  puVar1 = (unsigned int *)fn_8265C9E0(0xa0);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_821B78C4;
    memcpy(puVar1 + 4,&uStack_c0,0x90);
    pcStack_f0 = param_3;
    uStack_ec = param_4;
    puStack_d0 = puVar1;
    lVar4 = fn_823F05B8((unsigned __int64)*(unsigned int *)(param_2 + 4) + 0xa38,&pcStack_f0);
    fn_8227CB30(lVar4 + 0x18,auStack_e0);
    fn_82359C18(auStack_e0);
    return;
  }
  uStack_e4 = 0;
  ppuStack_e8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_e8);
}

