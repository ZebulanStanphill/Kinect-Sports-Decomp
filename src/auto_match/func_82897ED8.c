typedef struct RefObj_82897ED8 RefObj_82897ED8;

typedef struct {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void *slot10;
    void (*destroy)(RefObj_82897ED8 *self, int flags);
} RefObjVtbl_82897ED8;

struct RefObj_82897ED8 {
    RefObjVtbl_82897ED8 *vt;
    int refs;
};

void fn_82897ED8(RefObj_82897ED8 **dst, RefObj_82897ED8 **src)
{
    RefObj_82897ED8 *old = *dst;
    if (old != 0) {
        if (--old->refs == 0) {
            old->vt->destroy(old, 1);
        }
    }
    if (*src != 0) {
        (*src)->refs++;
    }
    *dst = *src;
}
