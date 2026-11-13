unsigned __int64 fn_82ADD590(int param_1,unsigned int param_2)

{
  return *(unsigned __int64 *)((param_2 >> 2 & 0x1ffffff8) + *(int *)(param_1 + 0x2b4)) >>
         (((unsigned __int64)param_2 & 0x7fffffff) * 2 + ((unsigned __int64)param_2 & 0x7fffffe0) * -2 & 0x7f) & 3
  ;
}

