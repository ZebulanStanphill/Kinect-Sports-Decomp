typedef struct StrData_826BB380 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BB380;

typedef struct Name_826BB380 {
    StrData_826BB380 *data;
} Name_826BB380;

typedef struct Entry_826BB380 {
    int key;
    int value;
} Entry_826BB380;

typedef struct Func_826BB380 {
    void *fn;
    void *owner;
} Func_826BB380;

typedef struct Binding_826BB380 {
    Name_826BB380 *name;
    Func_826BB380 *func;
} Binding_826BB380;

typedef struct Value_826BB380 {
    unsigned char type;
    char pad1[3];
    StrData_826BB380 *str; /* 0x4 */
    int pad8[2];
} Value_826BB380;

typedef struct Target_826BB380 Target_826BB380;

typedef struct TargetVt_826BB380 {
    void *pad[10];
    void (*define)(Target_826BB380 *self, void *scope, Name_826BB380 *name, Value_826BB380 *value,
                   unsigned char *flag);
} TargetVt_826BB380;

struct Target_826BB380 {
    TargetVt_826BB380 *vt;
};

typedef struct Owner_826BB380 {
    char pad0[0x10];
    Target_826BB380 target; /* 0x10 */
} Owner_826BB380;

typedef struct Self_826BB380 {
    char pad0[0x38];
    Name_826BB380 name; /* 0x38 */
    char pad3c[0x244];
    char table[4]; /* 0x280 */
} Self_826BB380;

extern Entry_826BB380 *fn_8273E508(void *table, Name_826BB380 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BB380 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BB380 *value);
extern void fn_82741698(void);

static __forceinline int *Find_826BB380(void *table, Name_826BB380 *key)
{
    Entry_826BB380 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BB380(Self_826BB380 *self, void *scope, Owner_826BB380 *owner)
{
    Name_826BB380 *name = &self->name;
    void *table = self->table;

    if (Find_826BB380(table, name) == 0) {
        Func_826BB380 func;
        Binding_826BB380 binding;
        Value_826BB380 value;
        unsigned char flag;

        func.fn = (void *)fn_82741698;
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
