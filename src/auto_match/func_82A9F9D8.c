/* XDK ssm property getter: answers the "SSMUseTranslator" query with the object's value. */
int strcmp(const char *a, const char *b);

typedef struct Obj_82A9F9D8 {
    int pad0;
    int pad4;
    unsigned int useTranslator;     /* 0x08 */
} Obj_82A9F9D8;

extern char lbl_820D2E90[];   /* "SSMUseTranslator" */

int fn_82A9F9D8(Obj_82A9F9D8 *self, const char *name, unsigned int *value)
{
    if (name != 0 && strcmp(name, lbl_820D2E90) == 0) {
        *value = self->useTranslator;
        return 1;
    }
    return 0;
}
