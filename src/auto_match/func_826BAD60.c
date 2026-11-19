typedef struct StrData_826BAD60 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BAD60;

typedef struct Name_826BAD60 {
    StrData_826BAD60 *data;
} Name_826BAD60;

typedef struct Entry_826BAD60 {
    int key;
    int value;
} Entry_826BAD60;

typedef struct Func_826BAD60 {
    void *fn;
    void *owner;
} Func_826BAD60;

typedef struct Binding_826BAD60 {
    Name_826BAD60 *name;
    Func_826BAD60 *func;
} Binding_826BAD60;

typedef struct Value_826BAD60 {
    unsigned char type;
    char pad1[3];
    StrData_826BAD60 *str; /* 0x4 */
    int pad8[2];
} Value_826BAD60;

typedef struct Target_826BAD60 Target_826BAD60;

typedef struct TargetVt_826BAD60 {
    void *pad[10];
    void (*define)(Target_826BAD60 *self, void *scope, Name_826BAD60 *name, Value_826BAD60 *value,
                   unsigned char *flag);
} TargetVt_826BAD60;

struct Target_826BAD60 {
    TargetVt_826BAD60 *vt;
};

typedef struct Owner_826BAD60 {
    char pad0[0x10];
    Target_826BAD60 target; /* 0x10 */
} Owner_826BAD60;

typedef struct Self_826BAD60 {
    char pad0[0x54];
    Name_826BAD60 name; /* 0x54 */
    char pad58[0x228];
    char table[4]; /* 0x280 */
} Self_826BAD60;

extern Entry_826BAD60 *fn_8273E508(void *table, Name_826BAD60 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BAD60 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BAD60 *value);
extern void fn_82720900(void);

static __forceinline int *Find_826BAD60(void *table, Name_826BAD60 *key)
{
    Entry_826BAD60 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BAD60(Self_826BAD60 *self, void *scope, Owner_826BAD60 *owner)
{
    Name_826BAD60 *name = &self->name;
    void *table = self->table;

    if (Find_826BAD60(table, name) == 0) {
        Func_826BAD60 func;
        Binding_826BAD60 binding;
        Value_826BAD60 value;
        unsigned char flag;

        func.fn = (void *)fn_82720900;
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
