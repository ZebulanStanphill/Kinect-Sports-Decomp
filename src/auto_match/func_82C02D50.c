void *memset(void *dst, int val, unsigned int size);

typedef struct Msg_82C02D50 {
    unsigned int id;
    unsigned int value;
    unsigned int words[5];
} Msg_82C02D50;

struct Obj_82C02D50;

typedef struct Vtbl_82C02D50 {
    void *slots[11];
    void (*send)(struct Obj_82C02D50 *self, Msg_82C02D50 *msg);
} Vtbl_82C02D50;

typedef struct Obj_82C02D50 {
    Vtbl_82C02D50 *vt;
} Obj_82C02D50;

void fn_82C02D50(Obj_82C02D50 *param_1, unsigned int param_2, unsigned int param_3)
{
    Msg_82C02D50 msg;

    memset(&msg, 0, sizeof(msg));
    msg.id = param_2;
    msg.value = param_3;
    param_1->vt->send(param_1, &msg);
}
