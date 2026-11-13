typedef __declspec(align(16)) struct Item_824B2A10 { __int64 v[10]; } Item_824B2A10;

typedef struct Ring_824B2A10 { Item_824B2A10 *beg; Item_824B2A10 *end; Item_824B2A10 *rd; Item_824B2A10 *wr; unsigned int cnt; } Ring_824B2A10;

void fn_824B2A10(Ring_824B2A10 *r, Item_824B2A10 *item)
{
    if ((unsigned int)(r->end - r->beg) == r->cnt) {
        if (r->cnt != 0) {
            *r->wr = *item;
            { Item_824B2A10 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

            r->rd = r->wr;
        }
    } else {
        if (r->wr != 0)
            *r->wr = *item;
        { Item_824B2A10 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

        r->cnt++;
    }
}
