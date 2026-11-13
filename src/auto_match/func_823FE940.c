extern unsigned int *auStack_90;
extern int fn_82F68CC0();
extern unsigned int stack0x00000070;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack00000068;
extern unsigned int uStack_69;


void fn_823FE940(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9)

{
  unsigned __int64 uStack00000050;
  unsigned __int64 uStack00000058;
  unsigned __int64 uStack00000060;
  unsigned __int64 uStack00000068;
  unsigned char in_stack_00000097;
  unsigned char auStack_90 [39];
  unsigned char uStack_69;
  
  uStack_69 = in_stack_00000097;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  uStack00000068 = param_9;
  fn_82F68CC0(auStack_90,&stack0x00000070,0x20);
  (**(int (***)())(param_2 + 4))
            (param_1,*(unsigned int *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  return;
}

