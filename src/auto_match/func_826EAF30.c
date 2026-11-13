extern int fn_826EA560();
extern int jpeg_std_error();
extern int jpeg_start_compress();
extern int jpeg_set_quality();
extern int jpeg_set_defaults();
extern int jpeg_CreateCompress();
extern unsigned int lbl_8200D878;


unsigned int *
fn_826EAF30(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  *param_1 = &lbl_8200D878;
  puVar2 = param_1 + 2;
  uVar1 = jpeg_std_error(param_1 + 0x5c);
  param_1[2] = uVar1;
  jpeg_CreateCompress(puVar2,0x3e,0x168);
  fn_826EA560(puVar2,param_2);
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = 3;
  param_1[0xc] = 2;
  jpeg_set_defaults(puVar2);
  jpeg_set_quality(puVar2,param_5,1);
  jpeg_start_compress(puVar2,1);
  return param_1;
}

