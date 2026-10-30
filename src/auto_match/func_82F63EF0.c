typedef void (*_purecall_handler)(void);
extern _purecall_handler __pPurecall;
extern void _NMSG_WRITE(int);
extern unsigned int _set_abort_behavior(unsigned int, unsigned int);
extern void abort(void);

void _purecall(void)
{
    _purecall_handler purecall = __pPurecall;
    if (purecall != 0) {
        purecall();
    }
    _NMSG_WRITE(0x19);
    _set_abort_behavior(0, 1);
    abort();
}
