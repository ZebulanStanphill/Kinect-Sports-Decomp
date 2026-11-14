typedef struct Element_82BE7C48 Element_82BE7C48;
typedef struct ElementVtbl_82BE7C48 {
    void (*destroy)(Element_82BE7C48 *self, int flags);
} ElementVtbl_82BE7C48;
struct Element_82BE7C48 {
    ElementVtbl_82BE7C48 *vt;
};
typedef struct Request_82BE7C48 {
    char pad[0x84];
    Element_82BE7C48 *element;
} Request_82BE7C48;

extern void *fn_82BE56B0(unsigned int size);
extern Element_82BE7C48 *fn_82BF2F08(void *mem);
extern int fn_82BF3138(Element_82BE7C48 *element, Request_82BE7C48 *r);
extern void *fn_82BE6590(Element_82BE7C48 *element);
extern void *fn_82BEB9B8(Request_82BE7C48 *r, Element_82BE7C48 *element);
extern void fn_82BE66A0(Element_82BE7C48 *element);

void fn_82BE7C48(Request_82BE7C48 *r)
{
    void *mem;
    Element_82BE7C48 *element;

    if (r->element == 0) {
        mem = fn_82BE56B0(0x50);
        if (mem != 0) {
            element = fn_82BF2F08(mem);
        } else {
            element = 0;
        }
        if (element != 0) {
            if (fn_82BF3138(element, r) == 0) {
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
