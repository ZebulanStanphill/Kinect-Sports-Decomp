extern int fn_82A1E810(unsigned int);
extern int fn_82E65FD0(int);

void fn_82E660E0(int param_1)
{
  if (fn_82E65FD0(param_1) >= 0) {
    fn_82A1E810(*(unsigned int *)(param_1 + 0x24));
  }
}
