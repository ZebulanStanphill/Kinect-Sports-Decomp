// Adds an entry stamped with the current time of the object fn_825089A0
// returns, unless fn_828A2C80 finds the given handle already present. The
// handle is a two-word object that fn_828B5580 copies and fn_828B55B0
// releases; the argument is released as well.
struct System_828A4F60 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};

struct Handle_828A4F60 {
    int data[2];
};

struct Entry_828A4F60 {
    Handle_828A4F60 handle;
    float time;
    Handle_828A4F60 copy;
};

struct State_828A4F60 {
    char pad[0x2f4];
    void *head;
};

extern "C" {
System_828A4F60 *fn_825089A0();
Handle_828A4F60 *fn_828B5580(Handle_828A4F60 *self, const Handle_828A4F60 *other);
bool fn_828A2C80(State_828A4F60 *self, Handle_828A4F60 *handle);
void fn_828A3878(void *list, void *where, float *value);
void fn_828B55B0(const Handle_828A4F60 *self);
}

extern "C" void fn_828A4F60(State_828A4F60 *self, const Handle_828A4F60 *arg)
{
    Entry_828A4F60 e;
    if (!fn_828A2C80(self, fn_828B5580(&e.handle, arg))) {
        e.time = (float)fn_825089A0()->vf08();
        fn_828B5580(&e.copy, arg);
        fn_828A3878(&self->head, self->head, &e.time);
        fn_828B55B0(&e.copy);
    }
    fn_828B55B0(arg);
}
