typedef struct Vec_8303F240 {
  unsigned int *first;
  unsigned int *last;
  unsigned int cap;
} Vec_8303F240;

typedef struct Obj_8303F240 {
  char pad[0x1c];
  Vec_8303F240 vec;
} Obj_8303F240;

extern void *lbl_831BC768;
extern unsigned int *fn_82FA5060(void *heap, unsigned int bytes);
extern unsigned char fn_8301A5D0(Vec_8303F240 *v, int n);

int fn_8303F240(Obj_8303F240 *o, unsigned int **stream)
{
  Vec_8303F240 *v = &o->vec;
  unsigned int count = *(*stream)++;
  unsigned int i;
  if (count != 0) {
    v->first = fn_82FA5060(lbl_831BC768, count << 2);
    v->last = v->first;
    if (v->first != 0) {
      v->cap = count;
    }
  }
  for (i = 0; i < count; i++) {
    unsigned int value = *(*stream)++;
    unsigned int size = v->last - v->first;
    unsigned int *p;
    if ((size >= v->cap && fn_8301A5D0(v, 8) == 0) || size >= v->cap) {
      return 2;
    }
    p = v->last++;
    if (p == 0) {
      return 2;
    }
    *p = value;
  }
  return 1;
}
