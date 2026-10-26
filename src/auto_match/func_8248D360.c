typedef struct { int a; void *p; int rest[1]; } Elem;
extern void fn_822315A0(void *p);

void fn_8248D360(Elem *first, Elem *last)
{
  for (; first != last; first++) {
    if (first->p != 0) {
      fn_822315A0(first->p);
    }
  }
}
