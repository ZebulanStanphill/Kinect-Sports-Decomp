extern void fn_82AA62B8(void *, char *, int, int, void *);
extern __declspec(noreturn) void longjmp(void *, int);
typedef void (*Callback_82AA64F8)(void *, int, int, int, const char *);

void fn_82AA64F8(char *self, int error, void *arguments)
{
    char message[256];
    Callback_82AA64F8 callback;
    fn_82AA62B8(self, message, 256, error, arguments);
    callback = *(Callback_82AA64F8 *)(self + 0x9bc);
    if (callback != 0 && error != 0xdd1) {
        callback(*(void **)(self + 0x9b8), 1, 0, error - 0x44c, message);
    }
    switch (error) {
    case 0xdbd:
        *(unsigned int *)(self + 0x9b0) = 0x8007000e;
        break;
    case 0xdc5:
        break;
    case 0xdc7:
        *(unsigned int *)(self + 0x9b0) = 0x80004004;
        break;
    case 0xdd1:
        *(unsigned int *)(self + 0x9b0) = 0x80004001;
        break;
    default:
        *(unsigned int *)(self + 0x9b0) = 0x80004005;
        break;
    }
    longjmp(self + 0x470, error);
}
