#include "xdk/vectorintrinsics.h"

typedef struct Node_8266F5A0 {
    unsigned int value;
    char pad[12];
    __vector4 position;
    float expiry;
    struct Node_8266F5A0 *next;
} Node_8266F5A0;

typedef struct Owner_8266F5A0 {
    char pad[0xec];
    Node_8266F5A0 *head;
} Owner_8266F5A0;

extern void *fn_82522D98(unsigned int);

void fn_8266F5A0(Owner_8266F5A0 *self, unsigned int value, const __vector4 *position, float time)
{
    Node_8266F5A0 *node = (Node_8266F5A0 *)fn_82522D98(0x30);
    node->value = value;
    node->position = *position;
    node->expiry = time + 0.2f;
    node->next = self->head;
    self->head = node;
}
