extern int lbl_83264208;
extern unsigned int lbl_83264210;


unsigned __int64 fn_82FA4F60(int param_1)

{
  if (param_1 < lbl_83264208) {
    if (*(unsigned int *)(param_1 * 0x50 + lbl_83264210) != 0) {
      return 1;
    }
  }
  return 0xe;
}

