typedef struct Chunk_828FA798 { struct Chunk_828FA798 *next; char data[1]; } Chunk_828FA798;
typedef struct { char pad[0x10]; Chunk_828FA798 *head; unsigned total; } Obj_828FA798;
extern void *fn_8265C940(unsigned, unsigned);
extern void *memcpy(void *, const void *, unsigned);
extern unsigned strlen(const char *);

int fn_828FA798(Obj_828FA798 *o, const char *s)
{
  unsigned n = strlen(s) + 1;
  Chunk_828FA798 *c = (Chunk_828FA798 *)fn_8265C940(n + 4, 0x24810000);
  if (c == 0)
    return 0x8007000e;
  c->next = o->head;
  o->head = c;
  o->total = o->total + n - 1;
  memcpy(c->data, s, n);
  return 0;
}
