extern int fn_827D50B8(void *self);
extern int fn_823AB478(void *self);
extern void fn_82522ED8(void *self);
extern void fn_822315A0(void *self);
extern void fn_825223A8(void *self, unsigned int message);
extern unsigned char *lbl_832767C8;

typedef struct Request_82521F68 {
    unsigned char *object;
    int unused;
    int pending;
    int references;
    int value;
} Request_82521F68;

void fn_82521F68(void **self, unsigned char *context)
{
    void *object = self[0];
    Request_82521F68 *request = *(Request_82521F68 **)(context + 0x14);
    if (fn_827D50B8(object) == 0) {
        *(int *)(request->object + 0x120) = request->value;
        if (request->pending != 0) {
            unsigned char *manager = lbl_832767C8;
            void (**vtable)(void *, void *, void (*)(void *, unsigned int)) =
                *(void (***)(void *, void *, void (*)(void *, unsigned int)))manager;
            vtable[3](manager, request->object, fn_825223A8);
        } else {
            unsigned char *manager = lbl_832767C8;
            manager[fn_823AB478(request->object) + 0x80] = 1;
        }
    } else {
        unsigned char *manager = lbl_832767C8;
        manager[fn_823AB478(request->object) + 0x78] = 1;
        *(int *)(request->object + 0x120) = -1;
    }
    if (--request->references <= 0) {
        fn_82522ED8(request);
    }
    fn_82522ED8(context);
    if (self[1] != 0) {
        fn_822315A0(self[1]);
    }
}
