typedef struct Element_82551D80 { unsigned char pad[0x10]; int a,b; } Element_82551D80;
static __forceinline unsigned char Less(Element_82551D80 *a, Element_82551D80 *b) {
    if (a->a == b->a) return a->b < b->b;
    return a->a < b->a;
}
static __forceinline void Swap(Element_82551D80 *a, Element_82551D80 *b) {
    Element_82551D80 tmp = *a; *a = *b; *b = tmp;
}
void fn_82551D80(Element_82551D80 *a, Element_82551D80 *b, Element_82551D80 *c) {
    if (Less(b,a)) Swap(b,a);
    if (Less(c,b)) Swap(c,b);
    if (Less(b,a)) Swap(b,a);
}
