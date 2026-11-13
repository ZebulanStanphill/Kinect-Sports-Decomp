typedef __declspec(align(16)) struct Item_824AE6C0 { __int64 v[8]; } Item_824AE6C0;

typedef struct Ring_824AE6C0 { Item_824AE6C0 *beg; Item_824AE6C0 *end; Item_824AE6C0 *rd; Item_824AE6C0 *wr; unsigned int cnt; } Ring_824AE6C0;

void fn_824AE6C0(Ring_824AE6C0 *r, Item_824AE6C0 *item)
{
    if ((unsigned int)(r->end - r->beg) == r->cnt) {
        if (r->cnt != 0) {
            *r->wr = *item;
            { Item_824AE6C0 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

            r->rd = r->wr;
        }
    } else {
        if (r->wr != 0)
            *r->wr = *item;
        { Item_824AE6C0 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

        r->cnt++;
    }
}
