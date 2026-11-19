typedef struct StrData_826BA580 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BA580;

typedef struct Name_826BA580 {
    StrData_826BA580 *data;
} Name_826BA580;

typedef struct Entry_826BA580 {
    int key;
    int value;
} Entry_826BA580;

typedef struct Func_826BA580 {
    void *fn;
    void *owner;
} Func_826BA580;

typedef struct Binding_826BA580 {
    Name_826BA580 *name;
    Func_826BA580 *func;
} Binding_826BA580;

typedef struct Value_826BA580 {
    unsigned char type;
    char pad1[3];
    StrData_826BA580 *str; /* 0x4 */
    int pad8[2];
} Value_826BA580;

typedef struct Target_826BA580 Target_826BA580;

typedef struct TargetVt_826BA580 {
    void *pad[10];
    void (*define)(Target_826BA580 *self, void *scope, Name_826BA580 *name, Value_826BA580 *value,
                   unsigned char *flag);
} TargetVt_826BA580;

struct Target_826BA580 {
    TargetVt_826BA580 *vt;
};

typedef struct Owner_826BA580 {
    char pad0[0x10];
    Target_826BA580 target; /* 0x10 */
} Owner_826BA580;

typedef struct Self_826BA580 {
    char pad0[0x18];
    Name_826BA580 name; /* 0x18 */
    char pad1c[0x264];
    char table[4]; /* 0x280 */
} Self_826BA580;

extern Entry_826BA580 *fn_8273E508(void *table, Name_826BA580 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BA580 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BA580 *value);
extern void fn_82713970(void);

static __forceinline int *Find_826BA580(void *table, Name_826BA580 *key)
{
    Entry_826BA580 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BA580(Self_826BA580 *self, void *scope, Owner_826BA580 *owner)
{
    Name_826BA580 *name = &self->name;
    void *table = self->table;

    if (Find_826BA580(table, name) == 0) {
        Func_826BA580 func;
        Binding_826BA580 binding;
        Value_826BA580 value;
        unsigned char flag;

        func.fn = (void *)fn_82713970;
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
