typedef struct Widget_824D78A0 {
    char pad0[0x3c];
    int visible;
} Widget_824D78A0;

typedef struct Screen_824D78A0 {
    char pad0[0xf8];
    Widget_824D78A0 *on0;
    Widget_824D78A0 *off0;
    Widget_824D78A0 *on1;
    Widget_824D78A0 *off1;
    Widget_824D78A0 *on2;
    Widget_824D78A0 *off2;
    Widget_824D78A0 *on3;
    Widget_824D78A0 *off3;
    Widget_824D78A0 *on4;
    Widget_824D78A0 *other;
    Widget_824D78A0 *on5;
} Screen_824D78A0;

void fn_824D78A0(Screen_824D78A0 *self, int visible)
{
    if (self->on0 != 0)
        self->on0->visible = visible;
    if (self->off0 != 0)
        self->off0->visible = !visible;
    if (self->on1 != 0)
        self->on1->visible = visible;
    if (self->off1 != 0)
        self->off1->visible = !visible;
    if (self->on2 != 0)
        self->on2->visible = visible;
    if (self->off2 != 0)
        self->off2->visible = !visible;
    if (self->on3 != 0)
        self->on3->visible = visible;
    if (self->off3 != 0)
        self->off3->visible = !visible;
    if (self->on4 != 0)
        self->on4->visible = visible;
    if (self->on5 != 0)
        self->on5->visible = visible;
}
