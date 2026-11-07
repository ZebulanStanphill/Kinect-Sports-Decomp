typedef struct Value_824731D8 {
    int type;
    int flags;
    union {
        double d;
        const char *s;
    } u;
} Value_824731D8;

extern void fn_82273C88(Value_824731D8 *v);
extern void fn_82273CD8(Value_824731D8 *v, int type);
extern int fn_8266F600(int movie, int src, char *buf, int size);
extern int fn_82672C20(int movie, const char *name, Value_824731D8 *args, int count);

void fn_824731D8(int param_1, unsigned int param_2, int param_3)
{
    Value_824731D8 v[2];
    char buf[32];
    Value_824731D8 *p;
    int i;

    fn_8266F600(*(int *)(param_1 + 0xf44), param_3, buf, 0x20);
    for (i = 0; i < 2; i++) {
        v[i].type = 0;
        v[i].flags = 0;
    }
    fn_82273CD8(&v[0], 3);
    v[0].u.d = (double)(param_2 + 1);
    fn_82273CD8(&v[1], 4);
    v[1].u.s = buf;
    fn_82672C20(*(int *)(param_1 + 0xf44), "_root.SetImage", v, 2);
    p = &v[2];
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
