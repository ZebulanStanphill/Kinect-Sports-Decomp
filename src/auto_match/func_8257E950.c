#include "xdk/vectorintrinsics.h"

typedef struct Channel_8257E950 {
    char pad0[0x8];
    float x;      /* 0x08 */
    float y;      /* 0x0C */
    float z;      /* 0x10 */
    float weight; /* 0x14 */
    char pad18[0x10];
    float scale;   /* 0x28 */
    float baseCos; /* 0x2C */
} Channel_8257E950;

typedef struct Item_8257E950 {
    Channel_8257E950 channels[2]; /* 0x00 */
    char pad60[0x8];
    void *targets[2];        /* 0x68 */
    unsigned char active[2]; /* 0x70 */
} Item_8257E950;

typedef struct Node_8257E950 {
    Item_8257E950 *item;
    void (*destroy)();
    void (*copy)();
    void (*release)();
    struct Node_8257E950 *next;
} Node_8257E950;

typedef struct Owner_8257E950 {
    char pad[0x10];
    Node_8257E950 *head;
} Owner_8257E950;

extern void *fn_82522D98(unsigned int);
extern void fn_825D5998(Item_8257E950 *);
extern void fn_825D5B08(void);
extern void fn_82BA02A8(void);
extern void fn_825D5108(void);
extern float fn_82809868(float);

void fn_8257E950(void *self, unsigned int index, __vector4 position, int enabled, float outerAngle,
                 float innerAngle, int force)
{
    Owner_8257E950 *owner = *(Owner_8257E950 **)((char *)self + 0x93c);
    Item_8257E950 *item = owner->head ? owner->head->item : 0;
    Channel_8257E950 *channel;
    float weight;
    float range;
    if (!item) {
        item = (Item_8257E950 *)fn_82522D98(0x84);
        fn_825D5998(item);
        if (item && fn_825D5B08) {
            Node_8257E950 *node = (Node_8257E950 *)fn_82522D98(20);
            if (node) {
                node->item = item;
                node->destroy = fn_82BA02A8;
                node->copy = fn_825D5108;
                node->release = fn_825D5B08;
                node->next = owner->head;
                owner->head = node;
            }
        }
    }
    weight = enabled ? 1.0f : 0.0f;
    if (index < 2) {
        channel = &item->channels[index];
        channel->x = position.vector4_f32[0];
        channel->y = position.vector4_f32[1];
        channel->z = position.vector4_f32[2];
        channel->weight = weight;
        if (item->targets[index] != 0) {
            if ((weight == 0.0f || !force) && item->active[index] != 0) {
                item->active[index] = 0;
            } else if (weight == 1.0f && force && item->active[index] == 0) {
                item->active[index] = 1;
            }
        }
        channel->baseCos = fn_82809868(innerAngle * 0.008726646f);
        range = fn_82809868(outerAngle * 0.008726646f) - channel->baseCos;
        channel->scale = range > 0.0f ? 1.0f / range : 1.0f;
    }
}
