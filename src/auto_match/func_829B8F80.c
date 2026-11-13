extern int png_calculate_crc();
extern int png_read_data();


void png_crc_read(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  png_read_data();
  png_calculate_crc(param_1,param_2,param_3);
  return;
}

