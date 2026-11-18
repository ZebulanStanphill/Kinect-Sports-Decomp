typedef struct Global_82BF9248 {
    char pad[0x1a];
    unsigned short head; /* 0x1a */
    unsigned short tail; /* 0x1c */
} Global_82BF9248;

typedef struct Links_82BF9248 {
    unsigned short pad[0x1c00];
    unsigned short next[0x400]; /* 0x3800 */
} Links_82BF9248;

extern Global_82BF9248 lbl_8322FD08;
extern Links_82BF9248 lbl_8322BCF8;
extern unsigned short lbl_8322B4F8[];

void fn_82BF9248(int id)
{
    Global_82BF9248 *g = &lbl_8322FD08;
    unsigned int tail = g->tail;

    if (tail != 0xffff)
        lbl_8322BCF8.next[tail] = id;
    g->tail = id;
    lbl_8322BCF8.next[id] = 0xffff;
    lbl_8322B4F8[id] = tail;
    if (g->head == 0xffff)
        g->head = id;
}
