#include "xdk/vectorintrinsics.h"

typedef struct Vertex_82D1EE70 {
    char reserved[0x10];
    __vector4 position;
} Vertex_82D1EE70;

typedef struct Node_82D1EE70 {
    struct Node_82D1EE70 *next; /* 0x0 */
    int reserved4;
    Vertex_82D1EE70 *first;  /* 0x8 */
    Vertex_82D1EE70 *second; /* 0xc */
    Vertex_82D1EE70 *third;  /* 0x10 */
    char reserved14[0xc];
    float normal[4]; /* 0x20 */
} Node_82D1EE70;

typedef struct State_82D1EE70 {
    char reserved[0x2c];
    Node_82D1EE70 *head;
} State_82D1EE70;

extern const __vector4 lbl_8323B1A0;
extern unsigned char fn_82D1EB20(State_82D1EE70 *, const __vector4 *, const __vector4 *, const __vector4 *,
                                 __vector4 *, int);

void fn_82D1EE70(State_82D1EE70 *self)
{
    Node_82D1EE70 *node;
    __vector4 result;
    for (node = self->head; node; node = node->next) {
        __vector4 *normal = (__vector4 *)node->normal;
        *normal = lbl_8323B1A0;
        if (fn_82D1EB20(self, &node->first->position, &node->second->position, &node->third->position,
                        &result, 1)) {
            *normal = result;
        }
    }
}
