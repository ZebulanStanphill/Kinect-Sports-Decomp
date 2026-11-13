extern unsigned int *auStack_110;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CF430();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78AC;
extern unsigned int stack0x00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack_114;
extern unsigned int uStack_11c;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


void fn_823EBB00(int param_1,int (**param_2)(),unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

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
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned __int64 uStack00000058;
  unsigned __int64 uStack00000060;
  unsigned int in_stack_00000084;
  int (**pcStack_120)();
  unsigned int uStack_11c;
  unsigned char **ppuStack_118;
  unsigned int uStack_114;
  unsigned char auStack_110 [16];
  unsigned int *puStack_100;
  unsigned __int64 uStack_f0;
  unsigned int uStack_e8;
  int (**pcStack_e0)();
  unsigned int uStack_d8;
  unsigned char auStack_d0 [8];
  unsigned __int64 auStack_c8 [9];
  unsigned char auStack_80 [128];
  
  uStack_e8 = *(unsigned int *)(param_1 + 4);
  puVar3 = (unsigned __int64 *)&stack0x00000038;
  uStack_11c = 0;
  pcStack_120 = fn_823CF430;
  puVar1 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_f0 = 0x823cf43000000000;
  puVar2 = auStack_c8;
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack00000040 = param_4;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  pcStack_e0 = param_2;
  uStack_d8 = param_3;
  fn_82F68CC0(auStack_80,in_stack_00000084,0x48);
  puVar1 = (unsigned int *)fn_8265C9E0(0xd0);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_821B78AC;
    fn_82F68CC0(puVar1 + 4,&uStack_f0,0xc0);
    pcStack_120 = param_2;
    uStack_11c = param_3;
    puStack_100 = puVar1;
    lVar4 = fn_823F05B8((unsigned __int64)*(unsigned int *)(param_1 + 4) + 0xa28,&pcStack_120);
    fn_8227CB30(lVar4 + 0x18,auStack_110);
    fn_82359C18(auStack_110);
    return;
  }
  uStack_114 = 0;
  ppuStack_118 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_118);
}

