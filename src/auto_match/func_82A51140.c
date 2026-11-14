typedef struct {
    unsigned char pad[0x10];
    float value;
} Param_82A51140;

typedef struct {
    unsigned char pad[0x48];
    float value;
} Key_82A51140;

typedef struct {
    int unk0;
    Key_82A51140 *key;
    Param_82A51140 *param;
} Entry_82A51140;

typedef struct Node_82A51140 {
    Entry_82A51140 *entry;
    struct Node_82A51140 *next;
} Node_82A51140;

typedef struct {
    unsigned char pad[0x20];
    Node_82A51140 *entries;
} Obj_82A51140;

extern int fn_82A43408(Param_82A51140 *param, int arg);

static __forceinline Entry_82A51140 *GetNext(Node_82A51140 **pos)
{
    Node_82A51140 *node = *pos;
    if (node != 0) {
        *pos = node->next;
        return node->entry;
    }
    return 0;
}

void fn_82A51140(Obj_82A51140 *self, Key_82A51140 *key, int arg)
{
    Node_82A51140 *pos = self->entries;
    while (pos != 0) {
        Entry_82A51140 *e = GetNext(&pos);
        if (e->key == key) {
            Param_82A51140 *param = e->param;
            float value = e->key->value;
            if (param->value == value)
                return;
            param->value = value;
            fn_82A43408(param, arg);
            return;
        }
    }
}
