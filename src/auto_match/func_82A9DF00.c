#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_38 ((*(unsigned __int64*)&uStack_38))
extern unsigned int *auStack_40;
extern int fn_82A9CAB8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82A9DF00(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5,
                  int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int in_stack_00000054;
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    *(unsigned int *)(**(int **)(param_1 + 0x48) + param_2 * 0x10) =
         *(unsigned int *)(**(int **)(param_1 + 0x48) + param_2 * 0x10) | 0x80000000;
    _uStack_38 = CONCAT44(param_5,((((param_7 & 1) << 1 | param_8 & 1) << 0xd |
                                   in_stack_00000054 & 0x1fff) << 7 | param_4 & 0x7f) << 9 |
                                  param_6 << 0x1f);
    fn_82A9CAB8(*(unsigned int *)(param_1 + 0x44),auStack_40,param_1 + 0x90);
  }
  return;
}

