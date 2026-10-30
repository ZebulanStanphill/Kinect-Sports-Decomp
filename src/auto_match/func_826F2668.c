typedef unsigned int uint;
typedef struct { int a, b, c; } Entry;
typedef struct { uint count; Entry *heap; int pad[2]; Entry inl[16]; } Arr;
extern void fn_826F1AB0(Entry **);
void fn_826F2668(Arr *p, Entry *e)
{
  uint n = p->count;
  if (n < 0x10) {
    p->inl[n] = *e;
  } else {
    fn_826F1AB0(&p->heap);
  }
  p->count = p->count + 1;
}
