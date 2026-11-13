extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_825493C8();
extern int fn_82F68CC0();
extern unsigned int stack0x00000060;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;


void fn_82548BE8(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  double dVar2;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned __int64 in_stack_00000058;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [76];
  unsigned int uStack_64;
  unsigned int uStack_5c;
  
  if (0 < (int)param_2) {
    puVar1 = (unsigned int *)(param_1 + 0x4c);
    uStack00000030 = param_4;
    uStack00000038 = param_5;
    uStack00000040 = param_6;
    uStack00000048 = param_7;
    uStack00000050 = param_8;
    do {
      uStack_5c = puVar1[1];
      uStack_64 = *puVar1;
      dVar2 = (double)(float)puVar1[-1];
      fn_82F68CC0(auStack_b0,puVar1 + -0x13,0x40);
      fn_82F68CC0(auStack_c0,&stack0x00000060,0x10);
      fn_825493C8(dVar2,puVar1[-3],param_3,param_4,param_5,param_6,param_7,param_8,
                        in_stack_00000058);
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_2 != 0);
  }
  return;
}

