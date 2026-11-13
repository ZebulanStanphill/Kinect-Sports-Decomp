typedef struct Message_82FE77D0 {
    int kind;
    int a;
    int b;
    int flag;
    int v[5];
} Message_82FE77D0;

extern void *lbl_832642F0;
extern int fn_82FF9460(void *data, unsigned int size);
extern int fn_82FFA6E8(void *queue, Message_82FE77D0 m);

static __forceinline int CheckBuffer(void *data, unsigned int size)
{
    if (((unsigned int)data & 0x7ff) == 0 && data != 0 && size >= 0x18)
        return 1;
    return 0x1f;
}

int fn_82FE77D0(void *data, unsigned int size, int a, int b, int *out)
{
    Message_82FE77D0 m;
    int id;

    if (CheckBuffer(data, size) != 1)
        return 0x1f;
    id = fn_82FF9460(data, size);
    *out = id;
    m.kind = 0;
    m.v[0] = id;
    m.a = a;
    m.v[1] = -1;
    m.b = b;
    m.v[2] = (int)data;
    m.v[3] = size;
    m.flag = 1;
    return fn_82FFA6E8(lbl_832642F0, m);
}
