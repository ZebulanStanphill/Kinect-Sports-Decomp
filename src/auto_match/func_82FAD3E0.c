typedef struct N { int a; struct N *next; int b, c; unsigned char on; char pad[0x21]; unsigned short hi : 1; } N;
typedef struct { int a; N *head; } L;

int fn_82FAD3E0(L *l)
{
  N *n;
  for (n = l->head; n != 0; n = n->next) {
    if (n->on && (unsigned char)n->hi) return 0;
  }
  return 1;
}
