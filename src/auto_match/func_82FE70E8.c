extern int fn_8300F120(unsigned int);
extern int fn_8300F208(unsigned int, void *, unsigned short);
extern unsigned int lbl_832642E4;

typedef struct { unsigned short a; unsigned short b; unsigned int c; unsigned char pad[0x28]; } Msg_82FE70E8;

int fn_82FE70E8(unsigned int param_1)
{
  Msg_82FE70E8 m;

  if (param_1 == 0) {
    return 2;
  }
  m.b = 7;
  m.c = param_1;
  return fn_8300F208(lbl_832642E4, &m, fn_8300F120(param_1));
}
