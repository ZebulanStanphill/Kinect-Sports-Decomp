typedef struct ListEntry_82A31678 ListEntry_82A31678;

struct ListEntry_82A31678 {
    ListEntry_82A31678 *next; /* 0x00 */
    ListEntry_82A31678 *prev; /* 0x04 */
};

typedef struct Stream_82A31678 {
    char pad00[0x35];
    unsigned char flags; /* 0x35 */
} Stream_82A31678;

typedef struct Voice_82A31678 {
    Stream_82A31678 *stream; /* 0x00 */
    char pad04[0x44];
    ListEntry_82A31678 link; /* 0x48 */
} Voice_82A31678;

typedef struct Slot_82A31678 {
    char pad00[7];
    unsigned char flags; /* 0x07 */
} Slot_82A31678;

typedef struct Core_82A31678 {
    char pad00[0x30];
    Slot_82A31678 *slots; /* 0x30 */
    char pad34[0x18];
    unsigned int position; /* 0x4c */
    char pad50[0x30];
    ListEntry_82A31678 voices; /* 0x80 */
    int status;                /* 0x88 */
    unsigned int mode;         /* 0x8c */
    char pad90[0x10];
    unsigned int total;   /* 0xa0 */
    unsigned int pending; /* 0xa4 */
    unsigned int page;    /* 0xa8 */
    char padac[0x18];
    unsigned int state;      /* 0xc4 */
    unsigned char slotCount; /* 0xc8 */
    char padc9[7];
    unsigned int callback; /* 0xd0 */
    unsigned int context;  /* 0xd4 */
} Core_82A31678;

typedef struct Device_82A31678 {
    char pad00[0x18];
    Core_82A31678 *core; /* 0x18 */
} Device_82A31678;

extern char lbl_83219D04[];

extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern int fn_82A31620(Core_82A31678 *core);
extern int fn_82A2E260(Core_82A31678 *core, int a, int b);
extern void fn_82A2BBD8(Core_82A31678 *core, unsigned int *argument);

int fn_82A31678(Device_82A31678 *device, int code, unsigned int *argument)
{
    Core_82A31678 *core = device->core;
    int status;

    if (code != 0 && code != 1 && core->status != 0) {
        return core->status;
    }
    status = 0;
    switch (code) {
    case 0:
        RtlEnterCriticalSection(core);
        break;
    case 1:
        RtlLeaveCriticalSection(core);
        break;
    case 2:
        status = core->status;
        if (status == 0) {
            status = fn_82A31620(core);
            if (status >= 0) {
                status = fn_82A2E260(core, 0, -1);
            }
        }
        break;
    case 3:
        status = core->status;
        fn_82A2BBD8(core, argument);
        break;
    case 4:
        status = core->status;
        if (status == 0) {
            ListEntry_82A31678 *link = core->voices.next;
            Slot_82A31678 *slots;
            unsigned int count;
            unsigned int i;

            core->state &= 0x7fffffff;
            core->page = core->position >> 12;
            core->total += core->pending;
            core->pending = 0;
            while (link != &core->voices) {
                Stream_82A31678 *stream = ((Voice_82A31678 *)((char *)link - 0x48))->stream;

                link = link->next;
                stream->flags &= ~0x20;
            }
            count = core->slotCount;
            slots = core->slots;
            for (i = 0; i < count; i++) {
                slots[i].flags &= ~4;
            }
        }
        break;
    case 7:
        memcpy(argument, lbl_83219D04, 0x28);
        break;
    case 5:
        *argument = core->mode;
        break;
    case 6:
        core->mode = *argument;
        break;
    case 8:
        core->callback = argument[0];
        core->context = argument[1];
        break;
    default:
        status = 0xc0000010;
        break;
    }
    return status;
}
