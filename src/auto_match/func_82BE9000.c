extern int fn_82BA02A8();
extern int fn_82BE51E8();
extern unsigned int lbl_820EBE90;
extern unsigned int lbl_8322B22C;


unsigned int * fn_82BE9000(unsigned int *param_1)

{
  fn_82BE51E8(param_1,"XMassiveRenderHelper");
  *param_1 = &lbl_820EBE90;
  fn_82BA02A8(param_1 + 6);
  fn_82BA02A8(param_1 + 0x16);
  fn_82BA02A8(param_1 + 0x26);
  fn_82BA02A8(param_1 + 0x29);
  fn_82BA02A8(param_1 + 0x2c);
  lbl_8322B22C = param_1;
  return param_1;
}

