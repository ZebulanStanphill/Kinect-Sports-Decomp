typedef struct StrData_826BAF20 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BAF20;

typedef struct Name_826BAF20 {
    StrData_826BAF20 *data;
} Name_826BAF20;

typedef struct Entry_826BAF20 {
    int key;
    int value;
} Entry_826BAF20;

typedef struct Func_826BAF20 {
    void *fn;
    void *owner;
} Func_826BAF20;

typedef struct Binding_826BAF20 {
    Name_826BAF20 *name;
    Func_826BAF20 *func;
} Binding_826BAF20;

typedef struct Value_826BAF20 {
    unsigned char type;
    char pad1[3];
    StrData_826BAF20 *str; /* 0x4 */
    int pad8[2];
} Value_826BAF20;

typedef struct Target_826BAF20 Target_826BAF20;

typedef struct TargetVt_826BAF20 {
    void *pad[10];
    void (*define)(Target_826BAF20 *self, void *scope, Name_826BAF20 *name, Value_826BAF20 *value,
                   unsigned char *flag);
} TargetVt_826BAF20;

struct Target_826BAF20 {
    TargetVt_826BAF20 *vt;
};

typedef struct Owner_826BAF20 {
    char pad0[0x10];
    Target_826BAF20 target; /* 0x10 */
} Owner_826BAF20;

typedef struct Self_826BAF20 {
    char pad0[0x30];
    Name_826BAF20 name; /* 0x30 */
    char pad34[0x24c];
    char table[4]; /* 0x280 */
} Self_826BAF20;

extern Entry_826BAF20 *fn_8273E508(void *table, Name_826BAF20 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BAF20 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BAF20 *value);
extern void fn_82734110(void);

static __forceinline int *Find_826BAF20(void *table, Name_826BAF20 *key)
{
    Entry_826BAF20 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BAF20(Self_826BAF20 *self, void *scope, Owner_826BAF20 *owner)
{
    Name_826BAF20 *name = &self->name;
    void *table = self->table;

    if (Find_826BAF20(table, name) == 0) {
        Func_826BAF20 func;
        Binding_826BAF20 binding;
        Value_826BAF20 value;
        unsigned char flag;

        func.fn = (void *)fn_82734110;
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
