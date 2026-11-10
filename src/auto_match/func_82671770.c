typedef struct Element_82671770 { unsigned char bytes[0x40]; } Element_82671770;
typedef struct Vector_82671770 { Element_82671770 *first, *last, *end; } Vector_82671770;
Element_82671770 **fn_82671770(Element_82671770 **ret, Vector_82671770 *v, Element_82671770 *first, Element_82671770 *last) {
    *ret = first;
    if (first != last) {
        Element_82671770 *end = v->last;
        Element_82671770 *dst = first;
        Element_82671770 *src = last;
        Element_82671770 *p;
        for (; src != end; src++, dst++) *dst = *src;
        for (p = dst; p != v->last; p++) {}
        v->last = dst;
    }
    return ret;
}
