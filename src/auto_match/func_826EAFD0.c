extern int fn_82779BA8();
extern int jpeg_finish_compress();
extern int jpeg_destroy_compress();
extern unsigned int lbl_8200D878;


void fn_826EAFD0(unsigned int *param_1)

{
  *param_1 = &lbl_8200D878;
  jpeg_finish_compress(param_1 + 2);
  jpeg_destroy_compress(param_1 + 2);
  fn_82779BA8(param_1);
  return;
}
