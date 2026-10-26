// Find a matching service entry whose timestamp is less than 350 ticks old.
typedef unsigned __int64 U64;
struct Entry_828B2448;
struct Object_828B2448 {
    virtual void vf00(); virtual void vf04(); virtual Entry_828B2448 *vf08();
};
struct Node_828B2448 { Node_828B2448 *next, *prev; Object_828B2448 *object; };
struct List_828B2448 { int pad[3]; Node_828B2448 *head; };
struct System_828B2448 {
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual U64 vf0C();
};
extern "C" {
System_828B2448 *fn_825089A0();
const U64 *fn_828B2DE8(Entry_828B2448 *);
U64 fn_828B2E60(Entry_828B2448 *);
bool fn_828B2448(List_828B2448 *self, const U64 *key) {
    for (Node_828B2448 *node = self->head->next; node != self->head; node = node->next) {
        Entry_828B2448 *entry = node->object->vf08();
        if (entry && *fn_828B2DE8(entry) == *key) {
            U64 now = fn_825089A0()->vf0C();
            return now - fn_828B2E60(entry) < 350;
        }
    }
    return false;
}
}
