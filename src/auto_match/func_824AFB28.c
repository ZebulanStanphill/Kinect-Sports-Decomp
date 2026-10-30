typedef struct Ring_824AFB28 { char *beg; char *end; char *rd; char *wr; unsigned int cnt; } Ring_824AFB28;
extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_824AFB28(Ring_824AFB28 *r, unsigned char *item)
{
    char *w;
    if ((r->end - r->beg) / 0xf0 == r->cnt) {
        if (r->cnt != 0) {
            memcpy(r->wr, item, 0xf0);
            { char **pw = &r->wr; *pw += 0xf0; if (*pw == r->end) *pw = r->beg; }

            r->rd = r->wr;
        }
    } else {
        if (r->wr != 0)
            memcpy(r->wr, item, 0xf0);
        { char **pw = &r->wr; *pw += 0xf0; if (*pw == r->end) *pw = r->beg; }

        r->cnt++;
    }
}
