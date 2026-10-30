typedef struct Obj_82AE9340 {
    int pad0[3];
    unsigned int flags;
} Obj_82AE9340;
typedef struct Inner_82AE9340 {
    int pad0[2];
    unsigned int bits;
} Inner_82AE9340;
typedef struct Item_82AE9340 {
    unsigned int flags;
    int pad[2];
    Inner_82AE9340 *inner;
} Item_82AE9340;
typedef struct Outer_82AE9340 {
    int pad[2];
    unsigned int bits;
    int pad2[8];
    Item_82AE9340 *items[1];
} Outer_82AE9340;

int fn_82AE9340(Outer_82AE9340 *param_1)
{
    unsigned int i;
    unsigned int n;
    unsigned int t;
    Item_82AE9340 **p;
    unsigned char ok;

    i = 0;
    n = (param_1->bits >> 19) & 7;
    if (n != 0) {
        p = param_1->items;
        do {
            t = ((*p)->inner->bits >> 7) & 0x7f;
            ok = t == 0x7d || t == 0x7c;
            if (ok && ((*p)->flags & 8) != 0) {
                return 1;
            }
            i++;
            p++;
        } while (i < n);
    }
    return 0;
}
