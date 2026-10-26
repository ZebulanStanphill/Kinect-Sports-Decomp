typedef struct { unsigned pad:4; unsigned n:3; unsigned pad2:12; unsigned f:8; unsigned low:5; } B;
unsigned int fn_82ABDBA0(B *b)
{
  unsigned int r = 0;
  unsigned int i;
  for (i = 0; i < b->n; i++) {
    r |= 1 << ((b->f >> (i * 2)) & 3);
  }
  return r;
}
