typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_825F1108 {
    __vector4 rows[3];
} Transform_825F1108;

typedef struct Snapshot_825F1108 {
    Transform_825F1108 transform; /* 0x00 */
    char pad30[8];
    int frame; /* 0x38 */
    char pad3c[0xa4];
} Snapshot_825F1108;

typedef struct World_825F1108 {
    char pad0[0x200];
    int frame; /* 0x200 */
    char pad204[0x164];
    int counts[2];                  /* 0x368 */
    Snapshot_825F1108 *queue[1][2]; /* 0x370 */
} World_825F1108;

typedef struct Slot_825F1108 {
    char pad0[0x14];
    int active; /* 0x14 */
    char pad18[8];
} Slot_825F1108;

typedef struct Pool_825F1108 {
    char pad0[0x48];
    void *owner; /* 0x48 */
    char pad4c[4];
    Slot_825F1108 *slots; /* 0x50 */
} Pool_825F1108;

typedef struct Resource_825F1108 {
    char pad0[0x10];
    Pool_825F1108 *pool; /* 0x10 */
} Resource_825F1108;

typedef struct Table_825F1108 {
    char pad0[0x98];
    void **used; /* 0x98 */
} Table_825F1108;

typedef struct Handle_825F1108 {
    char pad0[4];
    int index; /* 0x04 */
} Handle_825F1108;

typedef struct Source_825F1108 Source_825F1108;

typedef struct SourceVtbl_825F1108 {
    void *slots0[7];
    Resource_825F1108 *(*GetResource)(Source_825F1108 *self);
    void *slots8[7];
    Table_825F1108 **(*GetTable)(Source_825F1108 *self);
} SourceVtbl_825F1108;

struct Source_825F1108 {
    SourceVtbl_825F1108 *vt;
};

typedef struct Recorder_825F1108 {
    char pad0[0x40];
    Source_825F1108 *source; /* 0x40 */
    Handle_825F1108 *handle; /* 0x44 */
    int pending;             /* 0x48 */
    char pad4c[0x34];
    Transform_825F1108 transform; /* 0x80 */
    char padb0[0xc];
    World_825F1108 *world; /* 0xbc */
    char padc0[0x10];
    Snapshot_825F1108 snapshots[4]; /* 0xd0 */
} Recorder_825F1108;

extern void fn_825B51E8(void *owner, Slot_825F1108 *slots, int index);

void fn_825F1108(Recorder_825F1108 *self)
{
    int frame;
    Snapshot_825F1108 *snapshot;
    World_825F1108 *world;
    int parity;
    Resource_825F1108 *resource;
    void *owner;
    Table_825F1108 **table;

    frame = self->world->frame;
    snapshot = &self->snapshots[frame % 4];
    snapshot->transform.rows[0] = self->transform.rows[0];
    snapshot->transform.rows[1] = self->transform.rows[1];
    snapshot->transform.rows[2] = self->transform.rows[2];
    snapshot->frame = frame;
    world = self->world;
    parity = world->frame % 2;
    world->queue[world->counts[parity]][parity] = snapshot;
    world->counts[parity]++;
    if (self->pending != 0) {
        if (--self->pending == 0) {
            resource = self->source->vt->GetResource(self->source);
            owner = resource->pool->owner;
            table = self->source->vt->GetTable(self->source);
            if ((*table)->used[self->handle->index] != 0) {
                fn_825B51E8(owner, resource->pool->slots, self->handle->index);
                resource->pool->slots[self->handle->index].active = 0;
            }
        }
    }
}
