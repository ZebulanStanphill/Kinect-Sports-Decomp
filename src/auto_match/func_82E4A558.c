extern int fn_82A2A108(unsigned int, unsigned int, unsigned int, int, unsigned int);
extern unsigned int fn_82A1F470(void);

int fn_82E4A558(unsigned int param_1)
{
  int hr;
  int e;

  hr = 0;
  if (param_1 == 0) {
    hr = 0x80004003;
  } else {
    if (fn_82A2A108(*(unsigned int *)(param_1 + 0x60), *(unsigned int *)(param_1 + 0x48),
                    *(unsigned int *)(param_1 + 0x4c), 0, param_1 + 4) == 0) {
      if (fn_82A1F470() != 0x3e5) {
        e = fn_82A1F470();
        if (e <= 0) {
          hr = e;
        } else {
          hr = (e & 0xffff) | 0x80070000;
        }
      }
    }
  }
  return hr;
}
