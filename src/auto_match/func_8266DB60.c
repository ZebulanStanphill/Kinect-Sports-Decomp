typedef struct { char d[0xc]; } Elem;
extern void fn_8266CB60(Elem *e, int flags);

void fn_8266DB60(Elem *first, Elem *last)
{
  Elem *p;
  for (p = first; p != last; p++) {
    fn_8266CB60(p, 0);
  }
}
