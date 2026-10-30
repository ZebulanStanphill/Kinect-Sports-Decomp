typedef struct S { unsigned int pos; unsigned int cap; int pad; int **blocks; } S;
extern void fn_8277D098(S *s, unsigned int n);
void fn_8277E998(S *s, int *v)
{
  unsigned int b = s->pos >> 8;
  if (b >= s->cap) fn_8277D098(s, b);
  s->blocks[b][s->pos & 0xff] = *v;
  s->pos++;
}
