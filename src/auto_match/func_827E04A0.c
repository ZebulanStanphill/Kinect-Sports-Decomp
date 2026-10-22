extern int fn_827E0398();
extern int fn_82811400();
extern int memcpy();

typedef struct Rec {
    unsigned int id;
    unsigned char data[24];
} Rec;

void *fn_827E04A0(void *param_1, Rec *param_2)
{
    Rec r;

    fn_82811400(r.data, 0x10);
    r.id = param_2->id;
    memcpy(r.data, param_2->data, sizeof(r.data));
    fn_827E0398(param_1, &r);
    return param_1;
}
