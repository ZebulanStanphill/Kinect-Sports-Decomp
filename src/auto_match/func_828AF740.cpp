// Construct the derived network object and initialize its timing state.
struct System_828AF740 {
    virtual void vf00(); virtual void vf04(); virtual float vf08();
};
extern "C" {
System_828AF740 *fn_825089A0();
void fn_8289FC80(void *, void *, int, int, int, int, int, unsigned char);
void fn_8289F6C0(void *, void *);
void fn_828AF208(void *, int);
void *memcpy(void *, const void *, unsigned int);
extern char lbl_82024C08[];
}
struct Object_828AF740 {
    void *vtable; char base[0x60]; unsigned char data[0x24];
    int f88; float time, f90; unsigned char flags94[4];
    int f98, f9c, fa0, fa4, fa8, fac; unsigned char flagsb0[4];
    int fb4; float fb8; int fbc; unsigned __int64 fc0; float fc8;
};
static void clear4(int *p) { p[0]=0; p[1]=0; p[2]=0; p[3]=0; }
extern "C" Object_828AF740 *fn_828AF740(Object_828AF740 *self, void *owner,
    int a, int b, int c, const unsigned char *data, int d, int e) {
    fn_8289FC80(self, owner, a, b, c, d, e, 0);
    self->vtable = lbl_82024C08;
    memcpy(self->data, data, 0x24);
    self->f88 = 0;
    self->flags94[0] = 0;
    self->flags94[1] = 0;
    self->f90 = 0.0f;
    self->flags94[2] = 0;
    self->flags94[3] = 0;
    clear4(&self->f98);
    self->fb8 = 0.0f; self->fc8 = 0.0f;
    self->fac = 0;
    self->flagsb0[0] = 0; self->flagsb0[1] = 0;
    self->flagsb0[2] = 0; self->flagsb0[3] = 0;
    self->fb4 = 0; self->fc0 = 0;
    fn_8289F6C0(owner, self);
    self->time = fn_825089A0()->vf08();
    fn_828AF208(self, 0);
    return self;
}
