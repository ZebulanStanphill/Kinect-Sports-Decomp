typedef struct Entry_82FE6BC0 {
    unsigned int id;
    int value;
} Entry_82FE6BC0;

typedef struct Msg_82FE6BC0 {
    short unknown;
    short type;
    int value;
    unsigned int count;
    Entry_82FE6BC0 entries[4];
    char rest[4];
} Msg_82FE6BC0;

extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
extern unsigned int fn_8300F150(void);
extern int fn_8300F208(void *queue, void *msg, unsigned short size);
extern void *lbl_832642E4;

int fn_82FE6BC0(int value, const Entry_82FE6BC0 *entries, unsigned int count)
{
    Msg_82FE6BC0 m;
    unsigned int i;
    unsigned int j;
    if (count > 4)
        return 0x1f;
    if (count != 0) {
        for (i = 0; i < count - 1; i++) {
            for (j = i + 1; j < count; j++) {
                if (entries[i].id == entries[j].id)
                    return 0x1f;
            }
        }
    }
    m.type = 0xd;
    m.value = value;
    m.count = count;
    fn_82A1DDC0(m.entries, entries, count * sizeof(Entry_82FE6BC0));
    return fn_8300F208(lbl_832642E4, &m, fn_8300F150());
}
