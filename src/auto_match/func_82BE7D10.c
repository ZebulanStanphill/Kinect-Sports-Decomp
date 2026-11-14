typedef struct Element_82BE7D10 Element_82BE7D10;
typedef struct ElementVtbl_82BE7D10 {
    void (*destroy)(Element_82BE7D10 *self, int flags);
} ElementVtbl_82BE7D10;
struct Element_82BE7D10 {
    ElementVtbl_82BE7D10 *vt;
};
typedef struct Request_82BE7D10 {
    char pad[0x88];
    Element_82BE7D10 *element;
} Request_82BE7D10;

extern void *fn_82BE56B0(unsigned int size);
extern Element_82BE7D10 *fn_82BF31A0(void *mem);
extern int fn_82BF34B8(Element_82BE7D10 *element, Request_82BE7D10 *r);
extern void *fn_82BE6590(Element_82BE7D10 *element);
extern void *fn_82BEB9B8(Request_82BE7D10 *r, Element_82BE7D10 *element);
extern void fn_82BE66A0(Element_82BE7D10 *element);

void fn_82BE7D10(Request_82BE7D10 *r)
{
    void *mem;
    Element_82BE7D10 *element;

    if (r->element == 0) {
        mem = fn_82BE56B0(0x50);
        if (mem != 0) {
            element = fn_82BF31A0(mem);
        } else {
            element = 0;
        }
        if (element != 0) {
            if (fn_82BF34B8(element, r) == 0) {
                element->vt->destroy(element, 1);
                return;
            }
            if (fn_82BE6590(element) != 0) {
                element->vt->destroy(element, 1);
                return;
            }
            if (fn_82BEB9B8(r, element) != 0) {
                fn_82BE66A0(element);
                element->vt->destroy(element, 1);
                return;
            }
            r->element = element;
        }
    }
}
