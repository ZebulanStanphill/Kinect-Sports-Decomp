extern int fn_82631578();
extern int fn_82631920();
extern int fn_82638300();
extern int fn_826383A0();
extern int fn_826384A0();
extern int fn_826384C0();
extern int fn_82638790();


void fn_82678E58(int param_1)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0xdd) != '\0')) {
    *(unsigned int *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82631920(*(unsigned int *)(param_1 + 0xd8),
                        *(unsigned int *)((*(int *)(param_1 + 0xc) + 0x1d) * 4 + param_1));
                    /* WARNING: Subroutine does not return */
      fn_82631578(*(unsigned int *)(param_1 + 0xd8),
                        *(unsigned int *)((*(int *)(param_1 + 0xc) + 10) * 4 + param_1));
    }
    fn_82638790(*(unsigned int *)(param_1 + 0xd8),0xf);
    fn_826384A0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(param_1 + 0xe0));
    fn_826384C0(*(unsigned int *)(param_1 + 0xd8),0xff);
    fn_82638300(*(unsigned int *)(param_1 + 0xd8),2);
    fn_826383A0(*(unsigned int *)(param_1 + 0xd8),0);
  }
  return;
}

