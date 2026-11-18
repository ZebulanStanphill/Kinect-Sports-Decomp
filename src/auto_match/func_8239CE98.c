typedef struct Service_8239CE98 Service_8239CE98;

typedef struct Vtable_8239CE98 {
    void *unused00[13];
    unsigned int (*getIndex)(Service_8239CE98 *self); /* 0x34 */
    void *unused38;
    unsigned int (*getCount)(Service_8239CE98 *self); /* 0x3c */
    void *unused40[20];
    int (*getMode)(Service_8239CE98 *self); /* 0x90 */
} Vtable_8239CE98;

struct Service_8239CE98 {
    Vtable_8239CE98 *vtable;
};

typedef struct State_8239CE98 {
    char unused00[0x1c];
    int enabled; /* 0x1c */
    char unused20[0x30];
    int active; /* 0x50 */
} State_8239CE98;

typedef struct Child_8239CE98 {
    char unused00[0x188];
    int busy; /* 0x188 */
    char unused18c[0x18];
    int special; /* 0x1a4 */
} Child_8239CE98;

typedef struct Owner_8239CE98 {
    char unused00[8];
    void ***tables; /* 0x8 */
    char unused0c[0x88];
    State_8239CE98 *state; /* 0x94 */
    char unused98[0xe0];
    int disabled; /* 0x178 */
    char unused17c[0x68];
    Child_8239CE98 *child; /* 0x1e4 */
    char unused1e8[0xec];
    unsigned int limit; /* 0x2d4 */
    char unused2d8[8];
    Service_8239CE98 *service; /* 0x2e0 */
} Owner_8239CE98;

extern int fn_82399BA0(Owner_8239CE98 *self);
extern int fn_822AA770(void *table);

unsigned int fn_8239CE98(Owner_8239CE98 *self)
{
    State_8239CE98 *state = self->state;
    int active = state != 0 ? state->active : 0;
    Child_8239CE98 *child;
    if (active == 0) {
        return 0;
    }
    if (state->enabled == 0) {
        return 0;
    }
    if (self->disabled != 0) {
        return 0;
    }
    if (fn_82399BA0(self) != 0) {
        return 1;
    }
    child = self->child;
    if (child != 0 && child->busy != 0) {
        return 1;
    }
    if (self->service->vtable->getCount(self->service) == 0) {
        return 0;
    }
    if (child != 0 && child->special != 0 && self->service->vtable->getMode(self->service) != 5 &&
        self->service->vtable->getMode(self->service) != 2) {
        int isFirst = self->service->vtable->getIndex(self->service) == 0;
        return fn_822AA770((*self->tables)[isFirst]) == 0;
    }
    return self->service->vtable->getCount(self->service) >= self->limit;
}
