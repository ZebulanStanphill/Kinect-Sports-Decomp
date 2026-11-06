typedef struct { int f00[6]; int count; int score; } Item_827CB680;

Item_827CB680 *fn_827CB680(Item_827CB680 *items, int n)
{
    int best = 0;
    Item_827CB680 *res = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (items[i].score > best && items[i].count > 0) {
            res = &items[i];
            best = items[i].score;
        }
    }
    return res;
}
