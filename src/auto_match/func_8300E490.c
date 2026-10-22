typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *lbl_831BC768;

typedef struct {
  int a;
  void *data;
  unsigned short b;
  unsigned char c;
} Obj;

int fn_8300E490(Obj *o, int a, const void *src, unsigned int size,
                unsigned char b, unsigned char c)
{
  if (size != 0) {
    o->data = fn_82FA5060(lbl_831BC768, size);
    if (o->data == 0) {
      return 0x34;
    }
    memcpy(o->data, src, size);
  }
  o->a = a;
  o->c = c;
  o->b = b;
  return 1;
}
