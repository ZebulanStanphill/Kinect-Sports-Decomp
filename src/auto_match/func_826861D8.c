extern unsigned int fn_8268AF48(void *a, unsigned int b, unsigned int c);

typedef struct { unsigned int len; int x; char data[1]; } N;
typedef struct { char pad[8]; unsigned int key; int pad2; N *ptr; } S;

static N *get(S *p) { return (N *)((unsigned int)p->ptr & ~3); }
static unsigned int len(S *p) { return get(p)->len & 0x7fffffff; }
static char *data(S *p) { return get(p)->data; }

unsigned int fn_826861D8(S *p)
{
    unsigned int h = fn_8268AF48(data(p), len(p), 0x1505);
    return p->key ^ h;
}
