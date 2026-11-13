extern int fn_8267BE38();
extern int fn_826EA898();
extern int fn_826EAD00();
extern int fn_82779B98();
extern int jpeg_destroy_decompress();
extern unsigned int lbl_8200D84C;


void fn_826EAE70(unsigned int *param_1)

{
  *param_1 = &lbl_8200D84C;
  fn_826EA898();
  if (param_1[8] != 0) {
    fn_826EAD00(param_1[8],1);
  }
  param_1[8] = 0;
  jpeg_destroy_decompress(param_1 + 2);
  fn_8267BE38(param_1[0xc1]);
  fn_82779B98(param_1);
  return;
}
