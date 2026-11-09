typedef struct Exception_82230028 {
    void *vtable;
    const char *what;
} Exception_82230028;

const char *fn_82230028(Exception_82230028 *self)
{
    const char *what = self->what;
    return what ? what : "unknown exception";
}
