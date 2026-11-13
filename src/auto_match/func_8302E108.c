extern int fn_82FFF510();
extern int fn_83011A38();
extern int fn_83011B20();
extern int fn_8302D080();
extern unsigned int lbl_832642E4;


void fn_8302E108(int param_1,unsigned __int64 param_2)

{
  if ((*(unsigned char *)(param_1 + 0x11e) >> 2 & 3) == (unsigned int)param_2) {
    return;
  }
  *(unsigned char *)(param_1 + 0x11e) =
       (unsigned char)((param_2 & 0xffffffff) << 2) & 0xc | *(unsigned char *)(param_1 + 0x11e) & 0xf3;
  fn_8302D080();
  if (*(char *)(param_1 + 0x122) != '\0') {
    if (lbl_832642E4 != 0) {
      fn_83011B20(lbl_832642E4,*(unsigned int *)(param_1 + 0xc));
      fn_83011A38(lbl_832642E4,*(unsigned int *)(param_1 + 0xc));
    }
    fn_82FFF510(param_1,0,0);
  }
  return;
}

