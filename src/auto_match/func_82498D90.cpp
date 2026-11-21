#include <vector>

#include "game/Allocator_8248F890.h"

struct Element_824925D0 {
    unsigned char data[28];
};

struct Flags_824925D0 {
    unsigned char unk0;
    unsigned char unk1;
    unsigned char unk2;
};

struct Struct_824925D0 {
    __forceinline Struct_824925D0() : flags()
    {
    }

    Struct_824925D0(const Struct_824925D0 &other);
    std::vector<Element_824925D0, Allocator_8248F890<Element_824925D0>> items;
    Flags_824925D0 flags;
};

extern "C" {
unsigned int fn_824973B0(void *map, const int *key);
int *fn_82499158(int *out, void *map, const void *value);
}

struct Base_82498D90 {
    int unk04; /* 0x04 */

    __forceinline Base_82498D90() : unk04(0)
    {
    }

    __forceinline Base_82498D90(const Base_82498D90 &other) : unk04(other.unk04)
    {
    }

    virtual ~Base_82498D90();
};

struct Value_82498D90 : Base_82498D90 {
    Struct_824925D0 items; /* 0x08 */
    int extra[4];          /* 0x1c */

    __forceinline Value_82498D90()
    {
    }

    __forceinline Value_82498D90(const Value_82498D90 &other) : Base_82498D90(other), items(other.items)
    {
        extra[0] = other.extra[0];
        extra[1] = other.extra[1];
        extra[2] = other.extra[2];
        extra[3] = other.extra[3];
    }

    virtual ~Value_82498D90();
};

struct Pair_82498D90 {
    int key;              /* 0x00 */
    Value_82498D90 value; /* 0x04 */

    __forceinline Pair_82498D90(const int &k, const Value_82498D90 &v) : key(k), value(v)
    {
    }
};

struct Node_82498D90 {
    Node_82498D90 *next;  /* 0x00 */
    Node_82498D90 *prev;  /* 0x04 */
    int key;              /* 0x08 */
    Value_82498D90 value; /* 0x0c */
};

struct Bucket_82498D90 {
    Node_82498D90 *first; /* 0x00 */
    Node_82498D90 *last;  /* 0x04 */
};

struct Map_82498D90 {
    int pad0;
    Node_82498D90 *head; /* 0x04 */
    int pad8[2];
    Bucket_82498D90 *buckets; /* 0x10 */
};

extern "C" Value_82498D90 *fn_82498D90(Map_82498D90 *self, const int *key)
{
    unsigned int index = fn_824973B0(self, key);
    Node_82498D90 *end = self->head;
    Bucket_82498D90 *bucket = &self->buckets[index];
    Node_82498D90 *first = bucket->first;
    Node_82498D90 *node = first;

    for (;;) {
        Node_82498D90 *stop = first == end ? end : bucket->last->next;
        if (node == stop) {
            node = end;
            break;
        }
        if (node->key == *key) {
            break;
        }
        node = node->next;
    }
    if (node == end) {
        int result[2];
        node = *(Node_82498D90 **)fn_82499158(result, self, &Pair_82498D90(*key, Value_82498D90()));
    }
    return &node->value;
}
