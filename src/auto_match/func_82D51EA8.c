void fn_82D51EA8(int param_1,unsigned __int64 param_2,unsigned short param_3)

{
  *(unsigned short *)
   ((int)((((__int64)(*(int *)(*(int *)(param_1 + 0x18) + 0x10) + -1) *
            (__int64)(int)(unsigned int)(unsigned short)(param_2 >> 0x10) + ((param_2 & 0xffffffff) >> 1 & 0x7fff)
           & 0x7fffffff) << 1 | param_2 & 1) << 1) + *(int *)(param_1 + 0x24)) = param_3;
  return;
}

