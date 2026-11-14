typedef struct Elem_82275D00 {
    int id;
    int key;
} Elem_82275D00;

static __forceinline Elem_82275D00 *Copy(Elem_82275D00 *s, Elem_82275D00 *e, Elem_82275D00 *d)
{
    for (; s != e; s++, d++)
        *d = *s;
    return d;
}

Elem_82275D00 *fn_82275D00(Elem_82275D00 *first1, Elem_82275D00 *last1, Elem_82275D00 *first2, Elem_82275D00 *last2, Elem_82275D00 *dest)
{
    for (; first1 != last1 && first2 != last2; dest++) {
        if (first2->key < first1->key) {
            *dest = *first2;
            first2++;
        } else {
            *dest = *first1;
            first1++;
        }
    }
    dest = Copy(first1, last1, dest);
    return Copy(first2, last2, dest);
}
