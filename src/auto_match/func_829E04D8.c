extern unsigned int *auStack_14f;
extern int fn_82F691F0();


unsigned __int64 fn_829E04D8(char *param_1)

{
  unsigned char auStack_14f [335];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*param_1 == '\0') {
      return 0xffffffff8000000a;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_14f,0,0x103);
    }
  }
  return 0xffffffff8007000e;
}

