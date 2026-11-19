typedef struct StrData_826BAE40 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BAE40;

typedef struct Name_826BAE40 {
    StrData_826BAE40 *data;
} Name_826BAE40;

typedef struct Entry_826BAE40 {
    int key;
    int value;
} Entry_826BAE40;

typedef struct Func_826BAE40 {
    void *fn;
    void *owner;
} Func_826BAE40;

typedef struct Binding_826BAE40 {
    Name_826BAE40 *name;
    Func_826BAE40 *func;
} Binding_826BAE40;

typedef struct Value_826BAE40 {
    unsigned char type;
    char pad1[3];
    StrData_826BAE40 *str; /* 0x4 */
    int pad8[2];
} Value_826BAE40;

typedef struct Target_826BAE40 Target_826BAE40;

typedef struct TargetVt_826BAE40 {
    void *pad[10];
    void (*define)(Target_826BAE40 *self, void *scope, Name_826BAE40 *name, Value_826BAE40 *value,
                   unsigned char *flag);
} TargetVt_826BAE40;

struct Target_826BAE40 {
    TargetVt_826BAE40 *vt;
};

typedef struct Owner_826BAE40 {
    char pad0[0x10];
    Target_826BAE40 target; /* 0x10 */
} Owner_826BAE40;

typedef struct Self_826BAE40 {
    char pad0[0x74];
    Name_826BAE40 name; /* 0x74 */
    char pad78[0x208];
    char table[4]; /* 0x280 */
} Self_826BAE40;

extern Entry_826BAE40 *fn_8273E508(void *table, Name_826BAE40 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BAE40 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BAE40 *value);
extern void fn_82722398(void);

static __forceinline int *Find_826BAE40(void *table, Name_826BAE40 *key)
{
    Entry_826BAE40 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BAE40(Self_826BAE40 *self, void *scope, Owner_826BAE40 *owner)
{
    Name_826BAE40 *name = &self->name;
    void *table = self->table;

    if (Find_826BAE40(table, name) == 0) {
        Func_826BAE40 func;
        Binding_826BAE40 binding;
        Value_826BAE40 value;
        unsigned char flag;

        func.fn = (void *)fn_82722398;
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
