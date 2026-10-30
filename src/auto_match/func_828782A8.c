typedef struct { char d[0x2c]; } Elem;
extern void fn_828781C8(Elem *e, int flags);

void fn_828782A8(Elem *first, Elem *last)
{
  Elem *p;
  for (p = first; p != last; p++) {
    fn_828781C8(p, 0);
  }
}
