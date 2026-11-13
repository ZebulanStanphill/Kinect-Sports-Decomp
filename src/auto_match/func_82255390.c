extern int fn_82233720();
extern int fn_82897D88();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82197534;
extern unsigned int lbl_82198118;
extern unsigned int lbl_82198148;
extern unsigned int lbl_821981C0;



static void Destroy(void *p,void *vtable) { *(void **)p=vtable; fn_82897D88(p); }

void fn_82255390(unsigned int *param_1)

{
  *param_1 = &lbl_82198148;
  Destroy(param_1 + 0x16b, &lbl_82197534);
  Destroy(param_1 + 0x151, &lbl_82197534);
  Destroy(param_1 + 0x13b, &lbl_82198118);
  Destroy(param_1 + 0x121, &lbl_82197534);
  Destroy(param_1 + 0x107, &lbl_82197534);
  Destroy(param_1 + 0xf1, &lbl_821970C0);
  Destroy(param_1 + 0xdb, &lbl_821970C0);
  Destroy(param_1 + 0xc5, &lbl_821970C0);
  Destroy(param_1 + 0xaf, &lbl_821970C0);
  Destroy(param_1 + 0x99, &lbl_821970C0);
  Destroy(param_1 + 0x83, &lbl_821981C0);
  fn_82233720(param_1);
  return;
}

