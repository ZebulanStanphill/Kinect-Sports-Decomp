typedef struct Query_82A9F810 {
    const void *vtable;
    int arg;
    int count;
    int hr;
    int result;
} Query_82A9F810;

typedef struct Device_82A9F810 {
    char pad0[0x90];
    int hr;       /* 0x90 */
    int state;    /* 0x94 */
} Device_82A9F810;

extern const void *lbl_820D2894[4];
extern void fn_82A9F6F8(Device_82A9F810 *self, Query_82A9F810 *query);

int fn_82A9F810(Device_82A9F810 *self)
{
    int result = 0;
    Query_82A9F810 query;

    if (self->hr < 0) {
    } else {
        switch (self->state) {
        case 1:
            return 0;
        case 3:
            query.arg = 0;
            query.result = 0;
            query.hr = 0;
            query.count = 1;
            query.vtable = lbl_820D2894;
            fn_82A9F6F8(self, &query);
            if (query.hr >= 0) {
                result = query.result;
            }
            self->hr = query.hr;
            break;
        default:
            return 0;
        }
    }
    return result;
}
