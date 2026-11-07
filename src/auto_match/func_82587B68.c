typedef struct Elem_82587B68 {
    int v[3];
} Elem_82587B68;

typedef struct Range_82587B68 {
    Elem_82587B68 *items;
    int f4;
    int lo;
    int hi;
} Range_82587B68;

typedef struct Table_82587B68 {
    Range_82587B68 first;
    int count;
    Range_82587B68 *ranges[1];
} Table_82587B68;

extern Table_82587B68 lbl_831C0BB0;

Elem_82587B68 *fn_82587B68(int i)
{
    Range_82587B68 *r = &lbl_831C0BB0.first;
    int j;

    if (i < r->lo || i >= r->hi) {
        for (j = 0; j < lbl_831C0BB0.count; j++) {
            r = lbl_831C0BB0.ranges[j];
            if (i >= r->lo && i < r->hi) {
                goto found;
            }
        }
        r = 0;
    }
found:
    return r->items + (i - r->lo);
}
