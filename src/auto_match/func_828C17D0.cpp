// Release the object's owned entries, container sentinels, and callable.
// Placeholder layouts preserve the ownership and system allocator operations.
#include <new>
#include <list>
#include "game/Allocator_825089A0.h"
struct Element_828C0290 { char data; };
typedef std::list<Element_828C0290, Allocator_825089A0<Element_828C0290, 0> > EmptyList;
template <> void EmptyList::clear();
struct Owned_828C17D0 { virtual void destroy(unsigned int); };
struct Callable_828C17D0 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual void release(bool);
};
struct Node_828C17D0 {
    Node_828C17D0 *next, *prev;
    Owned_828C17D0 *value;
};
struct List_828C17D0 { Node_828C17D0 *head; unsigned int size; };
struct Iterator_828C17D0 {
    Node_828C17D0 *p;
    Iterator_828C17D0(Node_828C17D0 *v) : p(v) {}
};
struct Tree_828C17D0 { unsigned int allocator; Node_828C17D0 *head; unsigned int size; };
struct Function_828C17D0 {
    char storage[16]; Callable_828C17D0 *callable;
    void tidy() {
        if (callable) { callable->release(callable != (void *)this); callable = 0; }
    }
};
struct Object_828C17D0 {
    void *vtable;
    Tree_828C17D0 tree;
    char storage[16];
    Callable_828C17D0 *callable;
    unsigned int padding;
    void *resource;
    List_828C17D0 list;
    unsigned int padding2;
    Tree_828C17D0 tree2;
};
extern "C" {
extern char lbl_8202604C[], lbl_82026780[];
void fn_82A1E0B8(void *);
void fn_828C1318(Tree_828C17D0 *);
void fn_828C0A70(void *, Tree_828C17D0 *, Iterator_828C17D0, Iterator_828C17D0);
void fn_828C17D0(Object_828C17D0 *self) {
    self->vtable = lbl_8202604C;
    fn_82A1E0B8(self->resource);
    Tree_828C17D0 *tree = &self->tree;
    fn_828C1318(tree);
    List_828C17D0 *list = &self->list;
    Node_828C17D0 *node = list->head->next;
    while (node != list->head) {
        Owned_828C17D0 *value = node->value;
        node->value = 0;
        Node_828C17D0 *next = node->next;
        if (node != list->head) {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            fn_825089A0()->vf28(node);
            --list->size;
        }
        node = next;
        if (value) value->destroy(1);
    }
    char result[16];
    Tree_828C17D0 *tree2 = &self->tree2;
    fn_828C0A70(result, tree2, Iterator_828C17D0(tree2->head->next), Iterator_828C17D0(tree2->head));
    Node_828C17D0 *head = self->tree2.head;
    fn_825089A0()->vf28(head);
    reinterpret_cast<EmptyList *>(list)->clear();
    head = list->head;
    fn_825089A0()->vf28(head);
    reinterpret_cast<Function_828C17D0 *>(self->storage)->tidy();
    fn_828C1318(tree);
    head = *(Node_828C17D0 **)tree;
    fn_825089A0()->vf28(head);
    self->vtable = lbl_82026780;
}
}
