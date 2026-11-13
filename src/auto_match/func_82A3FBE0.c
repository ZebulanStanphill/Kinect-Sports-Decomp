struct elem {
  unsigned int a;
  unsigned int b;
};

struct arr {
  struct elem *data;
  unsigned int cap;
  unsigned int count;
};

extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82A3F9B8(unsigned int v, void *ctx);

void fn_82A3FBE0(struct arr *a, void *ctx)
{
  if (a->data != 0) {
    while (a->count-- != 0) {
      fn_82A3F9B8(a->data[a->count].a, ctx);
      fn_8265C990((void *)a->data[a->count].a, 0x24970000);
    }
    fn_8265C990(a->data, 0x24970000);
    a->data = 0;
  }
}
