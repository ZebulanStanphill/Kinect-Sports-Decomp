extern void fn_82E50CB8(void *);
extern void fn_82E50F10(void *);
extern void *memmove(void *, const void *, unsigned int);

typedef struct {
  char pad[0x5c];
  unsigned count;
  int f60;
  unsigned short *data;
} Obj_82E56078;

int fn_82E56078(Obj_82E56078 *param_1, unsigned short param_2)
{
  unsigned i;
  int hr;
  unsigned n;
  unsigned short *p;
  unsigned *pc = &param_1->count;

  hr = 0;
  if (param_1->count == 0) {
    return 0x80070057;
  }
  fn_82E50CB8((char *)param_1 + 8);
  n = param_1->count;
  i = 0;
  if (param_1->count != 0) {
    do {
      if (param_2 == param_1->data[i]) {
        if (n - 1 > i) {
          p = param_1->data + i;
          memmove(p, p + 1, (n - i - 1) * 2);
        }
        param_1->count = param_1->count - 1;
        param_1->data[param_1->count] = 0;
        goto done;
      }
      i = i + 1;
    } while (i < *pc);
  }
  hr = 0x80070057;
done:
  fn_82E50F10((char *)param_1 + 8);
  return hr;
}
