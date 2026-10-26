// Updates the manager that fn_828A12E8 returns. Its first list drops objects
// whose vf0C reports them finished and its second list those fn_8288F588
// accepts. Then each timed entry of its tree whose duration (vf18) has passed,
// measured with the counter of the object fn_825089A0 returns and scaled by
// lbl_82006848, fires: the manager gets event 15 if the callback in the
// object is empty, and otherwise the object is marked triggered and its
// handler (or vf00(1)) runs. The tree iterator's increment stays a call to
// fn_8288B4F8. The classes keep placeholder names.
#include <list>

struct System_82890780 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual unsigned __int64 vf0C();
};

struct Object_82890780 {
    virtual void vf00(int flag);
    virtual void vf04();
    virtual void vf08();
    virtual bool vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual float vf18();
    char pad04[0x10];
    char callback[8];
    unsigned char triggered;
    char pad1d[0x1b];
    struct Callbacks_82890780 *callbacks;
};

struct Callbacks_82890780 {
    char pad[0x2c];
    void (*invoke)(Object_82890780 *object);
};

typedef std::list<Object_82890780 *> List_82890780;

struct Node_82890780 {
    Node_82890780 *left, *parent, *right;
    int key;
    Object_82890780 *object;
    unsigned __int64 tick;
};

struct Iterator_82890780 {
    Node_82890780 *node;
    Iterator_82890780(Node_82890780 *p) : node(p) {}
};

struct Tree_82890780 {
    int allocator;
    Node_82890780 *head;
    Iterator_82890780 begin() { return Iterator_82890780(head->left); }
};

struct Manager_82890780 {
    char pad[0x44];
    List_82890780 first, second;
    Tree_82890780 tree;
};

struct Temporary_82890780 {
    int data[2];
};

extern "C" {
double __u64tod(unsigned __int64 value);
Manager_82890780 *fn_828A12E8(void *self);
System_82890780 *fn_825089A0();
bool fn_8288F588(Object_82890780 *object);
void fn_8288B4F8(Iterator_82890780 *it);
void fn_828B5580(Temporary_82890780 *temporary, const void *callback);
int fn_828B55F8(Temporary_82890780 *temporary);
void fn_828B55B0(Temporary_82890780 *temporary);
void fn_828C8058(void *self, int event);
void fn_8265CA20(void *block);
extern float lbl_82006848;
}

// Keep the global delete entry point used by the existing matching units.
template <> __forceinline void std::allocator<List_82890780::_Node>::deallocate(List_82890780::_Node *p, unsigned int)
{
    fn_8265CA20(p);
}

extern "C" void fn_82890780(void *self)
{
    List_82890780::iterator first = fn_828A12E8(self)->first.begin();
    while (first != fn_828A12E8(self)->first.end()) {
        if ((*first)->vf0C())
            first = fn_828A12E8(self)->first.erase(first);
        else
            ++first;
    }

    List_82890780::iterator second = fn_828A12E8(self)->second.begin();
    while (second != fn_828A12E8(self)->second.end()) {
        Object_82890780 *object = *second;
        if (fn_8288F588(object))
            second = fn_828A12E8(self)->second.erase(second);
        else
            ++second;
    }

    unsigned __int64 now = fn_825089A0()->vf0C();
    Iterator_82890780 it = fn_828A12E8(self)->tree.begin();
    Node_82890780 *node = it.node;
    if (node != fn_828A12E8(self)->tree.head) {
        float scale = lbl_82006848;
        for (;;) {
            Object_82890780 *object = node->object;
            unsigned __int64 tick = node->tick;
            fn_8288B4F8(&it);
            float elapsed = (float)__u64tod(now - tick);
            float duration = object->vf18();
            if (elapsed * scale >= duration) {
                Temporary_82890780 temporary;
                fn_828B5580(&temporary, object->callback);
                bool empty = fn_828B55F8(&temporary) == 0;
                fn_828B55B0(&temporary);
                if (empty) {
                    fn_828C8058(self, 15);
                } else {
                    object->triggered = 1;
                    if (object->callbacks->invoke)
                        object->callbacks->invoke(object);
                    else
                        object->vf00(1);
                }
            }
            if (it.node == fn_828A12E8(self)->tree.head)
                break;
            node = it.node;
        }
    }
}
