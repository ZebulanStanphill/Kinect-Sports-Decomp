typedef struct B { unsigned int prev; unsigned int hdr; } B;
typedef struct S { char pad[0x10]; B *blk; unsigned int size; } S;

void fn_82D02FB0(S *s)
{
    s->blk->hdr = s->size | 1;
    *(unsigned int *)((char *)s->blk + s->size) = s->size;
}
