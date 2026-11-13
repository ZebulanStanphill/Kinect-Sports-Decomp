extern int fn_825597C0();
extern int fn_8258C000();
extern int fn_8266EA18();
extern int fn_8266EC60();
extern int fn_82BE3A18();
extern int fn_82F4EAD0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F894;
extern unsigned int uStack_22;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_824E3090(void)

{
  int iVar1;
  double dVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned short uStack_24;
  unsigned short uStack_22;
  
  fn_82F4EAD0();
  dVar2 = (double)lbl_8327F894;
  fn_825597C0();
  fn_8266EC60();
  fn_8266EA18(dVar2);
  iVar1 = fn_8258C000();
  if (((*(int *)(iVar1 + 0x1fc) != 0) && (*(int *)(iVar1 + 500) != 0)) &&
     ((*(int *)(iVar1 + 0x1f8) != 0 || (*(int *)(iVar1 + 0x1a0) == 0)))) {
    stack_pair_40.first = 0;
    stack_pair_40.second = 0;
    uStack_38 = 0;
    uStack_30 = ltcg_pool_0_0f;
    uStack_34 = 0;
    uStack_2c = ltcg_pool_0_0f;
    uStack_24 = 0;
    uStack_28 = ltcg_pool_0_0f;
    uStack_22 = 0;
    fn_82BE3A18(&stack_pair_40.first,0);
  }
  return;
}

