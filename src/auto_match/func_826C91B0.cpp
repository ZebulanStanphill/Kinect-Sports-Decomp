struct Lookup_826C91B0 {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual unsigned char Find(const char *label, unsigned int *frame, int flags);
};

struct State_826C91B0 {
    char pad[0xc];
    const char **message;
};

struct Movie_826C91B0 {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void v038();
    virtual void v03c();
    virtual void v040();
    virtual void v044();
    virtual void v048();
    virtual void v04c();
    virtual void v050();
    virtual void v054();
    virtual void v058();
    virtual void v05c();
    virtual void v060();
    virtual void v064();
    virtual void v068();
    virtual void v06c();
    virtual void v070();
    virtual void v074();
    virtual void v078();
    virtual void v07c();
    virtual void v080();
    virtual void v084();
    virtual void v088();
    virtual void v08c();
    virtual void v090();
    virtual void v094();
    virtual void v098();
    virtual void v09c();
    virtual void v0a0();
    virtual void v0a4();
    virtual void v0a8();
    virtual void v0ac();
    virtual void v0b0();
    virtual void v0b4();
    virtual void v0b8();
    virtual void v0bc();
    virtual void v0c0();
    virtual void v0c4();
    virtual void v0c8();
    virtual void v0cc();
    virtual void v0d0();
    virtual void v0d4();
    virtual void v0d8();
    virtual void v0dc();
    virtual void v0e0();
    virtual void v0e4();
    virtual void v0e8();
    virtual void v0ec();
    virtual void v0f0();
    virtual void v0f4();
    virtual void v0f8();
    virtual void v0fc();
    virtual void v100();
    virtual void v104();
    virtual void v108();
    virtual void v10c();
    virtual void v110();
    virtual void v114();
    virtual void v118();
    virtual void v11c();
    virtual void Goto(unsigned int frame);
    char pad[0x80 - 4];
    int state; /* 0x80 */
    char pad84[0x9c - 0x84];
    Lookup_826C91B0 *lookup;
};

extern "C" State_826C91B0 *fn_8269F500(Movie_826C91B0 *self);
extern "C" void fn_826C8D90(void *self, const char *format, ...);

extern "C" int fn_826C91B0(Movie_826C91B0 *self, const char *label, unsigned int offset)
{
    unsigned int frame = -1;
    if (self->lookup->Find(label, &frame, 0)) {
        self->Goto(frame + offset);
        return 1;
    }
    int state = self->state;
    if (state == 0)
        state = (int)fn_8269F500(self);
    fn_826C8D90((char *)self + 0xc, "Error: %s, MovieImpl::GotoLabeledFrame('%s') unknown label\n",
                *((State_826C91B0 *)state)->message, label);
    return 0;
}
