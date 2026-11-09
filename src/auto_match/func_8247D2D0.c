extern void *fn_822C5B18(void *, void *);
extern void fn_82359C18(void *);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int lbl_821BD574;

unsigned int *fn_8247D2D0(unsigned int *param_1, unsigned char *param_2, int param_3, int param_4,
                          void *param_5, int param_6)
{
  void *uVar2;
  unsigned char auStack_70[0x20];

  float fVar1;
  unsigned int *pBase;

  param_1[1] = 3;
  fVar1 = 0.0f;
  *param_1 = (unsigned int)&lbl_821BD574;
  *(float *)(param_1 + 3) = fVar1;
  param_1[2] = 0;
  uVar2 = fn_822C5B18(auStack_70, param_5);
  pBase = param_1 + 4;
  memcpy(pBase, param_2, 0x44);
  param_1[0x17] = param_3;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  fn_822C5B18(pBase + 0x14, uVar2);
  param_1[0x1e] = param_6;
  param_1[0x1f] = param_4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  fn_82359C18(uVar2);
  param_1[0x24] = param_3;
  fn_82359C18(param_5);
  return param_1;
}
