extern int fn_82FEC128();
extern int fn_82FEC630();
extern unsigned int lbl_83264300;
extern unsigned int lbl_832645A8;


void fn_83009B78(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (param_1 == lbl_832645A8) {
    fn_82FEC128(param_2,param_3);
  }
  else {
    fn_82FEC630(*(unsigned int *)(param_1 + 0xc),param_2);
    if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + 0xc) == -2)) {
      *(char *)(lbl_83264300 + 0x94) = '\x01' - ((param_2 & 0x1f) == 0 && (param_2 & 0x11) == 0);
    }
  }
  return;
}

