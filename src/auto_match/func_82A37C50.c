typedef struct Chunk { unsigned int id; unsigned short words; unsigned short pad; } Chunk;
typedef struct { int a; Chunk *begin; Chunk *end; unsigned int count; } Table;

void *fn_82A37C50(Table *t, unsigned int id, unsigned int *size)
{
  if (t->count > 0) {
    unsigned int *p = (unsigned int *)t->begin;
    for (; p != (unsigned int *)t->end && *p != id; p += ((Chunk *)p)->words) {
    }
    if (p != (unsigned int *)t->end) {
      *size = ((Chunk *)p)->words * 4 - 8;
      return p + 2;
    }
  }
  *size = 0;
  return 0;
}
