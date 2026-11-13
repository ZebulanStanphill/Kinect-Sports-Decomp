typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_80;
extern int fn_82CEC688();
extern V16 vectorAddFloatingPoint();


void fn_830B5018(__int64 param_1,__int64 param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned char auStack_80 [128];
  
  param_1 = param_1 + 0x20;
  lVar2 = 2;
  do {
    lVar3 = 2;
    lVar4 = param_3;
    do {
      fn_82CEC688(auStack_80,param_2,lVar4);
      fn_82CEC688(param_1 + -0x20,param_2 + 0x30,lVar4 + 0x60);
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x30;
      vectorAddFloatingPoint(in_vs32,in_vs45);
      puVar1 = (unsigned int *)((int)in_r0 + (int)(param_1 + -0x20) & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      vectorAddFloatingPoint(in_vs41,in_vs43);
      puVar1 = (unsigned int *)((int)param_1 - 0x10U & 0xfffffff0);
      *puVar1 = in_register_00010080;
      puVar1[1] = in_register_00010084;
      puVar1[2] = in_register_00010088;
      puVar1[3] = in_vr8;
      vectorAddFloatingPoint(in_vs39,in_vs42);
      puVar1 = (unsigned int *)((int)in_r0 + (int)param_1 & 0xfffffff0);
      *puVar1 = in_register_00010060;
      puVar1[1] = in_register_00010064;
      puVar1[2] = in_register_00010068;
      puVar1[3] = in_vr6;
      param_1 = param_1 + 0x30;
    } while (lVar3 != 0);
    lVar2 = lVar2 + -1;
    param_2 = param_2 + 0x60;
  } while (lVar2 != 0);
  return;
}

