/* Checks whether the object's version string is "04.05.05.0032" and forwards the result to fn_82862430. */
int strcmp(const char *a, const char *b);

typedef struct Obj_828624A8 {
    char pad0[0xb];
    char version[1];    /* 0x0b */
} Obj_828624A8;

extern char lbl_8201F950[];   /* "04.05.05.0032" */
extern void fn_82862430(Obj_828624A8 *self, int current, void *ctx);

void fn_828624A8(Obj_828624A8 *self, void *ctx)
{
    fn_82862430(self, strcmp(self->version, lbl_8201F950) == 0, ctx);
}
