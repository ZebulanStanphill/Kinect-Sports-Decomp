// Asks whether this object relates to another one: always for itself, through the other's
// virtual test when it has its flag at +0x26 set, otherwise by looking the other's id up in
// this object's entry list (only when the list is enabled).
typedef struct Entry_828AEFB0 {
    unsigned int id;
    unsigned char value;
    char pad5[7];
} Entry_828AEFB0;

struct Obj_828AEFB0;
typedef struct ObjVt_828AEFB0 {
    void *slots[7];
    int (*test)(struct Obj_828AEFB0 *self, struct Obj_828AEFB0 *other);
} ObjVt_828AEFB0;

typedef struct Obj_828AEFB0 {
    ObjVt_828AEFB0 *vt;
    char pad4[0x22];
    unsigned char virtualTest;      /* 0x26 */
    char pad27[0x70];
    unsigned char hasEntries;       /* 0x97 */
    char pad98[4];
    Entry_828AEFB0 *begin;          /* 0x9c */
    Entry_828AEFB0 *end;            /* 0xa0 */
} Obj_828AEFB0;

extern unsigned int fn_823AA970(Obj_828AEFB0 *obj);

int fn_828AEFB0(Obj_828AEFB0 *self, Obj_828AEFB0 *other)
{
    Entry_828AEFB0 *e;
    unsigned int id;

    if (self == other)
        return 1;
    if (other->virtualTest)
        return other->vt->test(other, self);
    if (self->hasEntries) {
        id = fn_823AA970(other);
        for (e = self->begin; e != self->end; e++) {
            if (e->id == id)
                return e->value != 0;
        }
    }
    return 0;
}
