typedef struct Exception_8265BE60 {
    void *vtable;
    const char *what;
} Exception_8265BE60;

const char *fn_8265BE60(Exception_8265BE60 *self)
{
    const char *what = self->what;
    return what ? what : "Unknown exception";
}
