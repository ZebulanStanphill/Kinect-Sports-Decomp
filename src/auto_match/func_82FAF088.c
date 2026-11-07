typedef struct Child_82FAF088 Child_82FAF088;

typedef struct ChildVt_82FAF088 {
    char pad0[0x48];
    void (*Update)(Child_82FAF088 *self, float f, int a, int b, int c);
    char pad4c[0x84 - 0x4c];
    unsigned char (*IsDone)(Child_82FAF088 *self);
} ChildVt_82FAF088;

struct Child_82FAF088 {
    ChildVt_82FAF088 *vt;
    char pad4[0x14];
    unsigned short count;
};

typedef struct Entry_82FAF088 {
    int key;
    Child_82FAF088 *child;
} Entry_82FAF088;

typedef struct Owner_82FAF088 {
    char pad0[0x7c];
    Entry_82FAF088 *begin;
    Entry_82FAF088 *end;
} Owner_82FAF088;

void fn_82FAF088(Owner_82FAF088 *self, float f, int a, int b, int c)
{
    Entry_82FAF088 *e;

    for (e = self->begin; e != self->end; e++) {
        if (e->child->vt->IsDone(e->child) == 0) {
            Child_82FAF088 *ch = e->child;
            if (ch->count != 0) {
                ch->vt->Update(ch, f, a, b, c);
            }
        }
    }
}
