/* boost::any::holder<NetworkSpectatorAthleticsHumanFrame>::clone() (see func_82446D40.cpp). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float v[4]; unsigned int u[4]; } __vector4;

typedef struct Frame_82446E90 {
    void *vtable;
    char data[0x19c];
    __vector4 vector;
} Frame_82446E90;

typedef struct Holder_82446E90 {
    void *vtable;
    int pad[3];
    Frame_82446E90 held;
} Holder_82446E90;

extern void *fn_8265C9E0(unsigned int size);
extern Frame_82446E90 *fn_823BE2A8(Frame_82446E90 *self, const Frame_82446E90 *o);
extern char lbl_821B9B9C[];
extern char lbl_821B9BBC[];

static __forceinline void Frame_CopyFrom(Frame_82446E90 *self, const Frame_82446E90 *o)
{
    fn_823BE2A8(self, o);
    self->vtable = lbl_821B9B9C;
    self->vector = o->vector;
}

Holder_82446E90 *fn_82446E90(const Holder_82446E90 *self)
{
    Holder_82446E90 *h = (Holder_82446E90 *)fn_8265C9E0(0x1c0);

    if (h != 0) {
        h->vtable = lbl_821B9BBC;
        Frame_CopyFrom(&h->held, &self->held);
        return h;
    }
    return 0;
}
