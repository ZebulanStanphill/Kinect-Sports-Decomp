typedef struct Node_83009C10 {
    struct Node_83009C10 *next;
    int pad[4];
    float value;
} Node_83009C10;

typedef struct Obj_83009C10 {
    char pad[0x7c];
    Node_83009C10 *head;
} Obj_83009C10;

extern float lbl_8217C06C;

void fn_83009C10(Obj_83009C10 *self)
{
    Node_83009C10 *n;
    for (n = self->head; n != 0; n = n->next) {
        if (n->value < lbl_8217C06C)
            return;
    }
}
