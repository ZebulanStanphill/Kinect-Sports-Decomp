
typedef struct State_82A82350 {
    unsigned short kind, flags;
    float value;
    int count;
    float random;
} State_82A82350;

extern unsigned char lbl_83223458;
extern float lbl_82015CF0;
extern int fn_82F65350(void);

int fn_82A82350(State_82A82350 *self)
{
    if (!lbl_83223458)
        return 0x8000ffff;
    self->flags = 0;
    self->kind = 0xf1ea;
    self->count = 0;
    self->value = 0.0f;
    self->random = (float)fn_82F65350() * lbl_82015CF0;
    return 0;
}
