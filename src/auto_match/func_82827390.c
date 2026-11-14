char *strncpy(char *dst, const char *src, unsigned int count);
extern int fn_82F6DCE0(char *buffer, unsigned int count, const char *format, ...);

typedef struct Asset_82827390 {
    char name[0x100];
    unsigned int id;
} Asset_82827390;

typedef struct Node_82827390 {
    struct Node_82827390 *next;
    struct Node_82827390 *prev;
    int pad8;
    Asset_82827390 *asset;
} Node_82827390;

typedef struct List_82827390 {
    int pad0;
    Node_82827390 *head;
} List_82827390;

typedef struct Iter_82827390 {
    Node_82827390 *node;
} Iter_82827390;

typedef struct Library_82827390 {
    char pad0[0x2f0];
    List_82827390 *assets;
    char pad2f4[0x3e4 - 0x2f4];
    unsigned int reserved;
} Library_82827390;

extern void fn_8259BDA8(Iter_82827390 *it);

void fn_82827390(Library_82827390 *self, unsigned int id, char *dst, unsigned int size)
{
    Iter_82827390 it;
    Node_82827390 *head;

    if (self->reserved != 0 && id >= self->reserved)
        id++;
    head = self->assets->head;
    for (it.node = head->next; it.node != head; fn_8259BDA8(&it)) {
        if (it.node->asset->id == id)
            break;
    }
    if (it.node != head) {
        const char *name = it.node->asset->name;
        unsigned int i;
        for (i = size - 1; i != 0; i--) {
            if (name[i] == '\\') {
                name = &name[i] + 1;
                break;
            }
        }
        strncpy(dst, name, size);
    } else {
        fn_82F6DCE0(dst, size, "Asset %d", id);
    }
    dst[size - 1] = 0;
}
