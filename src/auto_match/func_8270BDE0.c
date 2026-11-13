unsigned __int64 fn_8270BDE0(int param_1,int param_2,unsigned int param_3)

{
  param_2 = param_2 + param_3;
  if (param_3 < 8) {
    return ((unsigned __int64)
            (*(unsigned int *)((param_2 - 1U >> 2 & 0x3ffffffc) + param_1) >> ((param_2 - 1U) * 2 & 0x1e)) &
           3) - 1;
  }
  return (((unsigned __int64)
           (*(unsigned int *)((param_2 - 3U >> 2 & 0x3ffffffc) + param_1) >> ((param_2 - 3U) * 2 & 0x1e)) &
          3) << 2 |
         (unsigned __int64)
         (*(unsigned int *)((param_2 - 2U >> 2 & 0x3ffffffc) + param_1) >> ((param_2 - 2U) * 2 & 0x1e)) & 3)
         << 1 | (unsigned __int64)
                ((*(unsigned int *)((param_2 - 1U >> 2 & 0x3ffffffc) + param_1) >>
                 ((param_2 - 1U) * 2 & 0x1e)) >> 1) & 1;
}

