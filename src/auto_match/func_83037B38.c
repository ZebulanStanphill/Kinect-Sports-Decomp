typedef struct { char *data; unsigned int size; } Chunk;
typedef struct { Chunk *begin; Chunk *end; int pad[2]; unsigned int idx; unsigned int pos; } R;
char *fn_83037B38(R *r)
{
  Chunk *c = &r->begin[r->idx];
  unsigned int i, n;
  if (r->pos < c->size) {
    return c->data + r->pos;
  }
  i = r->idx + 1;
  r->pos = 0;
  n = r->end - r->begin;
  r->idx = i < n ? i : 0;
  return r->begin[r->idx].data;
}
