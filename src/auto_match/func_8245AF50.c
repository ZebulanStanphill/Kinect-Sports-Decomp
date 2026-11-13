typedef struct Owner_8245AF50 {
    char pad0[0x5c0];
    int id;                      /* 0x5c0 */
} Owner_8245AF50;

typedef struct State_8245AF50 {
    int unk0;
    int unk4;
    int pending;                 /* 0x08 */
} State_8245AF50;

typedef struct Obj_8245AF50 {
    int unk0;
    Owner_8245AF50 *owner;       /* 0x04 */
    int unk8;
    int busy;                    /* 0x0c */
    int unk10[3];
    int active;                  /* 0x1c */
    State_8245AF50 *state;       /* 0x20 */
} Obj_8245AF50;

typedef struct Message_8245AF50 {
    int id;
    unsigned short value;
} Message_8245AF50;

extern void fn_8245B168(Obj_8245AF50 *self, Message_8245AF50 *msg, int size);

int fn_8245AF50(Obj_8245AF50 *self, unsigned short value)
{
    Message_8245AF50 msg;

    if (self->busy != 0)
        return 0x80004005;
    self->busy = 1;
    self->active = 1;
    self->state->pending = 0;
    msg.value = value;
    msg.id = self->owner->id;
    fn_8245B168(self, &msg, 6);
    return 0;
}
