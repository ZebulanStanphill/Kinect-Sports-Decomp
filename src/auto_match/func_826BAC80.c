typedef struct StrData_826BAC80 {
    int pad0[2];
    int refs;          /* 0x8 */
    unsigned int hash; /* 0xc */
} StrData_826BAC80;

typedef struct Name_826BAC80 {
    StrData_826BAC80 *data;
} Name_826BAC80;

typedef struct Entry_826BAC80 {
    int key;
    int value;
} Entry_826BAC80;

typedef struct Func_826BAC80 {
    void *fn;
    void *owner;
} Func_826BAC80;

typedef struct Binding_826BAC80 {
    Name_826BAC80 *name;
    Func_826BAC80 *func;
} Binding_826BAC80;

typedef struct Value_826BAC80 {
    unsigned char type;
    char pad1[3];
    StrData_826BAC80 *str; /* 0x4 */
    int pad8[2];
} Value_826BAC80;

typedef struct Target_826BAC80 Target_826BAC80;

typedef struct TargetVt_826BAC80 {
    void *pad[10];
    void (*define)(Target_826BAC80 *self, void *scope, Name_826BAC80 *name, Value_826BAC80 *value,
                   unsigned char *flag);
} TargetVt_826BAC80;

struct Target_826BAC80 {
    TargetVt_826BAC80 *vt;
};

typedef struct Owner_826BAC80 {
    char pad0[0x10];
    Target_826BAC80 target; /* 0x10 */
} Owner_826BAC80;

typedef struct Self_826BAC80 {
    char pad0[0x5c];
    Name_826BAC80 name; /* 0x5c */
    char pad60[0x220];
    char table[4]; /* 0x280 */
} Self_826BAC80;

extern Entry_826BAC80 *fn_8273E508(void *table, Name_826BAC80 *key);
extern void fn_826B3420(void *table, void *alloc, Binding_826BAC80 *binding, unsigned int hash);
extern void fn_826824B0(void *owner);
extern void fn_82696330(Value_826BAC80 *value);
extern void fn_8271F9D8(void);

static __forceinline int *Find_826BAC80(void *table, Name_826BAC80 *key)
{
    Entry_826BAC80 *e = fn_8273E508(table, key);
    return e ? &e->value : 0;
}

void fn_826BAC80(Self_826BAC80 *self, void *scope, Owner_826BAC80 *owner)
{
    Name_826BAC80 *name = &self->name;
    void *table = self->table;

    if (Find_826BAC80(table, name) == 0) {
        Func_826BAC80 func;
        Binding_826BAC80 binding;
        Value_826BAC80 value;
        unsigned char flag;

        func.fn = (void *)fn_8271F9D8;
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
