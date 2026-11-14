/* Checks whether the object's version string is "04.05.05.0032" and forwards the result to fn_828626F0. */
int strcmp(const char *a, const char *b);

typedef struct Obj_828627A0 {
    char pad0[0xb];
    char version[1];    /* 0x0b */
} Obj_828627A0;

extern char lbl_8201F960[];   /* "04.05.05.0032" */
extern void fn_828626F0(Obj_828627A0 *self, int current, void *ctx);

void fn_828627A0(Obj_828627A0 *self, void *ctx)
{
    fn_828626F0(self, strcmp(self->version, lbl_8201F960) == 0, ctx);
}
