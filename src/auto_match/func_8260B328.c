#include <string.h>

typedef struct Item_8260B328 {
    int reserved00;        /* 0x00 */
    const char *name;      /* 0x04 */
    char reserved08[0x54]; /* 0x08 */
    int value;             /* 0x5c */
    char reserved60[4];    /* 0x60 */
} Item_8260B328;

typedef struct Info_8260B328 {
    int reserved00[2];    /* 0x00 */
    int itemCount;        /* 0x08 */
    Item_8260B328 *items; /* 0x0c */
} Info_8260B328;

typedef struct Node_8260B328 {
    Info_8260B328 *info;             /* 0x00 */
    int reserved04[9];               /* 0x04 */
    struct Node_8260B328 **children; /* 0x28 */
    int childCount;                  /* 0x2c */
} Node_8260B328;

typedef struct NamePair_8260B328 {
    const char *from; /* 0x00 */
    const char *to;   /* 0x04 */
} NamePair_8260B328;

typedef struct NameMap_8260B328 {
    NamePair_8260B328 *pairs; /* 0x00 */
    int count;                /* 0x04 */
} NameMap_8260B328;

typedef struct Slot_8260B328 {
    char reserved00[0x1c];   /* 0x00 */
    NameMap_8260B328 *names; /* 0x1c */
} Slot_8260B328;

typedef struct Scene_8260B328 {
    char reserved00[0x128]; /* 0x000 */
    Slot_8260B328 *slots;   /* 0x128 */
} Scene_8260B328;

typedef struct Animator_8260B328 {
    char reserved00[0xb4]; /* 0x00 */
    Scene_8260B328 *scene; /* 0xb4 */
    int reserved_b8;       /* 0xb8 */
    float *values;         /* 0xbc */
} Animator_8260B328;

extern unsigned int fn_8284D890(Scene_8260B328 *scene, const char *name, const char *field, int *out);

void fn_8260B328(Animator_8260B328 *self, Node_8260B328 *node, NameMap_8260B328 *names)
{
    Info_8260B328 *info = node->info;
    int i;
    int j;

    for (i = 0; i < info->itemCount; i++) {
        const char *name = info->items[i].name;
        int index;

        if (names != 0) {
            for (j = 0; j < names->count; j++) {
                if (strcmp(names->pairs[j].from, name) == 0) {
                    name = names->pairs[j].to;
                }
            }
        }
        if (fn_8284D890(self->scene, name, "frameExtension", &index) != 0) {
            self->values[index] = (float)info->items[i].value;
        }
    }
    for (i = 0; i < node->childCount; i++) {
        if (node->children[i] != 0) {
            fn_8260B328(self, node->children[i], self->scene->slots[i].names);
        }
    }
}
