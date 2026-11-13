extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack0000001c;
extern int memcpy();
extern int fn_8300F160();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE8F28(double param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned short uVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  float fStack0000001c;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  unsigned char auStack_38 [8];
  
  fStack0000001c = (float)param_1;
  altv300_21(in_vs32,in_vs43);
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  uStack_3e = 0xf;
  uStack_3c = param_2;
  memcpy(auStack_38,auStack_60,0x18);
  uVar2 = fn_8300F160();
  fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return;
}

