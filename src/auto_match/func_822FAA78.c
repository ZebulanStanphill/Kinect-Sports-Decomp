typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Source_822FAA78 Source_822FAA78;
typedef struct Lookup_822FAA78 Lookup_822FAA78;

typedef struct Item_822FAA78 {
    char pad[0x80];
    __vector4 value;
} Item_822FAA78;

typedef struct SourceVtable_822FAA78 {
    void *pad[7];
    unsigned int (*GetKey)(Source_822FAA78 *self);
} SourceVtable_822FAA78;

struct Source_822FAA78 {
    SourceVtable_822FAA78 *vtable;
};

typedef struct Group_822FAA78 {
    Lookup_822FAA78 **items;
    char pad[0xc];
    int selected;
} Group_822FAA78;

typedef struct Owner_822FAA78 {
    char pad00[8];
    Group_822FAA78 ***groups;
    char pad0c[0x2d4];
    Source_822FAA78 *source;
} Owner_822FAA78;

typedef struct Mode_822FAA78 {
    char pad[0x2c];
    int active;
} Mode_822FAA78;

typedef struct State_822FAA78 {
    char pad00[4];
    Owner_822FAA78 *owner;
    Mode_822FAA78 *mode;
    char pad0c[0x10];
    float value;
} State_822FAA78;

extern const float lbl_82192730[7];
extern float lbl_831CC9A8[];
extern Item_822FAA78 *fn_822ABA88(Lookup_822FAA78 *lookup, unsigned int key);

static __forceinline float GetX(__vector4 v)
{
    return v.vector4_f32[0];
}

void fn_822FAA78(State_822FAA78 *self, float time)
{
    Owner_822FAA78 *owner = self->owner;
    Mode_822FAA78 *mode = self->mode;
    Source_822FAA78 *source = owner->source;
    Group_822FAA78 *group = (*owner->groups)[mode->active == 0];
    unsigned int key = source->vtable->GetKey(source);
    __vector4 v = fn_822ABA88(group->items[group->selected], key)->value;
    if (self->mode->active == 0) {
        float scale = lbl_82192730[1];
        v.vector4_f32[0] *= scale;
        v.vector4_f32[2] *= scale;
    }
    self->value = (self->value + GetX(v) * time) * lbl_831CC9A8[3];
}
