typedef struct Entry_82781FA0 {
    int unk0;
    float value;
} Entry_82781FA0;

typedef struct Info_82781FA0 {
    float value;
    int unk4;
    int unk8;
    unsigned int key;
} Info_82781FA0;

typedef struct Node_82781FA0 {
    char pad0[0x14];
    Info_82781FA0 *info;
} Node_82781FA0;

typedef struct Handle_82781FA0 {
    int unk0;
    Node_82781FA0 *node;
} Handle_82781FA0;

typedef struct Owner_82781FA0 {
    char pad0[0x110];
    Entry_82781FA0 **pages;
} Owner_82781FA0;

extern void fn_8277F4F0(Owner_82781FA0 *self, Node_82781FA0 *node, unsigned int key);
extern void fn_8277F7E8(Owner_82781FA0 *self, Handle_82781FA0 *handle, unsigned int key);
extern void fn_8277F9D0(Owner_82781FA0 *self, Handle_82781FA0 *handle, unsigned int key);

void fn_82781FA0(Owner_82781FA0 *self, Handle_82781FA0 *handle, unsigned int key)
{
    Node_82781FA0 *node;
    Info_82781FA0 *info;
    unsigned int index;

    if (handle == 0) {
        return;
    }
    node = handle->node;
    if (node == 0) {
        return;
    }
    info = node->info;
    if (info != 0) {
        index = key & ~0x40000000;
        if (info->value == self->pages[index >> 10][index & 0x3ff].value) {
            info->key = index;
            return;
        }
        if (key & 0x40000000) {
            fn_8277F7E8(self, handle, key);
        } else {
            fn_8277F9D0(self, handle, key);
        }
    } else {
        fn_8277F4F0(self, node, key);
    }
}
