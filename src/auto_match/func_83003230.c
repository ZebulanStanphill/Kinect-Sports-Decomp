typedef struct Entry_83003230 {
    int a;
    int b;
    int c;
} Entry_83003230;

typedef struct Table_83003230 {
    int header[3];
    Entry_83003230 entries[1];
} Table_83003230;

typedef struct Info_83003230 {
    int a;
    int b;
    int value;
    unsigned char flag;
} Info_83003230;

typedef struct Obj_83003230 Obj_83003230;

typedef struct Delegate_83003230 {
    void **vt;
} Delegate_83003230;

struct Obj_83003230 {
    char pad0[0xc];
    int value;
    int delegate;
    char pad14[0x28 - 0x14];
    Table_83003230 *table;
    char pad2c[0x3e - 0x2c];
    unsigned char flags;
};

typedef void (*GetInfoFn_83003230)(Delegate_83003230 *self, int index, Info_83003230 *out, int arg);

extern unsigned char fn_83001CB8(Obj_83003230 *self, int index, int arg);

void fn_83003230(Obj_83003230 *self, int index, Info_83003230 *out, int arg)
{
    if ((self->flags & 0x80) == 0 && self->delegate != 0) {
        Delegate_83003230 *d = (Delegate_83003230 *)self->delegate;
        ((GetInfoFn_83003230)d->vt[0xe8 / 4])(d, index, out, arg);
        return;
    }
    if (self->table != 0) {
        out->a = self->table->entries[index].a;
        out->b = self->table->entries[index].b;
        out->flag = fn_83001CB8(self, index, arg);
    } else {
        out->b = 0;
        out->a = -1;
        out->flag = 0;
    }
    out->value = self->value;
}
