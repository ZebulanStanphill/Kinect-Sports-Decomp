extern int fn_826C1AD8();
extern int fn_826C26B0();
extern int fn_827A80F8();
extern unsigned int lbl_82015D88;
extern unsigned int lbl_82015D90;
extern unsigned int lbl_82015DE4;


void fn_827ABDC0(unsigned int *param_1)

{
  *param_1 = &lbl_82015DE4;
  param_1[4] = &lbl_82015D90;
  param_1[0x10] = &lbl_82015D88;
  fn_826C26B0(param_1 + 0x10);
  fn_827A80F8(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

