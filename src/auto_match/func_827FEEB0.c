typedef struct Quat_827FEEB0 {
    float x, y, z, w;
} Quat_827FEEB0;

typedef struct Data_827FEEB0 {
    char pad0[0xc];
    Quat_827FEEB0 rotation;
    char pad1c[3];
    unsigned char flags[4];
} Data_827FEEB0;

typedef struct Node_827FEEB0 {
    char pad0[0x30];
    Data_827FEEB0 *data;
} Node_827FEEB0;

typedef struct Handle_827FEEB0 {
    Node_827FEEB0 *node;
} Handle_827FEEB0;

extern void fn_8280DD50(Quat_827FEEB0 *q);

void fn_827FEEB0(Handle_827FEEB0 *self, Quat_827FEEB0 *out)
{
    Node_827FEEB0 *node = self->node;
    Data_827FEEB0 *data = node->data;
    if (data->flags[0] == 0 && data->flags[1] == 0 && data->flags[2] == 0 && data->flags[3] == 0) {
        fn_8280DD50(out);
        return;
    }
    out->x = node->data->rotation.x;
    out->y = node->data->rotation.y;
    out->z = node->data->rotation.z;
    out->w = node->data->rotation.w;
}
