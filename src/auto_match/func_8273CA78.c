typedef struct Str_8273CA78 { char pad[8]; int rc; } Str_8273CA78;
typedef struct Value_8273CA78 { char data[0x10]; } Value_8273CA78;
typedef struct Env_8273CA78 { char pad[0x78]; unsigned int strings; } Env_8273CA78;
typedef struct Obj_8273CA78 { char pad[0x10]; char members[1]; } Obj_8273CA78;

extern char lbl_82012158[];   /* "data" */
extern void fn_82681728(Str_8273CA78 **out, unsigned int manager, const char *s);
extern void fn_826944C8(Str_8273CA78 *s);
extern Value_8273CA78 *fn_826961B0(Value_8273CA78 *self, void *obj);
extern void fn_82696330(Value_8273CA78 *self);
extern void fn_826C1BA0(void *members, Env_8273CA78 *env, Str_8273CA78 **name, Value_8273CA78 *value,
                        unsigned char *flags);

void fn_8273CA78(Obj_8273CA78 *self, Env_8273CA78 *env, void *data)
{
    unsigned char flags = 0;
    Str_8273CA78 *name;
    Value_8273CA78 value;
    Str_8273CA78 *p;
    fn_82681728(&name, env->strings + 0x254, lbl_82012158);
    fn_826C1BA0(self->members, env, &name, fn_826961B0(&value, data), &flags);
    p = name;
    if (--p->rc == 0)
        fn_826944C8(p);
    fn_82696330(&value);
}
