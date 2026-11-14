typedef struct Node_83009C40 {
    struct Node_83009C40 *next;
    char pad4[0x10];
    float value;                /* 0x14 */
} Node_83009C40;

typedef struct Owner_83009C40 {
    char pad0[0x58];
    float minimum;              /* 0x58 */
    char pad5C[0x20];
    Node_83009C40 *nodes;       /* 0x7c */
} Owner_83009C40;

float fn_83009C40(Owner_83009C40 *self)
{
    float sum = 0.0f;
    Node_83009C40 *node;

    for (node = self->nodes; node != 0; node = node->next)
        sum += node->value;
    if (sum < self->minimum)
        return self->minimum;
    return sum;
}
