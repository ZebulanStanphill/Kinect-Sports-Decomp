typedef struct Leaf_822A3450 {
    int flag;           /* 0x00 */
    char name[16];      /* 0x04 */
    int value;          /* 0x14 */
} Leaf_822A3450;        /* 0x18 */

typedef struct Inner_822A3450 {
    int flag;                   /* 0x00 */
    char pad04[0x10];           /* 0x04 */
    Leaf_822A3450 leaf[3];      /* 0x14 */
} Inner_822A3450;               /* 0x5c */

typedef struct Outer_822A3450 {
    int flag;                   /* 0x000 */
    Inner_822A3450 inner[10];   /* 0x004 */
} Outer_822A3450;               /* 0x39c */

typedef struct Root_822A3450 {
    char pad0000[0x1188];
    Outer_822A3450 outer[4];    /* 0x1188 */
    int dirty;                  /* 0x1ff8 */
} Root_822A3450;

void fn_822A3450(Root_822A3450 *p, int i, int j, int k, const char *src, int value)
{
    Outer_822A3450 *o;
    Inner_822A3450 *in;
    Leaf_822A3450 *lf;
    char *d;
    char *end;
    char c;

    o = &p->outer[i];
    o->flag = 1;
    in = &o->inner[j - 1];
    in->flag = 1;
    lf = &in->leaf[k - 1];
    lf->flag = 1;
    d = lf->name;
    end = d + 16;
    do {
        if (d >= end)
            break;
        c = *src;
        *d = c;
        d++;
        src++;
    } while (c != 0);
    if (d == end)
        d[-1] = 0;
    lf->value = value;
    p->dirty = 1;
}
