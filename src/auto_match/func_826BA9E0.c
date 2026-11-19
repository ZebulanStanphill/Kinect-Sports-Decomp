typedef struct StrData_826BA9E0 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BA9E0;

typedef struct Name_826BA9E0 {
    StrData_826BA9E0 *data;
} Name_826BA9E0;

typedef struct Entry_826BA9E0 {
    int key;
    int value;
} Entry_826BA9E0;

typedef struct Func_826BA9E0 {
    void *fn;
    void *owner;
} Func_826BA9E0;

typedef struct Binding_826BA9E0 {
    Name_826BA9E0 *name;
    Func_826BA9E0 *func;
} Binding_826BA9E0;

typedef struct Value_826BA9E0 {
    unsigned char type;
    char pad1[3];
    StrData_826BA9E0 *str; /* 0x4 */
    int pad8[2];
} Value_826BA9E0;

typedef struct Target_826BA9E0 Target_826BA9E0;

typedef struct TargetVt_826BA9E0 {
    void *pad[10];
    void (*define)(Target_826BA9E0 *self, void *scope, Name_826BA9E0 *name, Value_826BA9E0 *value,
                   unsigned char *flag);
} TargetVt_826BA9E0;

struct Target_826BA9E0 {
    TargetVt_826BA9E0 *vt;
};

typedef struct Owner_826BA9E0 {
    char pad0[0x10];
    Target_826BA9E0 target; /* 0x10 */
} Owner_826BA9E0;

typedef struct Self_826BA9E0 {
    char pad0[0x7c];
    Name_826BA9E0 name; /* 0x7c */
    char pad80[0x200];
    char table[4]; /* 0x280 */
} Self_826BA9E0;

extern Entry_826BA9E0 *fn_8273E508(void *table, Name_826BA9E0 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BA9E0 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BA9E0 *value);
extern void fn_8271BB30(void);

static __forceinline int *Find_826BA9E0(void *table, Name_826BA9E0 *key)
{
    Entry_826BA9E0 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BA9E0(Self_826BA9E0 *self, void *scope, Owner_826BA9E0 *owner)
{
    Name_826BA9E0 *name = &self->name;
    void *table = self->table;

    if (Find_826BA9E0(table, name) == 0) {
        Func_826BA9E0 func;
        Binding_826BA9E0 binding;
        Value_826BA9E0 value;
        unsigned char flag;

        func.fn = (void *)fn_8271BB30;
        func.owner = 0;
        binding.name = &self->name;
        binding.func = &func;
        fn_826B3420(table, table, &binding, binding.name->data->hash);
        if (func.owner != 0) {
            fn_826824B0(func.owner);
        }
        flag = 0;
        value.type = 0xb;
        value.str = name->data;
        value.str->refs++;
        owner->target.vt->define(&owner->target, scope, name, &value, &flag);
        fn_82696330(&value);
    }
}
