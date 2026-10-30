extern void fn_82CFBB08(void *p, int n);
typedef struct { char pad[0x78]; void *items[4]; int count; } A;
typedef struct { char pad[0x22]; unsigned short counts[1]; } B;
void fn_82CE82A8(A *a, B *b)
{
  int i;
  for (i = 0; i < a->count; i++) {
    int n = b->counts[i];
    b->counts[i] = 0;
    while (n > 0) {
      fn_82CFBB08(a->items[i], 1);
      n--;
    }
  }
}
