typedef struct Reader_82BE5D50 {
    char pad[0x1c];
    unsigned char *data;
    int pos;
    int end;
    int count;
} Reader_82BE5D50;

extern float fn_82BA02A8(float value);

static __forceinline int CanRead(Reader_82BE5D50 *r, int n)
{
    return r->data != 0 && r->count > 0 && r->end - r->pos >= n;
}

float fn_82BE5D50(Reader_82BE5D50 *r)
{
    unsigned int raw;
    if (!CanRead(r, 4)) {
        return 0.0f;
    }
    raw = *(unsigned int *)(r->data + r->pos);
    r->pos += 4;
    return fn_82BA02A8(*(float *)&raw);
}
