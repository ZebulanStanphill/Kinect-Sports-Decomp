typedef struct Session_82BE3908 {
    char pad0[0x10];
    int state; /* 0x10 */
} Session_82BE3908;

extern int fn_82BE2530(Session_82BE3908 *self);
extern void fn_82BE2E60(int a, int b);
extern int fn_82BE3328(Session_82BE3908 *self);
extern int fn_82BE5240(Session_82BE3908 *self, int code, const char *text);
extern int fn_82F64068(char *buffer, unsigned int size, unsigned int count, const char *format, ...);
extern char lbl_82196582[];
extern void *memset(void *dst, int value, unsigned int size);

int fn_82BE3908(Session_82BE3908 *self)
{
    int result = 0;
    int next;
    char message[0x40];

    memset(message, 0, sizeof(message));
    switch (self->state) {
    case 5:
    case 8:
        result = fn_82BE2530(self);
        self->state = 7;
        if (result == 0)
            goto exit;
        fn_82F64068(message, 0x40, 0x3f, "Failed to Locate Service: %d", result);
        break;
    case 6:
        fn_82BE2E60(0, 0);
        return 200;
    case 10:
        result = fn_82BE3328(self);
        self->state = 9;
        if (result == 0)
            goto exit;
        fn_82F64068(message, 0x40, 0x3f, "Open Session Failed: %d", result);
        break;
    case 12:
        next = 2;
        goto done;
    default:
        goto exit;
    }
    fn_82BE5240(self, result, lbl_82196582);
    next = 0;
done:
    self->state = next;
exit:
    return result;
}
