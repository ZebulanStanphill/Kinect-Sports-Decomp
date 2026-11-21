typedef struct Entry_82C23858 {
    unsigned char id; /* 0x00 */
    char pad1[0x40 - 0x1];
    int voice; /* 0x40 */
    char pad44[0x50 - 0x44];
    int active;           /* 0x50 */
    unsigned int mask[4]; /* 0x54 */
    int volume;           /* 0x64 */
} Entry_82C23858;

typedef struct Track_82C23858 {
    char pad0[0x64];
    int volume; /* 0x64 */
} Track_82C23858;

typedef struct Settings_82C23858 {
    char pad0[0x48];
    short count; /* 0x48 */
} Settings_82C23858;

typedef struct Context_82C23858 {
    char pad0[4];
    Settings_82C23858 *settings; /* 0x04 */
    char pad8[0x94 - 0x8];
    void *items; /* 0x94 */
    char pad98[0xb4 - 0x98];
    int pendingB4; /* 0xb4 */
    char padB8[0xe4 - 0xb8];
    int pendingE4; /* 0xe4 */
    int failed;    /* 0xe8 */
} Context_82C23858;

typedef struct Message_82C23858 {
    unsigned char track; /* 0x0 */
    int volume;          /* 0x4 */
} Message_82C23858;

typedef struct Status_82C23858 {
    int completed; /* 0x0 */
    int result;    /* 0x4 */
} Status_82C23858;

extern int fn_82C10F40(void *table, unsigned char index, Track_82C23858 **out);
extern int fn_82C10F68(void *table, int *cursor, Entry_82C23858 **item, unsigned char *flag);
extern int fn_82C10FD0(void *table, int cursor, Entry_82C23858 **item, unsigned char *flag);
extern int fn_82C11038(void *table, int cursor);
extern int fn_82C11CB8(int volume, unsigned char id, unsigned int *mask, int voice);

int fn_82C23858(Context_82C23858 *self, int message, Message_82C23858 *data, Status_82C23858 *status)
{
    unsigned char index;
    Track_82C23858 *track;
    Entry_82C23858 *item;
    unsigned char flag;
    int cursor;
    int hr;

    if (status->completed != 0) {
        hr = 0;
        if (message == 0x20030) {
            self->pendingE4 = 0;
            if (status->result >= 0) {
                self->pendingB4 = 0;
            } else {
                self->failed = 1;
                hr = status->result;
            }
        }
        return hr;
    }
    if (message != 0x20050) {
        return 0x805000B2;
    }
    index = data->track;
    cursor = 0;
    item = 0;
    hr = fn_82C10F40(self->items, index, &track);
    if (hr < 0) {
        return hr;
    }
    track->volume = data->volume;
    if (self->settings->count <= 0) {
        return hr;
    }
    hr = fn_82C10F68(self->items, &cursor, &item, &flag);
    if (hr != 0x80500016) {
        if (hr < 0) {
            return hr;
        }
        do {
            if (hr < 0) {
                return hr;
            }
            if (item->active != 0) {
                unsigned int bit = 1 << (index % 32);
                if ((item->mask[index >> 5] & bit) == bit) {
                    item->volume = track->volume;
                    {
                        int volume = item->volume;
                        hr = fn_82C11CB8(volume, item->id, item->mask, item->voice);
                    }
                    if (hr < 0) {
                        return hr;
                    }
                }
            }
            hr = fn_82C10FD0(self->items, cursor, &item, &flag);
        } while (hr != 0x80500016);
    }
    hr = fn_82C11038(self->items, cursor);
    return 0x80500016 != hr ? hr : 0;
}
