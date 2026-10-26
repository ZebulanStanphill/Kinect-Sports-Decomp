extern void fn_8265C990(void *p, unsigned int tag);

typedef struct { void ***data; unsigned int count; } S;

void fn_82A3F9B8(S *p)
{
  while (p->count-- != 0) {
    void **e = p->data[p->count];
    fn_8265C990(*e, 0x24970000);
    *e = 0;
    fn_8265C990(p->data[p->count], 0x24970000);
  }
  fn_8265C990(p->data, 0x24970000);
  p->data = 0;
}
