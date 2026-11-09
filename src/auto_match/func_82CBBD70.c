void *memset(void *d, int c, unsigned int n);
extern void free(void *p);
typedef struct { int *data; unsigned int count; } Buf;

void fn_82CBBD70(Buf *b)
{
    if (b->data) {
        memset(b->data, 0, b->count * 4);
        free(b->data);
    }
    b->data = 0;
}
