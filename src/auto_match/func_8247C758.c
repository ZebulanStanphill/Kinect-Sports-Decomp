typedef struct {
    int pad[19];
    int active;
    int flag50;
    int pad54[2];
    int flag5c;
} State_8247C758;

int fn_8247C758(State_8247C758 *self)
{
    if (self->active != 0) {
        if (self->flag5c != 0) {
            return 9;
        }
        return self->flag50 != 0 ? 4 : 6;
    }
    return 0;
}
