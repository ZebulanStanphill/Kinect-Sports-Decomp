typedef struct Node_8257EF78 Node_8257EF78;
typedef struct Object_8257EF78 Object_8257EF78;

typedef struct Vtable_8257EF78 {
    void *unused[5];
    void (*update)(Object_8257EF78 *self, char *context);
} Vtable_8257EF78;

struct Object_8257EF78 {
    Vtable_8257EF78 *vtable;
    char padding[0xb38];
    float value; /* 0xb3c */
    float scale; /* 0xb40 */
};

struct Node_8257EF78 {
    int unused;
    Node_8257EF78 *next;  /* 0x04 */
    Node_8257EF78 *child; /* 0x08 */
};

extern float lbl_8327F880[6];

void fn_8257EF78(Node_8257EF78 *node, char *context)
{
    Node_8257EF78 *self = node;
    if (self != 0) {
        do {
            Node_8257EF78 *next = self->next;
            Object_8257EF78 *object = (Object_8257EF78 *)((char *)self - 0x40);
            if (*(int *)((char *)self - 8) == 0) {
                float scale;
                if (*(float *)(context + 0x838) > 0.0f) {
                    scale = 0.0f;
                } else {
                    scale = *(float *)(context + 0x820) * lbl_8327F880[5];
                }
                object->value = object->scale * scale;
                object->vtable->update(object, context);
            }
            if (self->child != 0) {
                fn_8257EF78(self->child, context);
            }
            self = next;
        } while (self != 0);
    }
}
