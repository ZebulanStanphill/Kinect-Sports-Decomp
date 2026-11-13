/* Visibility-style flag query: answered from the two flag bits 0x180 at 0x8c when either is set,
   otherwise from the object returned by vtable slot 0x54 (1 when it is the object itself). */
typedef struct VObj_8269A8F0 VObj_8269A8F0;
struct VObj_8269A8F0 {
    int (**vt)();
    char pad04[0x8c - 0x4];
    unsigned int flags;
};

int fn_8269A8F0(VObj_8269A8F0 *self)
{
    unsigned int f = self->flags & 0x180;
    VObj_8269A8F0 *o;

    if (f != 0) {
        return f == 0x180;
    }
    o = (VObj_8269A8F0 *)self->vt[0x54 / 4](self, 1);
    if (o != self) {
        return o->vt[0xb8 / 4](o);
    }
    return 1;
}
