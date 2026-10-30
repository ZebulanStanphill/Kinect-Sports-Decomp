typedef struct Arr_82F152D0 {
  char pad0[4];
  int size;
  char pad8[0x4c];
  void *data;
  void *cur;
} Arr_82F152D0;

extern void *fn_8265C940(unsigned int bytes, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
void fn_82F152D0(Arr_82F152D0 *a, int n, unsigned int *fail)
{
  void *p;
  unsigned int bytes;
  if (n >= a->size) {
  if (a->data != 0) {
    fn_8265C990(a->data, 0x248c8000);
    a->data = 0;
  }
  a->size = n;
  a->cur = 0;
  bytes = (unsigned int)n <= 0x3fffffff ? (unsigned int)n * 4 : 0xffffffff;
  p = fn_8265C940(bytes, 0x248c8000);
  a->data = p;
  a->cur = p;
  if (p == 0) {
    *fail = 1;
  }
  }
}
