typedef struct Port_829DA6D8 {
    int state;
    int unk04[5];
} Port_829DA6D8;

typedef struct User_829DA6D8 {
    char unk000[0x140];
    int state; /* 0x140 */
    char unk144[0x150 - 0x144];
} User_829DA6D8;

typedef struct Data_829DA6D8 {
    Port_829DA6D8 ports[8]; /* 0x00 */
    User_829DA6D8 users[1]; /* 0xC0 */
} Data_829DA6D8;

extern int lbl_83215000[];
extern char *lbl_832179FC;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
typedef struct User_829DA6D8 User_829DA6D8;
extern unsigned char fn_829D3FE8(unsigned int user, char *base, int *index);
extern int fn_829D5A08(int kind, char *base, User_829DA6D8 *entry, int index, unsigned int user,
                       unsigned int port, unsigned int flags, void *buffer, void *overlapped);

int fn_829DA6D8(unsigned int user, unsigned int port, unsigned int flags, void *buffer, void *overlapped)
{
    void *cs;
    char *base;
    User_829DA6D8 *entry;
    int index;
    int hr;

    if ((flags & ~0x21) != 0) {
        return 0x80070057;
    }
    if ((flags & 1) == 0) {
        return 0x80070057;
    }
    if ((flags & 0x20) != 0 && port >= 8 && (int)port != -2) {
        return 0x80070057;
    }
    if ((flags & 0x10) != 0 && buffer == 0) {
        return 0x80070057;
    }
    if (lbl_83215000[0x2148 / 4] == 0 || lbl_832179FC == 0) {
        return 0x83010005;
    }
    if (lbl_83215000[0x58 / 4] == 0) {
        return 0x8007048f;
    }
    cs = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(cs);
    base = lbl_832179FC;
    index = 0;
    if (!fn_829D3FE8(user, base, &index)) {
        hr = 0x83010008;
        RtlLeaveCriticalSection(cs);
        return hr;
    }
    entry = &((Data_829DA6D8 *)base)->users[index];
    if (entry->state == -1) {
        hr = 0x8301000c;
        RtlLeaveCriticalSection(cs);
        return hr;
    }
    if ((flags & 0x20) != 0 && port <= 8 && ((Port_829DA6D8 *)base)[port].state == 0) {
        hr = 0x80070057;
        RtlLeaveCriticalSection(cs);
        return hr;
    }
    hr = fn_829D5A08(2, base, entry, index, user, port, flags, buffer, overlapped);
    RtlLeaveCriticalSection(cs);
    return hr;
}
