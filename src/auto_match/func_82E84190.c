extern int fn_82ED5420();
extern int fn_82ED7338();
extern int fn_82ED76D0();
extern int fn_82ED78B8();
extern int fn_82ED7BB0();
extern int fn_82F016E8();
extern int fn_82F090D0();
extern int fn_82F09118();
extern int fn_82ED7A90();
extern char lbl_831A9160[];
extern char lbl_831A91E8[];


void fn_82E84190(int param_1)

{
  *(unsigned int *)(param_1 + 0x2030) = *(unsigned int *)(param_1 + 0x254);
  *(unsigned int *)(param_1 + 0x2048) = *(unsigned int *)(param_1 + 0x254);
  *(unsigned int *)(param_1 + 0x204c) = *(unsigned int *)(param_1 + 600);
  *(unsigned int *)(param_1 + 0x2054) = *(unsigned int *)(param_1 + 0x268);
  *(unsigned int *)(param_1 + 0x2050) = *(unsigned int *)(param_1 + 0x25c);
  *(unsigned int *)(param_1 + 0x2034) = *(unsigned int *)(param_1 + 600);
  *(unsigned int *)(param_1 + 0x2038) = *(unsigned int *)(param_1 + 0x25c);
  *(unsigned int *)(param_1 + 0x2040) = *(unsigned int *)(param_1 + 0x23c);
  *(int (**)())(param_1 + 0x1fb0) = fn_82ED5420;
  *(int (**)())(param_1 + 0x2004) = fn_82ED7A90;
  *(int (**)())(param_1 + 0x2008) = fn_82ED7BB0;
  *(int (**)())(param_1 + 0x1fb4) = fn_82F09118;
  *(int (**)())(param_1 + 0x1fb8) = fn_82ED7338;
  *(int (**)())(param_1 + 0x1fbc) = fn_82ED76D0;
  *(int (**)())(param_1 + 0x1fc0) = fn_82ED78B8;
  *(unsigned int *)(param_1 + 0x2058) = *(unsigned int *)(param_1 + 0x23c);
  *(unsigned int *)(param_1 + 0x2044) = *(unsigned int *)(param_1 + 0x240);
  *(unsigned int *)(param_1 + 0x205c) = *(unsigned int *)(param_1 + 0x240);
  *(unsigned int *)(param_1 + 0x203c) = *(unsigned int *)(param_1 + 0x26c);
  fn_82F090D0(param_1);
  *(int (**)())(param_1 + 0x52a0) = fn_82F016E8;
  *(unsigned int *)(param_1 + 0x2048) = *(unsigned int *)(param_1 + 0x250);
  *(unsigned int *)(param_1 + 0x204c) = *(unsigned int *)(param_1 + 0x260);
  *(unsigned int *)(param_1 + 0x2050) = *(unsigned int *)(param_1 + 0x264);
  *(unsigned int *)(param_1 + 0x2054) = *(unsigned int *)(param_1 + 0x26c);
  *(unsigned int *)(param_1 + 0x2030) = *(unsigned int *)(param_1 + 0x250);
  *(unsigned int *)(param_1 + 0x2034) = *(unsigned int *)(param_1 + 0x260);
  *(unsigned int *)(param_1 + 0x2038) = *(unsigned int *)(param_1 + 0x264);
  if (*(int *)(param_1 + 0x628) == 0) {
    *(unsigned int *)(param_1 + 0x2034) = (int)lbl_831A9160;
    *(unsigned int *)(param_1 + 0x2038) = (int)lbl_831A91E8;
  }
  *(unsigned int *)(param_1 + 0x2040) = *(unsigned int *)(param_1 + 0x248);
  *(unsigned int *)(param_1 + 0x2058) = *(unsigned int *)(param_1 + 0x248);
  *(unsigned int *)(param_1 + 0x2044) = *(unsigned int *)(param_1 + 0x24c);
  *(unsigned int *)(param_1 + 0x205c) = *(unsigned int *)(param_1 + 0x24c);
  return;
}

