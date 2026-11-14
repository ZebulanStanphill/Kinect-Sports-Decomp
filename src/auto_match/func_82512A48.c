typedef struct { unsigned int id; int a; int b; } Entry_82512C30;
typedef struct { Entry_82512C30 *begin; Entry_82512C30 *end; Entry_82512C30 *cap; } Vector_82512C30;
typedef struct { char pad[0x14]; Vector_82512C30 listA; char pad2[4]; Vector_82512C30 listB; } Registry_82512C30;
extern Registry_82512C30 *fn_82512C30(void);
extern void fn_82512CC8(Registry_82512C30 *registry);

static __forceinline void Erase(Vector_82512C30 *v, Entry_82512C30 *it)
{
  Entry_82512C30 *src, *dst, *last = v->end;
  for (dst = it, src = it + 1; src != last; src++, dst++) *dst = *src;
  {
    Entry_82512C30 *ne = v->end - 1;
    Entry_82512C30 *p;
    for (p = ne; p != v->end; p++) {}
    v->end = ne;
  }
}

void fn_82512A48(unsigned int id)
{
  Registry_82512C30 *m = fn_82512C30();
  Entry_82512C30 *end = m->listB.end;
  Entry_82512C30 *it;
  for (it = m->listB.begin; it != end; it++) {
    if (it->id == id) {
      Erase(&m->listB, it);
      break;
    }
  }
  fn_82512CC8(m);
}
