extern int fn_826EA560();
extern int jpeg_std_error();
extern int jpeg_CreateCompress();
extern unsigned int lbl_8200D878;


unsigned int * fn_826EB0C0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_8200D878;
  uVar1 = jpeg_std_error(param_1 + 0x5c);
  param_1[2] = uVar1;
  jpeg_CreateCompress(param_1 + 2,0x3e,0x168);
  fn_826EA560(param_1 + 2,param_2);
  return param_1;
}

