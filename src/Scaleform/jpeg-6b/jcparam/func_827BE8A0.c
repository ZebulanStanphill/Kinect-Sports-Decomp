extern int jpeg_add_quant_table();


extern char lbl_82017830[];
extern char lbl_82017730[];
void jpeg_set_linear_quality(unsigned __int64 cinfo,unsigned __int64 scale_factor,unsigned __int64 force_baseline)

{
  jpeg_add_quant_table(cinfo,0,lbl_82017830,scale_factor,force_baseline);
  jpeg_add_quant_table(cinfo,1,lbl_82017730,scale_factor,force_baseline);
  return;
}

