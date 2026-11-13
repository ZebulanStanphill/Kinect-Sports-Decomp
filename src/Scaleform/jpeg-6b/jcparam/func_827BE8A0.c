extern int jpeg_add_quant_table();


extern char lbl_82017830[];
extern char lbl_82017730[];
void jpeg_set_linear_quality(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  jpeg_add_quant_table(param_1,0,lbl_82017830,param_2,param_3);
  jpeg_add_quant_table(param_1,1,lbl_82017730,param_2,param_3);
  return;
}

