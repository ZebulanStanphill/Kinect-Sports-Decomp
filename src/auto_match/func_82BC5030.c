extern int fn_82BC4F30();


unsigned int fn_82BC5030(int param_1,int param_2)

{
  if (*(unsigned int *)(*(int *)(param_1 + 0xc) + param_2 * 4) != 0) {
    fn_82BC4F30();
  }
  return *(unsigned int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
}

