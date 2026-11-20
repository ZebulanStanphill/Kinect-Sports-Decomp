typedef struct Key_83002AE0 {
    float value; /* 0x0 */
    int pad4[2];
} Key_83002AE0;

typedef struct Track_83002AE0 {
    Key_83002AE0 *keys; /* 0x0 */
    int count;          /* 0x4 */
    int pad8;
} Track_83002AE0;

typedef struct Resource_83002AE0 Resource_83002AE0;

typedef struct ResourceVtbl_83002AE0 {
    void *slot0;
    void *slot4;
    void (*release)(Resource_83002AE0 *self); /* 0x8 */
} ResourceVtbl_83002AE0;

struct Resource_83002AE0 {
    ResourceVtbl_83002AE0 *vtbl; /* 0x00 */
    char pad4[0x1c];
    Track_83002AE0 tracks[4]; /* 0x20 */
    char pad50[0xc];
    unsigned char trackIndex; /* 0x5c */
};

typedef struct Binding_83002AE0 {
    char pad0[0xc];
    int id; /* 0xc */
} Binding_83002AE0;

typedef struct Node_83002AE0 Node_83002AE0;

struct Node_83002AE0 {
    char pad0[0x10];
    Node_83002AE0 *parent; /* 0x10 */
    char pad14[0x29];
    unsigned char flags; /* 0x3d */
    char pad3e[0x26];
    Binding_83002AE0 *binding; /* 0x64 */
};

typedef struct Manager_83002AE0 {
    char pad0[0xfe0];
    char resources[4]; /* 0xfe0 */
} Manager_83002AE0;

extern Manager_83002AE0 *lbl_832642E0;
extern Resource_83002AE0 *fn_82FAB9C0(void *table, int id);

static __forceinline Track_83002AE0 *CurrentTrack(Resource_83002AE0 *resource)
{
    unsigned char index = resource->trackIndex;

    return index != 0xff ? &resource->tracks[index] : 0;
}

int fn_83002AE0(Node_83002AE0 *start, float *out)
{
    Resource_83002AE0 *resource;
    Track_83002AE0 *track;
    int result = 0;
    Node_83002AE0 *node;

    *out = 0.0f;
    for (node = start; node != 0; node = node->parent) {
        if (node->binding != 0) {
            result = 1;
            resource = fn_82FAB9C0(lbl_832642E0->resources, node->binding->id);
            if (resource != 0) {
                track = CurrentTrack(resource);
                if (track != 0) {
                    *out = track->keys[track->count - 1].value;
                } else {
                    result = 0;
                }
                resource->vtbl->release(resource);
            } else {
                result = 0;
            }
            return result;
        }
        if ((node->flags & 1) != 0) {
            break;
        }
    }
    return 0;
}
