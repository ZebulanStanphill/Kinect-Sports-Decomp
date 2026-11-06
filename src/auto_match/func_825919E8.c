typedef struct Link_825919E8 Link_825919E8;
struct Link_825919E8 {
    Link_825919E8 *next;
    Link_825919E8 *prev;
};

typedef struct Obj_825919E8 {
    char pad[0x38];
    Link_825919E8 linkA;
    char pad40[8];
    Link_825919E8 linkC;
    Link_825919E8 linkB;
} Obj_825919E8;

static __forceinline void Unlink_825919E8(Link_825919E8 *l)
{
    if (l->next != 0) {
        l->next->prev = l->prev;
    }
    if (l->prev != 0) {
        l->prev->next = l->next;
    }
    l->next = 0;
    l->prev = 0;
}

void fn_825919E8(Obj_825919E8 *self)
{
    Unlink_825919E8(&self->linkA);
    Unlink_825919E8(&self->linkB);
    Unlink_825919E8(&self->linkC);
}
