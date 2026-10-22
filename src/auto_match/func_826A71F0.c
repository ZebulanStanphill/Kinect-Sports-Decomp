typedef struct {
    unsigned char *base;
    int pad;
    int pos;
    unsigned int flag;
} Stream;

extern void *fn_8267BED0(int a, int n, int c);
void *memcpy(void *dst, const void *src, unsigned int n);

void fn_826A71F0(int param_1, Stream *s, int n)
{
    void *p;

    if (s->flag != 0) {
        s->pos = s->pos + 1;
    }
    s->flag = 0;
    p = fn_8267BED0(param_1, n, 0);
    *(void **)(param_1 + 8) = p;
    memcpy(p, s->base + s->pos, n);
    *(int *)(param_1 + 0xc) = n;
    if (s->flag != 0) {
        s->pos = s->pos + 1;
    }
    s->flag = 0;
    s->pos = n + s->pos;
}
