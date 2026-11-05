extern unsigned strlen(const char *);
extern int strncmp(const char *, const char *, unsigned);

char *fn_828F0088(char *param_1, unsigned param_2)
{
  char *p;

  if (*param_1 == 'v') {
    p = param_1 + strlen(param_1);
    if (p - param_1 > 3) {
      if (strncmp(p - 3, "swx", 3) == 0) {
        return "vs_3_swx";
      }
      if (strncmp(p - 3, "xps", 3) == 0) {
        return "vs_3_xps";
      }
    }
  }
  if ((param_2 & 0x100000) == 0) {
    if (*param_1 == 'v') {
      param_1 = "vs_3_0";
    } else if (*param_1 == 'p') {
      param_1 = "ps_3_0";
    }
  }
  return param_1;
}
