typedef struct Thread_82FE7220 {
    int result;
    int pad[2];
    void *handle;
} Thread_82FE7220;
extern void fn_82A1E650(void *h, unsigned int timeout);
extern void fn_82A1E658(void *h);

static void close_handle(void **ph)
{
    if (*ph != 0) {
        fn_82A1E658(*ph);
    }
    *ph = 0;
}

int fn_82FE7220(Thread_82FE7220 *t, int code)
{
    if (code != 1) {
        close_handle(&t->handle);
        return code;
    }
    fn_82A1E650(t->handle, 0xffffffff);
    close_handle(&t->handle);
    return t->result;
}
