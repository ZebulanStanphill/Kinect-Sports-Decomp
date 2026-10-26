typedef struct { int a; void *p; } Elem;
extern void fn_822315A0(void *p);

void fn_82231540(Elem *first, Elem *last)
{
  for (; first != last; first++) {
    if (first->p != 0) {
      fn_822315A0(first->p);
    }
  }
}
