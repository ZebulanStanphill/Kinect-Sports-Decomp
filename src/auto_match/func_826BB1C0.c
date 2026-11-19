typedef struct StrData_826BB1C0 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BB1C0;

typedef struct Name_826BB1C0 {
    StrData_826BB1C0 *data;
} Name_826BB1C0;

typedef struct Entry_826BB1C0 {
    int key;
    int value;
} Entry_826BB1C0;

typedef struct Func_826BB1C0 {
    void *fn;
    void *owner;
} Func_826BB1C0;

typedef struct Binding_826BB1C0 {
    Name_826BB1C0 *name;
    Func_826BB1C0 *func;
} Binding_826BB1C0;

typedef struct Value_826BB1C0 {
    unsigned char type;
    char pad1[3];
    StrData_826BB1C0 *str; /* 0x4 */
    int pad8[2];
} Value_826BB1C0;

typedef struct Target_826BB1C0 Target_826BB1C0;

typedef struct TargetVt_826BB1C0 {
    void *pad[10];
    void (*define)(Target_826BB1C0 *self, void *scope, Name_826BB1C0 *name, Value_826BB1C0 *value,
                   unsigned char *flag);
} TargetVt_826BB1C0;

struct Target_826BB1C0 {
    TargetVt_826BB1C0 *vt;
};

typedef struct Owner_826BB1C0 {
    char pad0[0x10];
    Target_826BB1C0 target; /* 0x10 */
} Owner_826BB1C0;

typedef struct Self_826BB1C0 {
    char pad0[0x58];
    Name_826BB1C0 name; /* 0x58 */
    char pad5c[0x224];
    char table[4]; /* 0x280 */
} Self_826BB1C0;

extern Entry_826BB1C0 *fn_8273E508(void *table, Name_826BB1C0 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BB1C0 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BB1C0 *value);
extern void fn_8273C7F8(void);

static __forceinline int *Find_826BB1C0(void *table, Name_826BB1C0 *key)
{
    Entry_826BB1C0 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BB1C0(Self_826BB1C0 *self, void *scope, Owner_826BB1C0 *owner)
{
    Name_826BB1C0 *name = &self->name;
    void *table = self->table;

    if (Find_826BB1C0(table, name) == 0) {
        Func_826BB1C0 func;
        Binding_826BB1C0 binding;
        Value_826BB1C0 value;
        unsigned char flag;

        func.fn = (void *)fn_8273C7F8;
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
