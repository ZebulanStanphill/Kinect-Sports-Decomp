typedef struct { int v[2]; } A;
typedef struct { int v[4]; } B;
typedef struct { A a; int x; B b; int y; } E;

extern void fn_828B5580(A *d, const A *s);
extern void fn_8288BB90(B *d, const B *s);

E *fn_828903B8(E *first, E *last, E *dest)
{
  for (; first != last; first++, dest++) {
    if (dest != 0) {
      fn_828B5580(&dest->a, &first->a);
      dest->x = first->x;
      fn_8288BB90(&dest->b, &first->b);
      dest->y = first->y;
    }
  }
  return dest;
}
