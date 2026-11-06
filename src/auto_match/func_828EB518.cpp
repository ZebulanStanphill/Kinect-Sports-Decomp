// Finds the registered object with an identifier by walking the tree that
// fn_828EB278 returns. The loop stops at the head of a second tree, which is
// initialized on first use: its guard bit is set, its size cleared, and its
// sentinel node allocated through the system object with category 0 and
// linked to itself, before atexit registers its destructor.
//
// fn_828EA790 advances the iterator. The game was built with link-time code
// generation, which knew that it changes nothing but the iterator, so the
// guard is read once before the loop and kept in a register. noalias on its
// declaration gives the compiler the same knowledge.

#include <new>
#include "game/Allocator_825089A0.h"

struct Object_828EB518 {
    char pad[0x70];
    unsigned int id;
};

struct Node_828EB518 {
    Node_828EB518 *left, *parent, *right;
    unsigned int key;
    Object_828EB518 *value;
    unsigned char color, isnil;
};

struct Tree_828EB518 {
    int comp;
    Node_828EB518 *head;
    unsigned int size;
};

extern "C" {
extern Tree_828EB518 lbl_83214504;
extern unsigned int lbl_83214514;
Tree_828EB518 *fn_828EB278();
__declspec(noalias) void fn_828EA790(Node_828EB518 **it);
void fn_831418A0();
int atexit(void (*func)());
}

static Tree_828EB518 *Registry()
{
    if ((lbl_83214514 & 1) == 0) {
        lbl_83214514 |= 1;
        lbl_83214504.size = 0;
        lbl_83214504.head = (Node_828EB518 *)fn_825089A0()->vf24(0x18, 0);
        lbl_83214504.head->left = lbl_83214504.head;
        lbl_83214504.head->parent = lbl_83214504.head;
        lbl_83214504.head->right = lbl_83214504.head;
        lbl_83214504.head->color = 1;
        lbl_83214504.head->isnil = 1;
        atexit(fn_831418A0);
    }
    return &lbl_83214504;
}

extern "C" Object_828EB518 *fn_828EB518(unsigned int id)
{
    Node_828EB518 *it = fn_828EB278()->head->left;
    for (;;) {
        if (it == Registry()->head)
            break;
        Object_828EB518 *value = it->value;
        if (value->id == id)
            return value;
        fn_828EA790(&it);
    }
    return 0;
}
