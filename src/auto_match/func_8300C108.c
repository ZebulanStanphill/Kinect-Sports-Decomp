extern int fn_82FA5060();
extern unsigned int lbl_8217C070;


unsigned __int64 fn_8300C108(int param_1)
{
  unsigned *p;
  unsigned q;
  if (*(unsigned int *)(param_1 + 8) != 0) {
    return 1;
  }
  if ((*(unsigned int *)(param_1 + 0x14) < *(unsigned int *)(param_1 + 0x10)) &&
     ((p = (unsigned *)fn_82FA5060(*(unsigned int *)(param_1 + 0x1c),0x18)) != 0)) {
    q = (unsigned)p + 4;
    if (q != 0) {
      *(void **)(q + 4) = &lbl_8217C070;
    }
    *p = *(unsigned int *)(param_1 + 8);
    *(unsigned **)(param_1 + 8) = p;
    return 1;
  }
  return 0;
}
