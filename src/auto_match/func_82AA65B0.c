typedef char *va_list;
void __cdecl __va_start(va_list *, ...);
#define va_start(ap, x) (__va_start(&(ap), (x)))

typedef void (*Callback_82AA65B0)(void *ctx, int a, int b, int code, const char *message);

typedef struct Obj_82AA65B0 {
    char pad0[0x9b8];
    void *callbackCtx;              /* 0x9b8 */
    Callback_82AA65B0 callback;     /* 0x9bc */
} Obj_82AA65B0;

extern void fn_82AA62B8(Obj_82AA65B0 *self, char *buffer, int size, int code, va_list args);

void fn_82AA65B0(Obj_82AA65B0 *self, int code, ...)
{
    va_list args;
    char message[0x100];

    va_start(args, code);
    fn_82AA62B8(self, message, 0x100, code, args);
    if (self->callback != 0) {
        self->callback(self->callbackCtx, 0, 0, code - 0x44c, message);
    }
}
