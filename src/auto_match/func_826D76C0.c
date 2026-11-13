typedef struct { int pad[2]; unsigned m8; int mc; } B;
typedef struct { unsigned k; B *b; } A;
extern unsigned char fn_826D75C0(int, int);

unsigned char fn_826D76C0(unsigned k, B *a, A *o)
{
  if (k != o->k) return 0;
  return a->m8 == o->b->m8 && fn_826D75C0(a->mc, o->b->mc) != 0;
}
