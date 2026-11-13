extern char *fn_82CEB1B8(void *, void *);

void fn_82CEE7F8(void *param_1, unsigned param_2, void *param_3, int *param_4)
{
  char auStack_30[1];

  if (param_2 != 0) {
    if (*fn_82CEB1B8(auStack_30, param_3) != 0) {
      (*(void (**)(int *, void *, unsigned, int))(*param_4 + 0xc))(param_4, param_1, param_2, 0);
    } else {
      (*(void (**)(int *, void *, void *, unsigned, int))(*param_4 + 0x10))(param_4, param_3, param_1, param_2, 0);
    }
  }
}
