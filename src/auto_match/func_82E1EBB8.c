typedef struct Log_82E1EBB8 {
    char pad[2];
    unsigned char open;
    char pad3;
    int state;
} Log_82E1EBB8;

typedef struct Owner_82E1EBB8 {
    char pad[9];
    unsigned char active;
    unsigned char pending;
    char padb;
    unsigned char flush;
    char padd[2];
    unsigned char wait;
    char pad10[0x2c];
    void *event;
    char pad40[0x14];
    Log_82E1EBB8 *log;
} Owner_82E1EBB8;

extern void fn_82E1EAE8(Owner_82E1EBB8 *self);
extern unsigned int fn_82A1F2F8(void);
extern int fn_82A1E650(void *event, unsigned int timeout);
extern void fn_82E20B98(Log_82E1EBB8 *log);
extern void *fn_82E20890(Log_82E1EBB8 *log);
extern void fn_82E205F8(void *item, const char *text);
extern void fn_82E208B0(Log_82E1EBB8 *log, void *item, const char *text);
extern void fn_82E205A0(void *item, const char *text);
extern void fn_82E20E58(Log_82E1EBB8 *log);
extern char lbl_8214BA14[];

void fn_82E1EBB8(Owner_82E1EBB8 *self)
{
    if (self->active) {
        if (self->flush) {
            fn_82E1EAE8(self);
        }
        self->pending = 0;
        if (self->wait) {
            fn_82A1F2F8();
            fn_82A1E650(self->event, -1);
            fn_82A1F2F8();
        }
        if (self->log->open) {
            fn_82E20B98(self->log);
            self->log->state = 3 - self->log->state;
        } else {
            void *item = fn_82E20890(self->log);
            fn_82E205F8(item, 0);
            fn_82E208B0(self->log, item, "Log Closed");
            fn_82E205A0(item, lbl_8214BA14);
            fn_82E20E58(self->log);
        }
    }
}
