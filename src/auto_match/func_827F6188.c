typedef struct Obj_827F6188 {
    char pad[0x24];
    char state[1];
} Obj_827F6188;

extern void fn_827F9F90(void *state, int value);
extern void fn_827F9DF0(void *state, int value);
extern void fn_827F9DE0(void *state, int value);
extern void fn_827F9F60(void *state, float value);
extern void fn_827F9F68(void *state, float value);
extern void fn_827FA120(void *state, float value);

void fn_827F6188(Obj_827F6188 *self, float value)
{
    void *state = self->state;
    fn_827F9F90(state, 0);
    fn_827F9DF0(state, 0);
    fn_827F9DE0(state, 0);
    fn_827F9F60(state, value);
    fn_827F9F68(state, 0.0f);
    fn_827FA120(state, 1.0f);
}
