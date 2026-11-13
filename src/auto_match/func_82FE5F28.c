extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82FE5F28(int param_1,unsigned int param_2,unsigned int param_3)

{
  if ((param_2 != 0) && (param_3 == 0xc)) {
    memcpy((char *)param_1 + 4, (void *)param_2, param_3);
    return 1;
  }
  return 0x1f;
}

