// Updates an item of the context while it stays active. While the context
// still finds the item's key, a found entry is updated and the function returns
// true. Otherwise the item's timer is restarted if needed, and once more time
// than lbl_82026230 has passed the item is removed from the context. It returns
// false only while waiting for the timeout. The system object's clock method is
// virtual slot 0x08.
//
// The return blocks only come out in the original order when the inactive case
// jumps to the return after the removal and the false return comes last.

struct SystemClock_828C7600 {
    virtual void vf00();
    virtual void vf04();
    virtual float vf08();
};

extern "C" SystemClock_828C7600 *fn_825089A0();

struct Context_828C7600;

extern "C" {
void *fn_8289F350(Context_828C7600 *self, int key);
void *fn_8288F1E8(Context_828C7600 *self, void *item);
void fn_82894560(void *entry, unsigned char mode, int a, int value, int key, void *data);
bool fn_8287C3E8(float time);
void *fn_828B5580(void *copy, void *item);
void fn_8288B6C0(Context_828C7600 *self, void *item, int key);
extern float lbl_82026230;
}

struct Context_828C7600 {
    void *find(int key) { return fn_8289F350(this, key); }
};

struct State_828C7600 {
    char pad00[0x18];
    int value;
    char pad1C[0x50];
    Context_828C7600 *context;
    char pad70[0x10];
    int item[2];
    int a;
    int key;
    char data[0x10];
    float time;
    bool active;
    unsigned char mode;
};

extern "C" bool fn_828C7600(State_828C7600 *self)
{
    Context_828C7600 *context = self->context;
    void *found = context->find(self->key);
    self->active = self->active && found != 0;
    if (!self->active)
        goto done;
    {
        void *entry;
        float now;
        entry = fn_8288F1E8(self->context, self->item);
        if (entry) {
            fn_82894560(entry, self->mode, self->a, self->value, self->key, self->data);
            return true;
        }
        if (fn_8287C3E8(self->time))
            self->time = fn_825089A0()->vf08();
        now = fn_825089A0()->vf08();
        if (now - self->time > lbl_82026230) {
            {
                Context_828C7600 *owner = self->context;
                int key = self->key;
                int copy[2];
                fn_8288B6C0(owner, fn_828B5580(copy, self->item), key);
            }
        done:
            return true;
        }
    }
    return false;
}
