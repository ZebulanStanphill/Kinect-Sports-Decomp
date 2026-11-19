extern int fn_82631578();
extern int fn_82631920();
extern int fn_82638300();
extern int fn_826383A0();
extern int fn_826384A0();
extern int fn_826384C0();
extern int fn_82638790();


void fn_82678E58(int self)

{
  if ((*(char *)(self + 0x10) != '\0') && (*(char *)(self + 0xdd) != '\0')) {
    *(unsigned int *)(self + 8) = 0;
    if (*(int *)(self + 0xc) != 0) {
      fn_82631920(*(unsigned int *)(self + 0xd8),
                        *(unsigned int *)((*(int *)(self + 0xc) + 0x1d) * 4 + self));
                    /* WARNING: Subroutine does not return */
      fn_82631578(*(unsigned int *)(self + 0xd8),
                        *(unsigned int *)((*(int *)(self + 0xc) + 10) * 4 + self));
    }
    fn_82638790(*(unsigned int *)(self + 0xd8),0xf);
    fn_826384A0(*(unsigned int *)(self + 0xd8),*(unsigned int *)(self + 0xe0));
    fn_826384C0(*(unsigned int *)(self + 0xd8),0xff);
    fn_82638300(*(unsigned int *)(self + 0xd8),2);
    fn_826383A0(*(unsigned int *)(self + 0xd8),0);
  }
  return;
}

