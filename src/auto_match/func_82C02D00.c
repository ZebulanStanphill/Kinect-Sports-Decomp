void *memset(void *dst, int val, unsigned int size);

typedef struct Msg_82C02D00 {
    unsigned int id;
    unsigned int words[6];
} Msg_82C02D00;

struct Obj_82C02D00;

typedef struct Vtbl_82C02D00 {
    void *slots[11];
    void (*send)(struct Obj_82C02D00 *self, Msg_82C02D00 *msg);
} Vtbl_82C02D00;

typedef struct Obj_82C02D00 {
    Vtbl_82C02D00 *vt;
} Obj_82C02D00;

void fn_82C02D00(Obj_82C02D00 *param_1, unsigned int param_2)
{
    Msg_82C02D00 msg;

    memset(&msg, 0, sizeof(msg));
    msg.id = param_2;
    param_1->vt->send(param_1, &msg);
}
