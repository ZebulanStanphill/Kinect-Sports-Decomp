typedef struct Object_82BEB230 Object_82BEB230;

typedef struct Vtable_82BEB230 {
    void *unused;
    unsigned int (*get)(Object_82BEB230 *self);
} Vtable_82BEB230;

struct Object_82BEB230 {
    Vtable_82BEB230 *vtable;
};

typedef struct Holder_82BEB230 {
    int unused[2];
    Object_82BEB230 *object; /* 0x08 */
} Holder_82BEB230;

typedef struct Record_82BEB230 {
    char pad[0x14];
    void *key;
} Record_82BEB230;

typedef struct Entry_82BEB230 {
    char pad[0x2c];
    Holder_82BEB230 holder; /* 0x2c */
    char pad38[0x4c - 0x38];
    Record_82BEB230 *record; /* 0x4c */
} Entry_82BEB230;

typedef struct List_82BEB230 {
    char pad[8];
    int active;
} List_82BEB230;

typedef struct Self_82BEB230 {
    char pad[0x44];
    List_82BEB230 *list;
} Self_82BEB230;

extern char lbl_82196582[];
extern void fn_82BE5240(Self_82BEB230 *self, int code, const char *message);
extern void fn_82BE5340(List_82BEB230 *list);
extern void fn_82BE5350(List_82BEB230 *list);
extern Entry_82BEB230 *fn_82BE5378(List_82BEB230 *list);
extern void fn_82BEA4D0(Self_82BEB230 *self, void *object);

static __forceinline unsigned int Get_82BEB230(Holder_82BEB230 *holder)
{
    return holder->object ? holder->object->vtable->get(holder->object) : 0;
}

int fn_82BEB230(Self_82BEB230 *self, void *key)
{
    if (key == 0)
        return 0;
    if (self->list == 0) {
        fn_82BE5240(self, 0x131, lbl_82196582);
        return 0;
    }
    fn_82BE5340(self->list);
    while (self->list->active != 0) {
        Entry_82BEB230 *entry = fn_82BE5378(self->list);
        if (entry != 0) {
            Holder_82BEB230 *holder = &entry->holder;
            if (Get_82BEB230(holder) != 0 && entry->record->key == key)
                fn_82BEA4D0(self, (void *)Get_82BEB230(holder));
        }
        fn_82BE5350(self->list);
    }
    return 1;
}
