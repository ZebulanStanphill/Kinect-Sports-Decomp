extern int png_chunk_error();
extern int png_check_chunk_name();
extern int fn_829B9B60();


void fn_829BA6A0(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  png_check_chunk_name(param_1,param_1 + 0x60c);
  if (((*(unsigned char *)(param_1 + 0x60c) & 0x20) != 0) ||
     (png_chunk_error(param_1,"unknown critical chunk"), param_2 != 0)) {
    if ((*(unsigned int *)(param_1 + 0x558) & 4) != 0) {
      *(unsigned int *)(param_1 + 0x558) = *(unsigned int *)(param_1 + 0x558) | 8;
    }
    fn_829B9B60(param_1,param_3);
  }
  return;
}

