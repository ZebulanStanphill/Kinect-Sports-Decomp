typedef struct Query_82A9F8B0 {
    const void *vtable;
    int arg;
    int count;
    int hr;
    unsigned int a;
    unsigned int b;
    unsigned int result;
} Query_82A9F8B0;

typedef struct Device_82A9F8B0 {
    char pad0[0x90];
    int hr;       /* 0x90 */
    int state;    /* 0x94 */
} Device_82A9F8B0;

extern const void *lbl_820D28A4[4];
extern void fn_82A9F6F8(Device_82A9F8B0 *self, Query_82A9F8B0 *query);

int fn_82A9F8B0(Device_82A9F8B0 *self, unsigned int a, unsigned int b, unsigned int *out)
{
    int hr;
    Query_82A9F8B0 query;

    if (self->hr < 0) {
    } else {
        switch (self->state) {
        case 1:
            return 0;
        case 3:
            query.a = a;
            query.b = b;
            query.arg = 0;
            query.vtable = lbl_820D28A4;
            query.count = 1;
            query.result = 0;
            query.hr = 0;
            fn_82A9F6F8(self, &query);
            hr = query.hr;
            if (hr >= 0) {
                *out = query.result;
            }
            break;
        default:
            hr = 0x80004005;
            break;
        }
        self->hr = hr;
    }
    return self->hr;
}
