extern int fn_82B83528();
extern unsigned int uStack_20;


void fn_82B836A8(void)

{
  int in_r7;
  unsigned char uStack_20;
  
  fn_82B83528();
  if (((*(unsigned int *)(in_r7 + 4) & 0x1f) == 10) && (uStack_20 == '\0')) {
    *(unsigned int *)(in_r7 + 4) = *(unsigned int *)(in_r7 + 4) & 0xffff3fff | 0x4000;
  }
  return;
}

