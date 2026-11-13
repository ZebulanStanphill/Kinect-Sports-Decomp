typedef struct { int v[8]; } Elem_82662DF0;
extern void fn_826630F0(void *al, Elem_82662DF0 *p);

void fn_82662DF0(Elem_82662DF0 *first, Elem_82662DF0 *last, void *al, unsigned char tag)
{
  for (; first != last; ++first) {
    fn_826630F0(al, first);
  }
}
