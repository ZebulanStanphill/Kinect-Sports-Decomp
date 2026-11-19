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

void fn_82BF91D8(int id)
{
    unsigned int next = lbl_8322BCF8.next[id];
    unsigned int prev = lbl_8322B4F8[id];

    if (next == 0xffff)
        lbl_8322FD08.tail = prev;
    else if (next < 0xfff0)
        lbl_8322B4F8[next] = prev;
    if (prev == 0xffff)
        lbl_8322FD08.head = next;
    else if (prev < 0xfff0)
        lbl_8322BCF8.next[prev] = next;
}
