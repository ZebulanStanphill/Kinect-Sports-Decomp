void *memset(void *dst, int val, unsigned int size);

typedef struct Msg_82C0C400 {
    unsigned int id;
    unsigned int value;
    int data[7];
} Msg_82C0C400;

typedef void (*VFn_82C0C400)(void *self, Msg_82C0C400 *msg);

void fn_82C0C400(int *param_1, unsigned int param_2, unsigned int param_3)
{
    Msg_82C0C400 m;

    memset(&m, 0, sizeof(m));
    m.id = param_2;
    m.value = param_3;
    (*(VFn_82C0C400 *)(*param_1 + 0x24))(param_1, &m);
}
