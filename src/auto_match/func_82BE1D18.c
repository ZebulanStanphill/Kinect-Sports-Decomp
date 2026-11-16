typedef struct Request_82BE1D18 Request_82BE1D18;

typedef struct Vtable_82BE1D18 {
    void (*destroy)(Request_82BE1D18 *self, unsigned int flags);
} Vtable_82BE1D18;

struct Request_82BE1D18 {
    Vtable_82BE1D18 *vtable;
};

typedef struct Core_82BE1D18 {
    char unused00[0x10];
    int ok; /* 0x10 */
} Core_82BE1D18;

typedef struct Manager_82BE1D18 {
    char unused00[0x170];
    char list[0x10];           /* 0x170 */
    Request_82BE1D18 *request; /* 0x180 */
} Manager_82BE1D18;

extern Core_82BE1D18 *lbl_8322B130;
extern char lbl_82196582[];
extern int fn_82BE5240(void *self, int code, const char *format, ...);
extern void *fn_82BE56B0(unsigned int size);
extern Request_82BE1D18 *fn_82BEA238(void *mem, const char *name, void *context);
extern void *fn_82BEB628(void *mem, Request_82BE1D18 *request);
extern int fn_82BE52B8(void *list, void *node);

int fn_82BE1D18(Manager_82BE1D18 *self, const char *name, void *context)
{
    void *memory;
    Request_82BE1D18 *request;
    void *node;
    int valid = name != 0 && *name != 0;
    if (!valid) {
        fn_82BE5240(self, 300, lbl_82196582);
        return 300;
    }
    memory = fn_82BE56B0(0x54);
    if (memory != 0) {
        request = fn_82BEA238(memory, name, context);
    } else {
        request = 0;
    }
    if (request == 0) {
        lbl_8322B130->ok = 0;
        return 0x65;
    }
    memory = fn_82BE56B0(0xc);
    if (memory != 0) {
        node = fn_82BEB628(memory, request);
    } else {
        node = 0;
    }
    if (node == 0) {
        request->vtable->destroy(request, 1);
        lbl_8322B130->ok = 0;
        return fn_82BE5240(lbl_8322B130, 0x65, "CMassiveListNode in ZoneManagerAdd");
    }
    fn_82BE52B8(self->list, node);
    self->request = request;
    return 0;
}
