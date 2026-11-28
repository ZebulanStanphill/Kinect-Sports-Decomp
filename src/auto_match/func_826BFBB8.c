typedef struct {
    unsigned char type;
    unsigned char pad[3];
    unsigned char boolean;
    unsigned char storage[11];
} Value_826BFBB8;

typedef struct {
    unsigned int pad[2];
    int references; /* 0x08 */
} Rep_826BFBB8;

typedef struct {
    Rep_826BFBB8 *rep;
    unsigned int flags;
} Text_826BFBB8;

typedef struct {
    void *object;
    void *extra;
    unsigned char flags;
} Weak_826BFBB8;

typedef struct Handler_826BFBB8 Handler_826BFBB8;

typedef struct {
    void *slots[19];
    unsigned char (*invoke)(Handler_826BFBB8 *, void *, Text_826BFBB8 *, Weak_826BFBB8 *, Value_826BFBB8 *);
} Vtable_826BFBB8;

struct Handler_826BFBB8 {
    const Vtable_826BFBB8 *vtable;
};

typedef struct {
    unsigned int reserved;
    Value_826BFBB8 *result;    /* 0x04 */
    Handler_826BFBB8 *handler; /* 0x08 */
    unsigned char pad[0x0c];
    unsigned char *environment; /* 0x18 */
    int count;                  /* 0x1c */
} Call_826BFBB8;

extern Value_826BFBB8 *fn_826957D0(Call_826BFBB8 *, unsigned int);
extern Weak_826BFBB8 *fn_82696B20(Weak_826BFBB8 *, const Value_826BFBB8 *, void *);
extern void fn_82695FA0(Value_826BFBB8 *, const Value_826BFBB8 *);
extern void fn_82696D38(Text_826BFBB8 *, const Value_826BFBB8 *, void *, int, char);
extern void fn_826959C8(Value_826BFBB8 *);
extern void fn_826944C8(Rep_826BFBB8 *);
extern void fn_82696330(Value_826BFBB8 *);
extern void fn_826824B0(void *);

void fn_826BFBB8(Call_826BFBB8 *self)
{
    Value_826BFBB8 *result;
    void *environment;
    unsigned char value;

    if (self->count >= 2) {
        Text_826BFBB8 name;
        Weak_826BFBB8 object;
        Value_826BFBB8 options;

        environment = self->environment;
        fn_82696B20(&object, fn_826957D0(self, 1), environment);
        if (object.object != 0) {
            options.type = 0;
            if (self->count >= 3)
                fn_82695FA0(&options, fn_826957D0(self, 2));
            environment = self->environment;
            {
                const Value_826BFBB8 *argument = fn_826957D0(self, 0);
                fn_82696D38(&name, argument, environment, -1, 0);
            }
            value = self->handler->vtable->invoke(self->handler, self->environment + 0x78, &name, &object,
                                                  &options);
            result = self->result;
            fn_826959C8(result);
            result->boolean = value;
            result->type = 2;
            {
                Rep_826BFBB8 *rep = name.rep;
                if (--rep->references == 0)
                    fn_826944C8(rep);
            }
            fn_82696330(&options);
        } else {
            result = self->result;
            fn_826959C8(result);
            result->boolean = 0;
            result->type = 2;
        }
        if ((object.flags & 2) == 0 && object.object != 0)
            fn_826824B0(object.object);
        object.object = 0;
        if ((object.flags & 1) == 0 && object.extra != 0)
            fn_826824B0(object.extra);
    } else {
        result = self->result;
        fn_826959C8(result);
        result->type = 2;
        result->boolean = 0;
    }
}
