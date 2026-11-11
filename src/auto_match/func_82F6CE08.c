extern void _FF_MSGBANNER(void);
extern void _NMSG_WRITE(int);
extern __declspec(noreturn) void doexit(int code, int quick);

void _amsg_exit(int rterrnum)
{
    _FF_MSGBANNER();
    _NMSG_WRITE(rterrnum);
    doexit(1, 0);
}
