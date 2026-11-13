extern unsigned int strlen(const char *);
extern void *malloc(unsigned int);
extern void fn_82F664B0(void *, unsigned int, const char *);

void fn_8265BAB8(int param_1,char *param_2)

{
  unsigned int len;
  void *buf;

  if (param_2 != 0) {
    len = strlen(param_2) + 1;
    buf = malloc(len);
    *(void **)(param_1 + 4) = buf;
    if (buf != 0) {
      fn_82F664B0(buf,len,param_2);
      *(unsigned char *)(param_1 + 8) = 1;
    }
  }
}
