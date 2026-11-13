extern int fn_828B55B0();
extern int fn_828BDE70();
extern unsigned int lbl_82025768;
extern unsigned int lbl_82025770;


void fn_828DD740(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = &lbl_82025770;
  param_1[0x14] = &lbl_82025768;
  *(unsigned char *)(param_1[0x22] + 0x69) = 1;
  if (*(char *)(param_1 + 0x24) == '\0') {
    puVar1 = (unsigned int *)param_1[0x22];
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
  }
  fn_828B55B0(param_1 + 0x20);
  fn_828BDE70(param_1);
  return;
}

