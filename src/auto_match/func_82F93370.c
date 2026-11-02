typedef struct Node_82F93370 Node_82F93370;
typedef struct Iter_82F93370 {
    void *cont;
    Node_82F93370 *ptr;
} Iter_82F93370;

extern char *fn_82F919B8(Node_82F93370 *);
extern Node_82F93370 **fn_82F953B8(Node_82F93370 *);
extern Node_82F93370 **fn_8265D5A8(Node_82F93370 *);
extern Node_82F93370 **fn_82F92208(Node_82F93370 *);
extern Node_82F93370 *fn_82F93630(Node_82F93370 *);
extern void __debugbreak(void);

void fn_82F93370(Iter_82F93370 *it)
{
    if (it->cont == 0)
        __debugbreak();
    if (*fn_82F919B8(it->ptr) != 0) {
        it->ptr = *fn_82F953B8(it->ptr);
        if (*fn_82F919B8(it->ptr) != 0)
            __debugbreak();
    } else if (*fn_82F919B8(*fn_8265D5A8(it->ptr)) == 0) {
        it->ptr = fn_82F93630(*fn_8265D5A8(it->ptr));
    } else {
        Node_82F93370 *pnode;
    again:
        pnode = *fn_82F92208(it->ptr);
        if (*fn_82F919B8(pnode) == 0) {
            if (it->ptr == *fn_8265D5A8(pnode)) {
                it->ptr = pnode;
                goto again;
            }
        }
        if (*fn_82F919B8(it->ptr) != 0)
            __debugbreak();
        else
            it->ptr = pnode;
    }
}
