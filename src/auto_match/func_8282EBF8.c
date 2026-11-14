typedef unsigned int Item_8282EBF8;
extern void fn_8282EB50(Item_8282EBF8 *first, int hole, int bottom, Item_8282EBF8 *value, int pred);

void fn_8282EBF8(Item_8282EBF8 *first, Item_8282EBF8 *last, int pred)
{
    int bottom = last - first;
    int hole;
    for (hole = bottom / 2; 0 < hole;) {
        Item_8282EBF8 value;
        --hole;
        value = first[hole];
        fn_8282EB50(first, hole, bottom, &value, pred);
    }
}
