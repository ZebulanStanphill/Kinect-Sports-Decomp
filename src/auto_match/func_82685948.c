extern void fn_8267BE38(unsigned int);
typedef struct { unsigned int head; int a; int b; int c; } L;
void fn_82685948(L *l)
{
  unsigned int n = l->head;
  while (n != 0) {
    unsigned int nx = *(unsigned int *)(n + 0xbe8);
    fn_8267BE38(n);
    n = nx;
  }
  l->head = 0; l->a = 0; l->b = 0x7f; l->c = 0;
}
