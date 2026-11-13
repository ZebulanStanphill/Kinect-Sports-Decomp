extern int fn_82CEAC28();
extern int fn_82CEF0B8();
extern int fn_82CFF638();


void fn_82CEF598(unsigned int param_1, unsigned int param_2)
{
  unsigned int it;
  it = fn_82CFF638(param_2, param_1);
  if (it != 0 && param_1 != 0) {
    unsigned int p = it;
    do {
      fn_82CEF0B8(param_1, p, param_2);
      p = fn_82CEAC28(p);
    } while (p != 0);
  }
}