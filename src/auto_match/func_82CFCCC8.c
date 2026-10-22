typedef unsigned int uint;
typedef void *(*vfn)();

typedef struct Str {
  char *data;
  int len;
  int cap;
} Str;

extern int fn_82CE5410(void);
extern void *memcpy(void *dst, const void *src, uint n);

Str *fn_82CFCCC8(Str *param_1, Str *param_2, char param_3, char param_4, int param_5)
{
  int len;
  int *alloc;
  char *buf;
  int i;

  len = param_2->len;
  alloc = *(int **)(fn_82CE5410() + 0x10);
  buf = (char *)(*(vfn *)(*alloc + 4))(alloc, len);
  memcpy(buf, param_2->data, param_2->len);
  for (i = 0; i < param_2->len - 1; i++) {
    if (buf[i] == param_3) {
      buf[i] = param_4;
      if (param_5 == 0) {
        break;
      }
    }
  }
  len = param_2->len;
  param_1->data = buf;
  buf[len - 1] = 0;
  len = param_2->len;
  param_1->len = len;
  param_1->cap = len;
  return param_1;
}
