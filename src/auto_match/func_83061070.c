typedef struct Node_83061070 {
    int unknown;
    struct Node_83061070 *next; /* 0x04 */
} Node_83061070;

typedef struct Vector_83061070 {
    float x;
    float y;
    float z;
} Vector_83061070;

typedef struct Bounds_83061070 {
    Vector_83061070 first;
    Vector_83061070 second;
} Bounds_83061070;

typedef struct Owner_83061070 {
    Vector_83061070 *points; /* 0x00 */
    Node_83061070 *head;     /* 0x04 */
    char padding[0x10];
    int count; /* 0x18 */
} Owner_83061070;

extern int fn_8305D7D0(Node_83061070 *, Bounds_83061070 *);
extern float fn_83066DD8(Bounds_83061070 *, Vector_83061070 *);

static __forceinline void Advance(Node_83061070 **node)
{
    if (*node != 0) {
        *node = (*node)->next;
    }
}

float fn_83061070(Owner_83061070 *self, Node_83061070 **out)
{
    Node_83061070 *node = self->head;
    float best = 3.402823466e+38f;

    if (node != 0) {
        do {
            Bounds_83061070 bounds;
            float minimum = 0.0f;
            float maximum = 0.0f;
            int index;
            float width;

            fn_8305D7D0(node, &bounds);
            for (index = 0; index < self->count; index++) {
                Vector_83061070 *points = self->points;
                float value = fn_83066DD8(&bounds, &points[index]);
                if (value < minimum) {
                    minimum = value;
                }
                if (value > maximum) {
                    maximum = value;
                }
            }
            width = maximum - minimum;
            if (width < best) {
                best = width;
                if (out != 0) {
                    *out = node;
                }
            }
            Advance(&node);
        } while (node != 0);
    }
    return best;
}
