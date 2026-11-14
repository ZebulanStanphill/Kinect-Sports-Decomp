typedef struct State_82360BB0 {
    char pad[0x1fc];
    unsigned char enabled;
    char pad1fd[3];
    int mode;
    char pad204[8];
    float level;
} State_82360BB0;
typedef struct Owner_82360BB0 { char pad[0x194]; State_82360BB0 *state; } Owner_82360BB0;
extern const float lbl_82192604;

unsigned char fn_82360BB0(Owner_82360BB0 *self)
{
    State_82360BB0 *s = self->state;
    int r;
    if (self->state->mode != 5 && s->level > lbl_82192604)
        return 1;
    if (s->mode == 5)
        r = 0;
    else if (s->mode == 2 || s->mode == 3 || s->mode == 1)
        r = s->enabled;
    else
        r = 1;
    return r;
}
