typedef struct {
    unsigned char type;
    void *object;
    void *extra;
} Value_82695980;

extern void fn_826C3290(void *p);
extern void fn_82681F88(void *p);

void fn_82695980(Value_82695980 *value)
{
    if (value->type == 8)
        fn_826C3290(&value->object);
    else if (value->type == 6 && value->object != 0)
        fn_82681F88(value->object);
    else if (value->type == 9)
        fn_82681F88(value->object);
}
