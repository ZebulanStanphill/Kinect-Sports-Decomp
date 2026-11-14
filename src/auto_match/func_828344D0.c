/* std::_Make_heap over 12-byte items (sibling of Matching fn_8282EBF8). */
typedef struct Item_828344D0 {
    unsigned int v[3];
} Item_828344D0;

extern void fn_82834388(Item_828344D0 *first, int hole, int bottom, Item_828344D0 *value, int pred);

void fn_828344D0(Item_828344D0 *first, Item_828344D0 *last, int pred)
{
    int bottom = last - first;
    int hole;
    for (hole = bottom / 2; 0 < hole;) {
        Item_828344D0 value;
        --hole;
        value = first[hole];
        fn_82834388(first, hole, bottom, &value, pred);
    }
}
