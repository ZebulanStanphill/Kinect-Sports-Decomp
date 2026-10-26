// Updates the tree's objects using one system clock sample and deletes those
// whose update reports completion. The iterator advances before deletion.
struct Clock_828C3DD8 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
extern "C" Clock_828C3DD8 *fn_825089A0();
struct Object_828C3DD8 { virtual void destroy(unsigned int); };
struct Node_828C3DD8 { Node_828C3DD8 *next; int pad[2]; Object_828C3DD8 *object; };
struct State_828C3DD8 { char pad[0x1c4]; Node_828C3DD8 *head; };
extern "C" void fn_828A0E20(Node_828C3DD8 **);
extern "C" bool fn_828B7EE0(Object_828C3DD8 *, unsigned __int64);
extern "C" void fn_828C3DD8(State_828C3DD8 *self)
{
    unsigned __int64 time = fn_825089A0()->vf0C();
    Node_828C3DD8 *it = self->head->next;
    while (it != self->head) {
        Object_828C3DD8 *object = it->object;
        fn_828A0E20(&it);
        if (fn_828B7EE0(object, time) && object) object->destroy(1);
    }
}
