typedef struct Slot_8245D538 {
    int pad00;
    int id; /* 0x04 */
    int pad08;
    int value; /* 0x0c */
    int pad10[3];
} Slot_8245D538;

typedef struct Manager_8245D538 {
    void *vt;               /* 0x00 */
    int f04;                /* 0x04 */
    int f08;                /* 0x08 */
    int f0c;                /* 0x0c */
    int f10;                /* 0x10 */
    int f14;                /* 0x14 */
    int f18;                /* 0x18 */
    int f1c;                /* 0x1c */
    int f20;                /* 0x20 */
    int f24;                /* 0x24 */
    int f28;                /* 0x28 */
    int f2c;                /* 0x2c */
    int a[3];               /* 0x30 */
    int b[3];               /* 0x3c */
    int f48;                /* 0x48 */
    int f4c;                /* 0x4c */
    int f50;                /* 0x50 */
    int f54;                /* 0x54 */
    int f58;                /* 0x58 */
    int pad5c[2];           /* 0x5c */
    Slot_8245D538 current;  /* 0x64 */
    Slot_8245D538 slots[3]; /* 0x80 */
    int fd4;                /* 0xd4 */
    int fd8;                /* 0xd8 */
    int fdc;                /* 0xdc */
    int fe0;                /* 0xe0 */
    char lock[0x1c];        /* 0xe4 */
} Manager_8245D538;

extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821BBC84[];
extern Manager_8245D538 *lbl_83276594;
extern void RtlInitializeCriticalSection(void *lock);

void fn_8245D538(void)
{
    Manager_8245D538 *manager = (Manager_8245D538 *)fn_8265C9E0(0x100);

    if (manager != 0) {
        int i;

        manager->f04 = 0;
        manager->vt = lbl_821BBC84;
        manager->f08 = 0;
        manager->f0c = 0;
        manager->f10 = 0;
        manager->f54 = 0;
        manager->f58 = 0;
        manager->f50 = 0;
        manager->f14 = 0;
        manager->f18 = 0;
        manager->f1c = 0;
        manager->f20 = 0;
        manager->f48 = 0;
        manager->f4c = 0;
        manager->fdc = 0;
        manager->fe0 = 0;
        manager->fd4 = 0;
        manager->fd8 = 0;
        manager->f2c = 0;
        manager->f28 = 0;
        for (i = 0; i < 3; i++) {
            manager->b[i] = 0;
            manager->a[i] = 0;
            manager->slots[i].value = 0;
            manager->slots[i].id = -1;
        }
        manager->current.id = -1;
        manager->current.value = 0;
        manager->f24 = 0;
        lbl_83276594 = manager;
    } else {
        lbl_83276594 = 0;
    }
    RtlInitializeCriticalSection(lbl_83276594->lock);
}
