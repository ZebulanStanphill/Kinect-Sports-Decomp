typedef struct Entry {
  int value;
  unsigned char flag;
} Entry;

Entry *fn_830298E8(void *p);

int fn_8303E620(char *self, int value, unsigned char flag)
{
  Entry *e;

  e = fn_830298E8(self + 4);
  if (e == 0) {
    return 2;
  }
  e->flag = flag;
  e->value = value;
  return 1;
}
