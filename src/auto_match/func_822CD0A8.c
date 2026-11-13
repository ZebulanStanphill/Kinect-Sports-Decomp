typedef struct Entry_822CD0A8 {
    char pad0[0x10];
    unsigned int index;
    char key[4];
    float time;
} Entry_822CD0A8;

typedef struct Slot_822CD0A8 {
    char data[0x18];
} Slot_822CD0A8;

typedef struct Table_822CD0A8 {
    char pad0[0xa30];
    Slot_822CD0A8 slots[1];
} Table_822CD0A8;

typedef struct Obj_822CD0A8 {
    char pad0[8];
    void *mgr;
    char padC[0x14];
    char list[0x10];
    Table_822CD0A8 *table;
} Obj_822CD0A8;

typedef struct Result_822CD0A8 {
    int a;
    int b;
    int c;
} Result_822CD0A8;

extern char lbl_83265A28[];
extern int fn_82520780(void *clock, float time);
extern void fn_82552788(void *mgr, Slot_822CD0A8 *slot, void *key, Table_822CD0A8 *table,
                        unsigned int index, int a, int b, Result_822CD0A8 *out, void *list);
extern void fn_822CD140(Result_822CD0A8 *r);

void fn_822CD0A8(Obj_822CD0A8 *self, Entry_822CD0A8 **pentry)
{
    Entry_822CD0A8 *e = *pentry;

    if (fn_82520780(lbl_83265A28, e->time) != 0) {
        Result_822CD0A8 r;
        r.a = 0;
        r.b = 0;
        r.c = 0;
        fn_82552788(self->mgr, &self->table->slots[e->index], e->key, self->table, e->index, 0, 0, &r,
                    self->list);
        fn_822CD140(&r);
    }
}
