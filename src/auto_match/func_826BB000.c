typedef struct StrData_826BB000 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BB000;

typedef struct Name_826BB000 {
    StrData_826BB000 *data;
} Name_826BB000;

typedef struct Entry_826BB000 {
    int key;
    int value;
} Entry_826BB000;

typedef struct Func_826BB000 {
    void *fn;
    void *owner;
} Func_826BB000;

typedef struct Binding_826BB000 {
    Name_826BB000 *name;
    Func_826BB000 *func;
} Binding_826BB000;

typedef struct Value_826BB000 {
    unsigned char type;
    char pad1[3];
    StrData_826BB000 *str; /* 0x4 */
    int pad8[2];
} Value_826BB000;

typedef struct Target_826BB000 Target_826BB000;

typedef struct TargetVt_826BB000 {
    void *pad[10];
    void (*define)(Target_826BB000 *self, void *scope, Name_826BB000 *name, Value_826BB000 *value,
                   unsigned char *flag);
} TargetVt_826BB000;

struct Target_826BB000 {
    TargetVt_826BB000 *vt;
};

typedef struct Owner_826BB000 {
    char pad0[0x10];
    Target_826BB000 target; /* 0x10 */
} Owner_826BB000;

typedef struct Self_826BB000 {
    char pad0[0x88];
    Name_826BB000 name; /* 0x88 */
    char pad8c[0x1f4];
    char table[4]; /* 0x280 */
} Self_826BB000;

extern Entry_826BB000 *fn_8273E508(void *table, Name_826BB000 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BB000 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BB000 *value);
extern void fn_827377E8(void);

static __forceinline int *Find_826BB000(void *table, Name_826BB000 *key)
{
    Entry_826BB000 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BB000(Self_826BB000 *self, void *scope, Owner_826BB000 *owner)
{
    Name_826BB000 *name = &self->name;
    void *table = self->table;

    if (Find_826BB000(table, name) == 0) {
        Func_826BB000 func;
        Binding_826BB000 binding;
        Value_826BB000 value;
        unsigned char flag;

        func.fn = (void *)fn_827377E8;
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
