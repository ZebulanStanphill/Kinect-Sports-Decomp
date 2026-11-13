extern unsigned int *auStack_88;
extern int fn_82F68CC0();
extern unsigned int stack0x00000068;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack_6c;


void fn_823FE7F8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned __int64 uStack00000058;
  unsigned __int64 uStack00000060;
  unsigned int in_stack_00000084;
  unsigned char auStack_88 [28];
  unsigned int uStack_6c;
  
  uStack_6c = in_stack_00000084;
  uStack00000040 = param_4;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  fn_82F68CC0(auStack_88,&stack0x00000068,0x18);
  (**(int (***)())(param_1 + 4))
            (*(unsigned int *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

