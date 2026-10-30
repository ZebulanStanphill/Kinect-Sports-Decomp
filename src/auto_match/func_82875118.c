typedef struct { char d[0x70]; } Elem;
extern void fn_828750B0(Elem *e, int flags);

void fn_82875118(Elem *first, Elem *last)
{
  Elem *p;
  for (p = first; p != last; p++) {
    fn_828750B0(p, 0);
  }
}
