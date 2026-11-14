typedef struct IntVector_83007620 {
    int *begin;
    int *end;
    int *capacity;
} IntVector_83007620;

typedef struct Owner_83007620 {
    char pad0[0x30];
    unsigned int id;
} Owner_83007620;

typedef struct Obj_83007620 {
    char pad0[0x20];
    Owner_83007620 *owner;
    char pad24[0x1a];
    unsigned char top : 2;
    unsigned char kind : 5;
    unsigned char low : 1;
} Obj_83007620;

extern int *fn_830080D8(IntVector_83007620 *v);

static __forceinline void PushBack(IntVector_83007620 *v, int value)
{
    int *slot = fn_830080D8(v);
    if (slot != 0) {
        *slot = value;
    }
}

int fn_83007620(Obj_83007620 *self, unsigned int id, IntVector_83007620 *kinds)
{
    unsigned int ownerId;
    unsigned int kind;
    int *p;
    unsigned char found;

    ownerId = self->owner != 0 ? self->owner->id : 0;
    if (id == ownerId) {
        kind = self->kind;
        if (kind == 0) {
            kinds->end = kinds->begin;
            PushBack(kinds, self->kind);
            return 1;
        }
        found = 0;
        for (p = kinds->begin; p != kinds->end; p++) {
            if (*p == (int)kind) {
                found = 1;
                break;
            }
        }
        if (!found) {
            PushBack(kinds, kind);
        }
    }
    return 0;
}
