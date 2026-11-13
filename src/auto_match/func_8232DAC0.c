typedef struct State_8232DAC0 {
    char pad0[0xc];
    int value;
    int found;
    int mode;
    char pad18[0x54];
    char source[0x14];
    float time;
} State_8232DAC0;

typedef struct Obj_8232DAC0 {
    char pad0[0xc];
    State_8232DAC0 *state;
} Obj_8232DAC0;

extern char lbl_83265A28[];
extern int fn_82520780(void *table, float time);
extern int fn_8232BDB0(void *source);
extern void fn_8232C528(State_8232DAC0 *state, int arg);

void fn_8232DAC0(Obj_8232DAC0 *self)
{
    State_8232DAC0 *st = self->state;
    int found = fn_82520780(lbl_83265A28, st->time) != 0;
    st->value = fn_8232BDB0(st->source);
    st->found = found;
    st->mode = 3;
    fn_8232C528(self->state, 0);
}
