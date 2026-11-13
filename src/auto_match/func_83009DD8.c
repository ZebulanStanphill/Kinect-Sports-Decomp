typedef struct Entry_83009DD8 {
    int a;
    int b;
    int c;
} Entry_83009DD8;

typedef struct Table_83009DD8 {
    int header[3];
    Entry_83009DD8 entries[1];
} Table_83009DD8;

typedef struct Obj_83009DD8 {
    char pad0[0xc];
    int value;
    char pad10[0x28 - 0x10];
    Table_83009DD8 *table;
} Obj_83009DD8;

typedef struct Info_83009DD8 {
    int a;
    int b;
    int value;
    unsigned char flag;
} Info_83009DD8;

extern unsigned char fn_83008F78(Obj_83009DD8 *self, int index);

void fn_83009DD8(Obj_83009DD8 *self, int index, Info_83009DD8 *out)
{
    if (self->table != 0) {
        out->a = self->table->entries[index].a;
        out->b = self->table->entries[index].b;
        out->flag = fn_83008F78(self, index);
    } else {
        out->b = 0;
        out->a = -1;
        out->flag = 0;
    }
    out->value = self->value;
}
