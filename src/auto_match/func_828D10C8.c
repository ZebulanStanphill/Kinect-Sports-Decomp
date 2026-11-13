typedef struct Element_828D10C8 { unsigned char b[0xc4]; } Element_828D10C8;
typedef struct Vector_828D10C8 { Element_828D10C8 *first, *last, *end; } Vector_828D10C8;
Element_828D10C8 **fn_828D10C8(Element_828D10C8 **ret, Vector_828D10C8 *v, Element_828D10C8 *first, Element_828D10C8 *last) {
    *ret = first;
    if (first != last) {
        Element_828D10C8 *end = v->last;
        Element_828D10C8 *dst = first;
        Element_828D10C8 *src = last;
        for (; src != end; src++, dst++) *dst = *src;
        v->last = dst;
    }
    return ret;
}
