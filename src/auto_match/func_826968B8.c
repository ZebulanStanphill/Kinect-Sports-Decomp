extern int fn_8267C498();
extern int fn_826959C8();


void fn_826968B8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_8267C498(*(unsigned int *)(param_1 + 0x18));
  }
  if (*(unsigned char *)(param_1 + 8) >= 5) {
    fn_826959C8(param_1 + 8);
  }
  return;
}

