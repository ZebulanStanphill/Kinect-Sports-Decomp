extern unsigned int *auStack_100;
extern unsigned int *auStack_140;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CDEB0();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B7894;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack_108;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_144;
extern unsigned int uStack_14c;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;


void fn_823EB9E0(int param_1,int (**param_2)(),unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned short param_8)

{
  int in_r0;
  unsigned int *puVar2;
  __int64 lVar1;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned __int64 uStack00000058;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000074;
  int (**pcStack_150)();
  unsigned int uStack_14c;
  unsigned char **ppuStack_148;
  unsigned int uStack_144;
  unsigned char auStack_140 [16];
  unsigned int *puStack_130;
  unsigned __int64 uStack_120;
  unsigned int uStack_118;
  int (**pcStack_110)();
  unsigned int uStack_108;
  unsigned char auStack_100 [24];
  unsigned __int64 uStack_e8;
  unsigned __int64 uStack_e0;
  unsigned __int64 uStack_d8;
  unsigned short uStack_d0;
  unsigned int uStack_c0;
  unsigned char auStack_b0 [176];
  
  uStack_118 = *(unsigned int *)(param_1 + 4);
  puVar2 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  pcStack_150 = fn_823CDEB0;
  uStack_14c = 0;
  uStack_120 = 0x823cdeb000000000;
  uStack_c0 = in_stack_0000006c;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  pcStack_110 = param_2;
  uStack_108 = param_3;
  uStack_e8 = param_5;
  uStack_e0 = param_6;
  uStack_d8 = param_7;
  uStack_d0 = param_8;
  fn_82F68CC0(auStack_b0,in_stack_00000074,0x60);
  puVar2 = (unsigned int *)fn_8265C9E0(0xe0);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = &lbl_821B7894;
    fn_82F68CC0(puVar2 + 4,&uStack_120,0xd0);
    pcStack_150 = param_2;
    uStack_14c = param_3;
    puStack_130 = puVar2;
    lVar1 = fn_823F05B8((unsigned __int64)*(unsigned int *)(param_1 + 4) + 0xa18,&pcStack_150);
    fn_8227CB30(lVar1 + 0x18,auStack_140);
    fn_82359C18(auStack_140);
    return;
  }
  uStack_144 = 0;
  ppuStack_148 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_148);
}

