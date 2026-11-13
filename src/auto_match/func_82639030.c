void fn_82639030(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x2978) = *(unsigned int *)(param_1 + 0x2978) & 0xfffffffc | param_2 & 3;
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x2000000000000;
  return;
}

