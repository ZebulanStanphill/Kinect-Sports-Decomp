extern unsigned int lbl_821C3F6C;
extern unsigned int lbl_821C3FEC;
extern unsigned int *lbl_8327F864;


void fn_82533DF8(unsigned int *param_1)

{
  *param_1 = &lbl_821C3FEC;
  (**(int (***)())(*lbl_8327F864 + 0x14))(lbl_8327F864,param_1 + 2);
  *param_1 = &lbl_821C3F6C;
  return;
}

