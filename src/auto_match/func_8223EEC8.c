extern unsigned int *auStack_20;
extern int fn_82F62680();
extern int fn_82F626D0();
extern unsigned int lbl_832632D8;


int fn_8223EEC8(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  if (*param_1 == 0) {
    fn_82F62680(auStack_20,0);
    if (*param_1 == 0) {
      lbl_832632D8 = lbl_832632D8 + 1;
      *param_1 = lbl_832632D8;
    }
    fn_82F626D0(auStack_20);
  }
  return *param_1;
}

