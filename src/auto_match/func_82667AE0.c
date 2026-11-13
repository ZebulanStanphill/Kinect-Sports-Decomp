typedef struct { int v[3]; } Elem_82667AE0;
extern void *fn_8265D5A8(void *);

Elem_82667AE0 *fn_82667AE0(Elem_82667AE0 *first, Elem_82667AE0 *last, Elem_82667AE0 *dest, unsigned char tag)
{
  for (; first != last; ++dest, ++first) {
    *dest = *(Elem_82667AE0 *)fn_8265D5A8(first);
  }
  return dest;
}
