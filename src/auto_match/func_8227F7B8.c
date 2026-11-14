typedef struct Child_8227F7B8 {
    char pad[0x34];
    int active;
} Child_8227F7B8;

typedef struct Obj_8227F7B8 {
    char pad[0x6c];
    unsigned int other : 30;
    unsigned int hidden : 1;
    unsigned int disabled : 1;
    Child_8227F7B8 *child;
} Obj_8227F7B8;

static __forceinline unsigned char IsEnabled(Obj_8227F7B8 *self)
{
    return !self->disabled;
}

static __forceinline unsigned char IsVisible(Obj_8227F7B8 *self)
{
    return !self->hidden;
}

void fn_8227F7B8(Obj_8227F7B8 *self, int enable)
{
    if (enable != 0) {
        if (!IsEnabled(self))
            self->disabled = 0;
    } else {
        if (IsEnabled(self))
            self->disabled = 1;
    }
    self->child->active = IsVisible(self) && IsEnabled(self);
}
