typedef __declspec(align(16)) struct Item_824B2210 { __int64 v[6]; } Item_824B2210;

typedef struct Ring_824B2210 { Item_824B2210 *beg; Item_824B2210 *end; Item_824B2210 *rd; Item_824B2210 *wr; unsigned int cnt; } Ring_824B2210;

void fn_824B2210(Ring_824B2210 *r, Item_824B2210 *item)
{
    if ((unsigned int)(r->end - r->beg) == r->cnt) {
        if (r->cnt != 0) {
            *r->wr = *item;
            { Item_824B2210 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

            r->rd = r->wr;
        }
    } else {
        if (r->wr != 0)
            *r->wr = *item;
        { Item_824B2210 **pw = &r->wr; *pw += 1; if (*pw == r->end) *pw = r->beg; }

        r->cnt++;
    }
}
