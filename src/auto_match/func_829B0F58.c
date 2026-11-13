extern int png_warning();


void fn_829B0F58(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x554) = param_2;
  *(unsigned int *)(param_1 + 0x550) = param_3;
  if (*(unsigned int *)(param_1 + 0x54c) != 0) {
    *(unsigned int *)(param_1 + 0x54c) = 0;
    png_warning(param_1,"It's an error to set both read_data_fn and write_data_fn in the ");
    png_warning(param_1,"same structure.  Resetting write_data_fn to NULL.");
  }
  *(unsigned int *)(param_1 + 0x620) = 0;
  return;
}

