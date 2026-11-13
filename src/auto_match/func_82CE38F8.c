unsigned __int64
fn_82CE38F8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int param_6,unsigned int param_7)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  
  if ((param_2 < 0x40) && ((param_3 & 0xffffffff) < 4)) {
    puVar2 = (unsigned int *)(param_2 * 0x10 + param_1);
    if ((*puVar2 & 0x40000000) != 0) {
      return 0xffffffff80004005;
    }
    if ((param_6 != 0) && ((*(unsigned char *)(param_6 + 1) & 1) != 0)) {
      uVar1 = 1L << (param_3 & 0x7f);
      param_4 = param_4 / uVar1;
      trapDoubleWordImmediate(6,uVar1,0);
    }
    puVar2[1] = param_7;
    *(unsigned __int64 *)(puVar2 + 2) = param_4;
    *puVar2 = (unsigned int)param_3 & 3 | 0x80000000;
    return 0;
  }
  return 0xffffffff80070057;
}

