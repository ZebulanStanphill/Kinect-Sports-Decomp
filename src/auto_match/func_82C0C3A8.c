typedef unsigned int uint;

void *memset(void *dst, int val, unsigned int size);

typedef struct Msg_82C0C3A8 {
    unsigned int id;
    int data[8];
} Msg_82C0C3A8;

typedef void (*VFn_82C0C3A8)(void *self, Msg_82C0C3A8 *msg);

void fn_82C0C3A8(int *param_1, uint param_2)
{
    Msg_82C0C3A8 m;

    memset(&m, 0, sizeof(m));
    m.id = param_2;
    (*(VFn_82C0C3A8 *)(*param_1 + 0x24))(param_1, &m);
}
