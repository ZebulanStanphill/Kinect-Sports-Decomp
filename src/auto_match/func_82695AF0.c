typedef struct {
    unsigned char type;
    void *object;
    void *extra;
} Value_82695AF0;

extern void fn_826C3400(void *p);
extern void fn_826824B0(void *p);

void fn_82695AF0(Value_82695AF0 *value)
{
    if (value->type == 8)
        fn_826C3400(&value->object);
    else if (value->type == 6 && value->object != 0)
        fn_826824B0(value->object);
    else if (value->type == 9)
        fn_826824B0(value->object);
}
