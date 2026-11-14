typedef struct Self_8305B5B0 {
    char pad[0x8];
    void *third;
    void *second;
    void *first;
} Self_8305B5B0;

extern void fn_8305ADE8(void *obj, void *out);
extern void fn_83058528(void *obj, void *out);
extern void fn_83059730(void *obj, void *out);

void fn_8305B5B0(Self_8305B5B0 *self, void *out)
{
    if (self->first != 0) {
        fn_8305ADE8(self->first, out);
        return;
    }
    if (self->second != 0) {
        fn_83058528(self->second, out);
        return;
    }
    fn_83059730(self->third, out);
}
