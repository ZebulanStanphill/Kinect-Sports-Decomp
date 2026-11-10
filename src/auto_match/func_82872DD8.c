typedef struct Element_82872DD8 { unsigned char bytes[0x18]; } Element_82872DD8;
typedef struct Vector_82872DD8 { Element_82872DD8 *first, *last, *end; } Vector_82872DD8;
Element_82872DD8 **fn_82872DD8(Element_82872DD8 **ret, Vector_82872DD8 *v, Element_82872DD8 *first, Element_82872DD8 *last) {
    *ret = first;
    if (first != last) {
        Element_82872DD8 *end = v->last;
        Element_82872DD8 *dst = first;
        Element_82872DD8 *src = last;
        Element_82872DD8 *p;
        for (; src != end; src++, dst++) *dst = *src;
        for (p = dst; p != v->last; p++) {}
        v->last = dst;
    }
    return ret;
}
