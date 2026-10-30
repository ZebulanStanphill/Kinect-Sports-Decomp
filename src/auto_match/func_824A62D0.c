typedef struct Ring_824A62D0 { char *beg; char *end; char *rd; char *wr; unsigned int cnt; } Ring_824A62D0;
extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_824A62D0(Ring_824A62D0 *r, unsigned char *item)
{
    char *w;
    if ((r->end - r->beg) / 0x60 == r->cnt) {
        if (r->cnt != 0) {
            memcpy(r->wr, item, 0x60);
            { char **pw = &r->wr; *pw += 0x60; if (*pw == r->end) *pw = r->beg; }

            r->rd = r->wr;
        }
    } else {
        if (r->wr != 0)
            memcpy(r->wr, item, 0x60);
        { char **pw = &r->wr; *pw += 0x60; if (*pw == r->end) *pw = r->beg; }

        r->cnt++;
    }
}
