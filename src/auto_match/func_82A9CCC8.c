typedef struct { unsigned char b[0x114]; } Elem;
typedef struct { Elem *data; unsigned int size; unsigned int cap; } Vec;
extern void fn_82A9A5D8(Vec *, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

void fn_82A9CCC8(Vec *v, const void *src)
{
  unsigned int n = v->size + 1;
  if (n > v->cap) {
    fn_82A9A5D8(v, n);
  }
  memcpy(&v->data[v->size], src, sizeof(Elem));
  v->size++;
}
