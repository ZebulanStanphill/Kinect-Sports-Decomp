typedef void (*Handler_82800158)(void);

typedef struct Entry_82800158 {
    char pad0[0x18];
    Handler_82800158 handler; /* 0x18 */
    void *unk1c;
    void *unk20;
} Entry_82800158;

extern Entry_82800158 lbl_83156AF0[];

void fn_82800158(unsigned short type, Handler_82800158 handler)
{
    lbl_83156AF0[type].handler = handler;
}
