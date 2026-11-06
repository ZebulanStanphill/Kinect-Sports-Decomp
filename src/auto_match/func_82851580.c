extern int fn_828514C0(int);
extern int fn_82860A40();
extern int strncmp(const char *, const char *, unsigned);

int fn_82851580(int param_1, int param_2)
{
  if (strncmp((char *)(param_2 + 0xc), "24.11.08.0043", 0xe) != 0) {
    return 1;
  }
  fn_828514C0(*(int *)(param_2 + 0x130));
  if (*(unsigned int *)(param_2 + 0x120) != 0) {
    fn_82860A40(*(unsigned int *)(param_2 + 0x120));
  }
  return 0;
}
