typedef struct Element_828C3EF0 { void *p; } Element_828C3EF0;
typedef struct Vector_828C3EF0 { Element_828C3EF0 *first, *last, *end; char al; } Vector_828C3EF0;
extern Element_828C3EF0 *fn_828B63C8(Element_828C3EF0 *dst, Element_828C3EF0 *src);
extern void fn_828A30A0(Element_828C3EF0 *first, Element_828C3EF0 *last, void *al);
Element_828C3EF0 **fn_828C3EF0(Element_828C3EF0 **ret, Vector_828C3EF0 *v, Element_828C3EF0 *first, Element_828C3EF0 *last) {
    *ret = first;
    if (first != last) {
        Element_828C3EF0 *end = v->last;
        Element_828C3EF0 *dst = first;
        Element_828C3EF0 *src = last;
        for (; src != end; src++, dst++) fn_828B63C8(dst, src);
        fn_828A30A0(dst, v->last, &v->al);
        v->last = dst;
    }
    return ret;
}
