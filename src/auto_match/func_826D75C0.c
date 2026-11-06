typedef struct { int pad0, pad1; unsigned int v[9]; } S_826D75C0;
unsigned char fn_826D75C0(S_826D75C0 *a, S_826D75C0 *b)
{
  return a->v[0] == b->v[0] && a->v[1] == b->v[1] && a->v[2] == b->v[2] && a->v[3] == b->v[3] && a->v[4] == b->v[4] && a->v[5] == b->v[5] && a->v[6] == b->v[6] && a->v[7] == b->v[7] && a->v[8] == b->v[8];
}
