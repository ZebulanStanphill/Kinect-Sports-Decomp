typedef struct Elem_824BF608 {
    unsigned char b[0x28];
} Elem_824BF608;

typedef struct Vec_824BF608 {
    Elem_824BF608 *first;
    Elem_824BF608 *last;
    Elem_824BF608 *end;
} Vec_824BF608;

Elem_824BF608 **fn_824BF608(Elem_824BF608 **ret, Vec_824BF608 *v, Elem_824BF608 *where)
{
    Elem_824BF608 *last = v->last;
    Elem_824BF608 *src = where + 1;
    Elem_824BF608 *dst = where;
    Elem_824BF608 *p;
    Elem_824BF608 *newLast;

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
