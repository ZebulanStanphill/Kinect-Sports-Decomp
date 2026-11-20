typedef struct ListNode_82521888 {
    struct ListNode_82521888 *next; /* 0x00 */
    struct ListNode_82521888 *prev; /* 0x04 */
    unsigned int f8;                /* 0x08 */
    unsigned int deviceId;          /* 0x0c */
} ListNode_82521888;

typedef struct ListIterator_82521888 {
    ListNode_82521888 *node;
} ListIterator_82521888;

typedef struct Content_82521888 {
    char pad00[0x98];
    unsigned int deviceId; /* 0x98 */
    char pad9c[0x4];
    ListNode_82521888 *head; /* 0xa0 */
} Content_82521888;

typedef struct Sp_82521888 {
    Content_82521888 *px;
    int *rep;
} Sp_82521888;

typedef struct Manager_82521888 {
    char pad00[0xa0];
    long busy; /* 0xa0 */
} Manager_82521888;

typedef struct Saver_82521888 {
    char pad000[0xd8];
    unsigned char closing; /* 0x0d8 */
    char padd9[0x110 - 0xd9];
    int saving; /* 0x110 */
    char pad114[0xc];
    int slot; /* 0x120 */
} Saver_82521888;

typedef struct Request_82521888 {
    Saver_82521888 *saver; /* 0x00 */
    int a;                 /* 0x04 */
    int b;                 /* 0x08 */
    int c;                 /* 0x0c */
    int d;                 /* 0x10 */
} Request_82521888;

extern long _InterlockedIncrement(long volatile *addend);
extern unsigned char fn_828EA610(Saver_82521888 *saver);
extern void fn_822315A0(int *rep);
extern Sp_82521888 *fn_827D6E18(Sp_82521888 *out, unsigned int profile, int slot);
extern void fn_82522588(Sp_82521888 *out, Sp_82521888 *in);
extern unsigned long fn_82A264D8(unsigned long deviceId, void *overlapped);
extern void fn_8259BDA8(ListIterator_82521888 *it);
extern void fn_82521AB0(Saver_82521888 *saver);
extern Request_82521888 *fn_82522D98(unsigned int size);
extern void fn_825224E8(Manager_82521888 *manager, Saver_82521888 *saver, int kind, void (*run)(void),
                        void (*done)(void), Request_82521888 *request);
extern void fn_82522050(void);
extern void fn_825220C8(void);
extern void fn_82522258(Saver_82521888 *saver);
extern unsigned int lbl_83265A24;

unsigned char fn_82521888(Manager_82521888 *self, Saver_82521888 *saver)
{
    int scheduled = 0;
    Sp_82521888 content;
    Sp_82521888 handle;
    Content_82521888 *item;
    ListNode_82521888 *head;
    ListIterator_82521888 it;
    Request_82521888 *request;

    if (fn_828EA610(saver) == 0 && saver->closing == 0 && saver->slot != -1) {
        fn_82522588(&content, fn_827D6E18(&handle, lbl_83265A24, saver->slot));
        if (handle.rep != 0)
            fn_822315A0(handle.rep);
        item = content.px;
        if (item->deviceId != 0 && fn_82A264D8(item->deviceId, 0) != 0)
            goto schedule;
        head = item->head;
        for (it.node = head->next; it.node != head; fn_8259BDA8(&it)) {
            if (fn_82A264D8(it.node->deviceId, 0) != 0)
                goto schedule;
        }
        goto check;
    schedule:
        _InterlockedIncrement(&self->busy);
        fn_82521AB0(saver);
        request = fn_82522D98(0x14);
        scheduled = 1;
        request->saver = saver;
        request->a = 1;
        request->b = 0;
        request->c = 0;
        fn_825224E8(self, saver, 0, fn_82522050, fn_825220C8, request);
    check:
        if (saver->saving == 1) {
            saver->saving = 0;
            _InterlockedIncrement(&self->busy);
            fn_82522258(saver);
        }
        if (content.rep != 0)
            fn_822315A0(content.rep);
    }
    return (unsigned char)scheduled;
}
