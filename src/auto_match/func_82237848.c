typedef struct { char d[0x10]; } Elem;
extern void fn_8223A820(Elem *e, int flags);

void fn_82237848(Elem *first, Elem *last)
{
  Elem *p;
  for (p = first; p != last; p++) {
    fn_8223A820(p, 0);
  }
}
