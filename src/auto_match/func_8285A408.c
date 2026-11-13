int strcmp(const char *, const char *);
extern void fn_8285A3A8(void *self, int match, void *arg);
extern void fn_828627A0(void *p, void *arg);
extern char lbl_8201F7D0[];

typedef struct Obj_8285A408 {
    char pad0[0xb];
    char version[0x39];
    void *f44;
} Obj_8285A408;

void fn_8285A408(Obj_8285A408 *self, void *arg)
{
    fn_8285A3A8(self, strcmp(self->version, lbl_8201F7D0) == 0, arg);
    if (self->f44 != 0) {
        fn_828627A0(self->f44, arg);
    }
}
