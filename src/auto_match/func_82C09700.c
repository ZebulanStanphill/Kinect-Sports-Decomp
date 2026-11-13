extern int fn_82C07428();
extern int fn_82C07C18();
unsigned int fn_82C09700(unsigned int param_1, unsigned short param_2)
{
  if (param_1 != 0 && param_2 >= 1 && param_2 <= 0x7f && *(int *)(param_1 + 0x210) != 0) {
    fn_82C07428(param_1, (unsigned char)param_2, 1);
    return fn_82C07C18();
  }
  return 4;
}
