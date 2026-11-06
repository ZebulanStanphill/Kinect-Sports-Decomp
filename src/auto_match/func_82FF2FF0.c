typedef struct Iface_82FF2FF0 Iface_82FF2FF0;

typedef struct IfaceVtbl_82FF2FF0 {
    void (*Notify)(Iface_82FF2FF0 *self, int a, int b);
} IfaceVtbl_82FF2FF0;

struct Iface_82FF2FF0 {
    IfaceVtbl_82FF2FF0 *vt;
};

typedef struct Res_82FF2FF0 {
    int pad0[3];
    void *handle;
} Res_82FF2FF0;

typedef struct Node_82FF2FF0 Node_82FF2FF0;
struct Node_82FF2FF0 {
    int pad0;
    Iface_82FF2FF0 iface;
    int pad8[2];
    Node_82FF2FF0 *next;
    int pad14;
    unsigned int key;
    char pad1c[0x68 - 0x1c];
    Res_82FF2FF0 *res;
};

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_83011240(void *mgr, void *handle, int flags);
extern void *lbl_832642E4;
extern Node_82FF2FF0 *lbl_83264574;
extern char lbl_83264580[];

void fn_82FF2FF0(unsigned int key)
{
    Node_82FF2FF0 *n;

    RtlEnterCriticalSection(lbl_83264580);
    for (n = lbl_83264574; n != 0; n = n->next) {
        if (n->key == key) {
            n->iface.vt->Notify(&n->iface, 0, 0);
            fn_83011240(lbl_832642E4, n->res->handle, 0);
        }
    }
    RtlLeaveCriticalSection(lbl_83264580);
}
