unsigned int fn_827DA588(int param_1,unsigned int param_2)

{
  if ((param_2 != 0xffffffff) && (param_2 < 0x40)) {
    return *(unsigned int *)((param_2 + 0x295) * 4 + param_1);
  }
  return 0;
}

