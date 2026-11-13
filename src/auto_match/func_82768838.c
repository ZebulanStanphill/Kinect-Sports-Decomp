#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64 fn_82768838(int param_1,unsigned int param_2)

{
  unsigned char *puVar1;
  
  if (param_2 < *(unsigned int *)(param_1 + 0x34)) {
    puVar1 = (unsigned char *)(**(int **)(param_1 + 0x30) + *(int *)(param_1 + 0x38) + param_2 * 8);
    return (unsigned __int64)CONCAT11(puVar1[1],*puVar1);
  }
  return 0xffffffffffffffff;
}

