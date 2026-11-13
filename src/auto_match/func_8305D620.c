typedef struct { char pad[0x2c]; int *data; int count; } Arr_8305D620;

void fn_8305D620(Arr_8305D620 *a, int add)
{
  int i;
  int n = a->count - 1;
  if (n == 0) return;
  for (i = n; i != 0; i--) {
    int *e = &a->data[i];
    *e += add;
  }
}
