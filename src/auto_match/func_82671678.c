typedef struct Elem_82671678 {
    unsigned char b[0x40];
} Elem_82671678;

typedef struct Vec_82671678 {
    Elem_82671678 *first;
    Elem_82671678 *last;
    Elem_82671678 *end;
} Vec_82671678;

Elem_82671678 **fn_82671678(Elem_82671678 **ret, Vec_82671678 *v, Elem_82671678 *where)
{
    Elem_82671678 *last = v->last;
    Elem_82671678 *src = where + 1;
    Elem_82671678 *dst = where;
    Elem_82671678 *p;
    Elem_82671678 *newLast;

    for (; src != last; src++, dst++) {
        *dst = *src;
    }
    newLast = v->last - 1;
    for (p = newLast; p != v->last; p++) {
    }
    v->last = newLast;
    *ret = where;
    return ret;
}
