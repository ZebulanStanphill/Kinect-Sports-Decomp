extern int fn_82AA66A8();
extern int fn_82B50AA8();


unsigned int fn_82B50B00(unsigned int *param_1)

{
  unsigned char cVar1;
  
  *(unsigned char *)(param_1 + 8) = 0;
  if ((param_1[1] == 0) && (cVar1 = fn_82B50AA8(), cVar1 == '\0')) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
  }
  param_1[1] = param_1[1] + -1;
  return *(unsigned int *)(*param_1 + 0x14);
}

