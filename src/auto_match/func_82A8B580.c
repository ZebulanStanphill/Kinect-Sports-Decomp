typedef unsigned int size_t;
void *memcpy(void *, const void *, size_t);

typedef struct {
    int pad;
    unsigned int size;
    unsigned int offset;
    char *data;
    unsigned int pos;
} Writer;

int fn_82A8B580(Writer *w, const void *src, unsigned int req, unsigned int *out)
{
    unsigned int avail = w->size - w->pos;
    *out = req > avail ? avail : req;
    memcpy(w->data + w->offset + w->pos, src, *out);
    w->pos += *out;
    return *out == req;
}
