typedef struct Elem {
  int pad0[2];
  int a;
  int pad1;
  __int64 b;
  char name[42];
} Elem;

typedef struct Proxy Proxy;
typedef struct Cont {
  Proxy *proxy;
} Cont;
struct Proxy {
  Cont *cont;
};

typedef struct Iter {
  Proxy *proxy;
  void *next;
  unsigned int idx;
} Iter;

extern Elem *fn_828D4E10(Iter *it);

Iter *fn_828B3AB8(Iter *ret, Iter *first, Iter *last, Iter *dest)
{
  Elem *s;
  Elem *d;
  Proxy *px;
  int i;

  while (first->idx != last->idx) {
    last->idx--;
    s = fn_828D4E10(last);
    dest->idx--;
    d = fn_828D4E10(dest);
    d->a = s->a;
    d->b = s->b;
    for (i = 0; i < 42; i++) {
      d->name[i] = s->name[i];
    }
  }
  px = dest->proxy;
  ret->proxy = 0;
  ret->next = 0;
  if (px != 0 && px->cont != 0) {
    ret->proxy = px->cont->proxy;
  }
  ret->idx = dest->idx;
  return ret;
}
