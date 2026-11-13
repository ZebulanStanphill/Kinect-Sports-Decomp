int strcmp(const char *, const char *);
extern void fn_8285A128(void *self, int match, void *arg);
extern void fn_828624A8(void *p, void *arg);
extern char lbl_8201F7C0[];

typedef struct Obj_8285A1B8 {
    char pad0[0xb];
    char name[0x44 - 0xb];
    void *f44;
} Obj_8285A1B8;

void fn_8285A1B8(Obj_8285A1B8 *self, void *arg)
{
    fn_8285A128(self, strcmp(self->name, lbl_8201F7C0) == 0, arg);
    if (self->f44 != 0)
        fn_828624A8(self->f44, arg);
}
