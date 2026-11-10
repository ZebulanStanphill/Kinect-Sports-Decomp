typedef struct Element_82830088 { unsigned char bytes[0x20]; } Element_82830088;
typedef struct Vector_82830088 { Element_82830088 *first, *last, *end; } Vector_82830088;
Element_82830088 **fn_82830088(Element_82830088 **ret, Vector_82830088 *v, Element_82830088 *first, Element_82830088 *last) {
    *ret = first;
    if (first != last) {
        Element_82830088 *end = v->last;
        Element_82830088 *dst = first;
        Element_82830088 *src = last;
        Element_82830088 *p;
        for (; src != end; src++, dst++) *dst = *src;
        for (p = dst; p != v->last; p++) {}
        v->last = dst;
    }
    return ret;
}
