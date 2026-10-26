typedef struct { int a; void *p; int rest[18]; } Elem;
extern void fn_822315A0(void *p);

void fn_828D3860(Elem *first, Elem *last)
{
  for (; first != last; first++) {
    if (first->p != 0) {
      fn_822315A0(first->p);
    }
  }
}
