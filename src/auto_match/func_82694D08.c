typedef struct Str { char *data; int pad; int refs; int pad2; int len; } Str;
typedef struct Heap { void *h; } Heap;
extern Str *fn_826947E8(void *heap, char *a, int alen, char *b, int blen);
Str **fn_82694D08(Str **out, Str **a, Str **b)
{
  Str *s = *a;
  void *heap = ((Heap *)((unsigned int)s & 0xfffffc00))->h;
  Str *r = fn_826947E8(heap, s->data, s->len, (*b)->data, (*b)->len);
  *out = r;
  r->refs++;
  return out;
}
