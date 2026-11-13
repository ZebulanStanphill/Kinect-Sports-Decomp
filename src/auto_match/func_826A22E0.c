extern int fn_82696330();
extern int fn_826A1A28();
extern int fn_826A1F38();
extern int fn_826C0BA8();
extern int isdigit(int c);

typedef struct Str {
  char *ptr;
  int pad[3];
  unsigned int len;
} Str;

int fn_826A22E0(char *param_1, int param_2, Str **param_3)
{
  int r;
  unsigned char tmp;

  if ((*param_3)->len > 0 && isdigit((*param_3)->ptr[0])) {
    r = fn_826A1A28(param_3);
    if (r >= 0) {
      tmp = 0;
      fn_826A1F38(param_1 - 0x10, r, &tmp);
      fn_82696330(&tmp);
      return 1;
    }
    return 0;
  }
  return fn_826C0BA8(param_1, param_2, param_3);
}
