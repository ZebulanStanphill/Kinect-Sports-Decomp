extern unsigned short lbl_8218EFE8[];
extern int lbl_821902F0[];


int fn_82554C50(int param_1,short param_2)

{
  if (lbl_8218EFE8[param_2] == 0xffff) {
    return -1;
  }
  return lbl_821902F0[lbl_8218EFE8[param_2]];
}

