// Tests whether the global tree contains an active item in one of four slots.
// The tree is initialized lazily, and its sentinel is allocated through the
// system object with category 0. The placeholder node and item layouts retain
// the observed fields. Each iterator's node is cached across initialization;
// the selected item is read again after the slot test before its null check.

#include <new>
#include "game/Allocator_825089A0.h"
struct Item_828EB650 {
    char pad[0x70];
    unsigned slot;
    char pad2[0x14];
    bool active;
};
struct Node_828EB650 {
    Node_828EB650 *left,*parent,*right;
    int key;
    Item_828EB650 *value;
    unsigned char color,isnil;
};
struct Tree_828EB650 {
    int comp;
    Node_828EB650 *head;
    unsigned size;
};
extern "C" {
    extern Tree_828EB650 lbl_83214504;
    extern unsigned lbl_83214514;
    void fn_831418A0();
    int atexit(void (*)());
    void fn_828EA790(Node_828EB650 **);
}
static __forceinline Tree_828EB650 *tree(unsigned &guard) {
    if (!(guard&1)) {
        lbl_83214514=guard|1;
        lbl_83214504.size=0;
        lbl_83214504.head=(Node_828EB650 *)fn_825089A0()->vf24(24,0);
        lbl_83214504.head->left=lbl_83214504.head;
        lbl_83214504.head->parent=lbl_83214504.head;
        lbl_83214504.head->right=lbl_83214504.head;
        lbl_83214504.head->color=1;
        lbl_83214504.head->isnil=1;
        atexit(fn_831418A0);
        guard=lbl_83214514;
    }
    return &lbl_83214504;
}
extern "C" bool fn_828EB650() {
    unsigned guard=lbl_83214514;
    for(unsigned slot=0;slot<4;++slot) {
        Node_828EB650 *node=tree(guard)->head->left;
        Node_828EB650 *it=node;
        for (;;) {

            if (node==tree(guard)->head) break;
            Item_828EB650 *item=node->value;
            if(item->slot==slot) {
                Item_828EB650 *selected=node->value;
                if(selected && selected->active) return true;
                break;
            }
            fn_828EA790(&it);
            node=it;
        }
    }
    return false;
}
