extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823D0140();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int memcpy();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78DC;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


void fn_823EBD08(unsigned int *param_1,int (**param_2)(),unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned __int64 param_6)

{
  int in_r0;
  unsigned int *puVar2;
  __int64 lVar1;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  int (**pcStack_100)();
  unsigned int uStack_fc;
  unsigned char **ppuStack_f8;
  unsigned int uStack_f4;
  unsigned char auStack_f0 [16];
  unsigned int *puStack_e0;
  unsigned __int64 uStack_d0;
  unsigned int uStack_c8;
  int (**pcStack_c0)();
  unsigned int uStack_b8;
  unsigned int uStack_b0;
  unsigned int uStack_a8;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];
  
  uStack_c8 = param_1[1];
  pcStack_100 = fn_823D0140;
  uStack_fc = 0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  uStack_d0 = 0x823d014000000000;
  pcStack_c0 = param_2;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  memcpy(auStack_80,param_6,0x4c);
  puVar2 = (unsigned int *)fn_8265C9E0(0xb0);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = &lbl_821B78DC;
    memcpy(puVar2 + 4,&uStack_d0,0xa0);
    pcStack_100 = param_2;
    uStack_fc = param_3;
    puStack_e0 = puVar2;
    lVar1 = fn_823F05B8((unsigned __int64)param_1[1] + 0xa08,&pcStack_100);
    fn_8227CB30(lVar1 + 0x18,auStack_f0);
    fn_82359C18(auStack_f0);
    fn_823831D8((unsigned __int64)*param_1 + 0x710);
    return;
  }
  uStack_f4 = 0;
  ppuStack_f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_f8);
}

