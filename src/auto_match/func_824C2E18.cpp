// Constructs an owning state object, recording the current system tick and
// constructing its 0x40-byte child. The original class names are unknown.
struct System_824C2E18 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual unsigned __int64 vf0C();
};
struct Context_824C2E18 { char pad[0x54]; void *value; };
struct Source_824C2E18 { int pad; Context_824C2E18 *context; };
struct State_824C2E18 {
    void *vtable; Context_824C2E18 *context; unsigned __int64 tick;
    void *child; char pad[0x10]; unsigned char flag;
};
extern "C" {
System_824C2E18 *fn_825089A0();
void *fn_8265C9E0(unsigned int);
void *fn_825373A0(void *, void *);
extern char lbl_821C083C[];
}
static __forceinline State_824C2E18 *construct(State_824C2E18 *state, Context_824C2E18 *context)
{
        state->vtable = lbl_821C083C;
        state->context = context;
        state->tick = fn_825089A0()->vf0C();
        void *block = fn_8265C9E0(0x40);
        state->child = block ? fn_825373A0(block, context->value) : 0;
        state->flag = 0;
    return state;
}
extern "C" State_824C2E18 **fn_824C2E18(State_824C2E18 **self, Source_824C2E18 *source)
{
    State_824C2E18 *blockState = (State_824C2E18 *)fn_8265C9E0(0x28);
    State_824C2E18 *state = blockState ? construct(blockState, source->context) : 0;
    *self = state;
    return self;
}
