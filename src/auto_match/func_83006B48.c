typedef struct State_83006B48 {
    unsigned char pad[0x14];
    void *slot0;
    void *slot2;
    void *slot1;
    void *slot3;
} State_83006B48;

typedef struct Widget_83006B48 Widget_83006B48;
typedef struct WidgetVtbl_83006B48 {
    void *s[0x25];
    void (*invalidate)(Widget_83006B48 *self, int what);
} WidgetVtbl_83006B48;
struct Widget_83006B48 {
    WidgetVtbl_83006B48 *vt;
    unsigned char pad4[0x1c];
    State_83006B48 *state;
};

extern unsigned char fn_830069B8(Widget_83006B48 *self);

void fn_83006B48(Widget_83006B48 *self, void *value, unsigned int which)
{
    if (fn_830069B8(self) == 0) {
        return;
    }
    if (value != 0) {
        self->vt->invalidate(self, 3);
    }
    switch (which) {
    case 0:
        self->state->slot0 = value;
        break;
    case 2:
        self->state->slot2 = value;
        break;
    case 1:
        self->state->slot1 = value;
        break;
    case 3:
        self->state->slot3 = value;
        break;
    }
}
