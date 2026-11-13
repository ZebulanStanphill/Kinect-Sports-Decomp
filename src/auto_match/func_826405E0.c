extern unsigned int *auStack_4c;
extern int fn_826400A0();
extern int fn_82F68CC0();
extern unsigned int uStack_50;


void fn_826405E0(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,__int64 param_8)

{
  int iVar1;
  int in_stack_00000054;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  iVar1 = fn_826400A0(param_1,param_2,-param_3,param_4,param_5,param_7,in_stack_00000054,
                        auStack_4c);
  if (iVar1 == 0) {
    fn_82F68CC0(uStack_50,(__int64)(int)param_3 * (__int64)in_stack_00000054 + param_8,
                 (__int64)(int)param_4 * (__int64)in_stack_00000054);
    fn_82F68CC0(auStack_4c[0],param_6,
                 (__int64)(int)((-(unsigned int)((param_7 & 4) != 0) & 2) + 2) * (__int64)(int)param_5 +
                 3U & 0xfffffffc);
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x3554);
  }
  return;
}

