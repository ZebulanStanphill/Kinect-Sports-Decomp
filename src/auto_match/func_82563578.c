typedef struct Kind_82563578 {
    int id;             /* 0x0 */
    unsigned int flags; /* 0x4 */
    unsigned int size;  /* 0x8 */
} Kind_82563578;

typedef struct Command_82563578 {
    unsigned short size; /* 0x0 */
    unsigned short pad[5];
    unsigned short kind;  /* 0xc */
    unsigned short flags; /* 0xe */
} Command_82563578;

typedef void (*Callback_82563578)(void *context);

extern Kind_82563578 lbl_8218E688[];
extern float fn_827F6428(void *self);
extern float fn_827F6310(void *self);
extern void fn_827F6430(void *self, float value);
extern void fn_82563688(void *self, int mode, Command_82563578 *command, Callback_82563578 callback, int arg);

void fn_82563578(void *self, int mode, Command_82563578 *command, Callback_82563578 callback, int arg)
{
    Command_82563578 *current;
    float saved;
    unsigned int flags;

    if (callback != 0) {
        saved = fn_827F6428(self);
        fn_827F6430(self, fn_827F6310(self) >= 0.0f ? 0.0f : 1.0f);
        current = command;
        while (current->kind != 0) {
            flags = current->kind < 0x32 ? lbl_8218E688[current->kind].flags : 0;
            if ((current->flags | flags) & 1) {
                fn_82563688(self, mode, current, callback, arg);
            }
            current = (Command_82563578 *)((char *)current + current->size);
        }
        fn_827F6430(self, saved);
    }
}
