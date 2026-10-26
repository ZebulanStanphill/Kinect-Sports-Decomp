// Releases two lists and four polymorphic owned objects through the system
// allocator. Placeholder types preserve the observed ownership layout.
#include <new>
#include "game/Allocator_825089A0.h"
struct Owned_82889F90 { virtual void vf00(int); };
struct List_82889F90 { void *head; int size; int allocator; };
struct State_82889F90 {
    int pad; Owned_82889F90 *a, *b, *c, *d;
    List_82889F90 first, second;
};
extern "C" void fn_82889DF0(List_82889F90 *);
static __forceinline void destroy(Owned_82889F90 *object)
{
    if (object) {
        object->vf00(0);
        fn_825089A0()->vf28(object);
    }
}
extern "C" void fn_82889F90(State_82889F90 *self)
{
    fn_82889DF0(&self->second);
    void *head = self->second.head;
    fn_825089A0()->vf28(head);
    fn_82889DF0(&self->first);
    head = self->first.head;
    fn_825089A0()->vf28(head);
    destroy(self->d);
    destroy(self->c);
    destroy(self->b);
    destroy(self->a);
}
