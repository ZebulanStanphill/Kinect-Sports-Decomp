// Allocate a tree node through the system allocator with category zero.
// Initialize its links and flags, then construct the two-word value from a
// snapshot of the supplied value. The node and value names are placeholders.

#include <new>
#include "game/Allocator_825089A0.h"
struct Value_828EB1E8 { int first, second; Value_828EB1E8(int a,int b):first(a),second(b){} };
struct Node_828EB1E8 { Node_828EB1E8 *left,*parent,*right; Value_828EB1E8 value; unsigned char color,nil; };
struct Tree_828EB1E8 { int pad; Node_828EB1E8 *head; };
extern "C" Node_828EB1E8 *fn_828EB1E8(Tree_828EB1E8 *self, const Value_828EB1E8 *value) {
 Node_828EB1E8 *n=(Node_828EB1E8 *)fn_825089A0()->vf24(24,0);
 n->left=self->head; n->parent=self->head; n->right=self->head; n->color=0; n->nil=0;
 Value_828EB1E8 tmp(value->first,value->second); Value_828EB1E8 *dest=&n->value; if (dest) { dest->first=tmp.first; dest->second=tmp.second; }
 return n;
}
