typedef unsigned int Item_8282F098;
extern void fn_8282EB50(Item_8282F098 *, int, int, Item_8282F098 *, int);
void fn_8282F098(Item_8282F098 *first, Item_8282F098 *last, int pred) {
    int bytes = (char *)last - (char *)first;
    if ((bytes & ~3) > 4) {
    Item_8282F098 *base = first - 1;
    do {
        Item_8282F098 value = *(Item_8282F098 *)((char *)base + bytes);
        int next = bytes - 4;
        *(Item_8282F098 *)((char *)base + bytes) = *first;
        fn_8282EB50(first, 0, next >> 2, &value, pred);
        bytes = next;
    } while ((bytes & ~3) > 4);
    }
}
