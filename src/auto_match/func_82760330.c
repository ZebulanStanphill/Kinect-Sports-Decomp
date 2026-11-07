typedef char *va_list;
extern void __cdecl __va_start(va_list *ap, ...);

extern unsigned char fn_826E7448(void);

typedef struct Logger_82760330 Logger_82760330;

typedef struct LoggerVtbl_82760330 {
    void (*slot0)(Logger_82760330 *self);
    void (*Write)(Logger_82760330 *self, int level, int fmt, va_list args);
} LoggerVtbl_82760330;

struct Logger_82760330 {
    LoggerVtbl_82760330 *vt;
};

extern Logger_82760330 *fn_826E7430(int id);

void fn_82760330(int id, int fmt, ...)
{
    va_list args;
    Logger_82760330 *p;

    __va_start(&args, fmt);
    if (fn_826E7448() != 0) {
        p = fn_826E7430(id);
        if (p != 0) {
            p->vt->Write(p, 0x31, fmt, args);
        }
    }
}
