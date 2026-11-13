typedef struct { int v[3]; } Elem_82669DD8;
extern void fn_826686C8(void *al, Elem_82669DD8 *p);

void fn_82669DD8(Elem_82669DD8 *first, Elem_82669DD8 *last, void *al, unsigned char tag)
{
  for (; first != last; ++first) {
    fn_826686C8(al, first);
  }
}
