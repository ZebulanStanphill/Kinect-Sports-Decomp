extern unsigned int *auStack_1b30;
extern unsigned int *auStack_1b50;
extern unsigned int *auStack_1b60;
extern int fn_82A86BE8();
extern int fn_82A8F440();
extern int fn_82F68CC0();


void fn_82A906B8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_000103d0;
  unsigned int in_register_000103d4;
  unsigned int in_register_000103d8;
  unsigned int in_vr61;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_1b60 [16];
  unsigned char auStack_1b50 [32];
  unsigned char auStack_1b30 [6936];
  
  lVar2 = fn_82A8F440();
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x5988) < (lVar2 + 0x40U & 0xffffffff)) {
    fn_82A86BE8(auStack_1b30);
    altv207_13(in_vs40,in_vs42);
    puVar1 = (unsigned int *)((unsigned int)(auStack_1b50 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    altv207_13(in_vs32,in_vs38);
    altv207_13(in_vs32,in_vs40);
    puVar1 = (unsigned int *)((unsigned int)(auStack_1b60 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs32,in_vs39);
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs32,in_vs41);
    puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
    puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    puVar1 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
  }
  else {
    fn_82F68CC0(param_2,(unsigned __int64)*(unsigned int *)(param_1 + 0x598c) + lVar2,0x40);
  }
  return;
}

