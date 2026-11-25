typedef struct Adapter_829C7DE0 {
    char pad00[0xb4];
    int mode; /* 0xb4 */
    char padb8[0x10];
    int connected;      /* 0xc8 */
    unsigned int state; /* 0xcc */
    char padd0[0x184 - 0xd0];
} Adapter_829C7DE0;

typedef struct Network_829C7DE0 {
    char pad000[0x600];
    Adapter_829C7DE0 adapter[2];
} Network_829C7DE0;

typedef struct Query_829C7DE0 {
    int size;
    char pad04[0x10];
    int flags; /* 0x14 */
    char pad18[0x44];
    int result; /* 0x5c */
    char pad60[0x20];
} Query_829C7DE0;

extern int lbl_83214FFC;
extern Network_829C7DE0 lbl_83215000;
extern int fn_829C9BB0(Query_829C7DE0 *);
extern unsigned long RtlNtStatusToDosError(long);

int fn_829C7DE0(int reserved, unsigned int index, unsigned int selector, int *out)
{
    int status = 0;

    if (index >= 2)
        return 0x80070057;
    if (lbl_83214FFC == 0)
        return 0x8000ffff;
    if (!out)
        return 0x80070057;
    *out = 0;
    if (reserved != 0 || selector > 3)
        return 0x80070057;

    switch (selector) {
    case 0:
        *out = lbl_83215000.adapter[index].connected;
        goto done;
    case 2:
        switch (lbl_83215000.adapter[index].state) {
        case 0:
            *out = 0;
            goto done;
        case 2:
            *out = 1;
            goto done;
        case 3:
            *out = 2;
            goto done;
        case 1:
            *out = 3;
            goto done;
        default:
            return 0x8000ffff;
        }
    case 1:
        switch (lbl_83215000.adapter[index].mode) {
        case 1:
            *out = 0;
            goto done;
        case 2:
            *out = 1;
            goto done;
        case 3:
            *out = 2;
            goto done;
        default:
            return 0x8000ffff;
        }
    case 3: {
        Query_829C7DE0 request;
        request.flags = 0;
        request.size = 0x24;
        status = fn_829C9BB0(&request);
        if (status >= 0)
            *out = request.result;
        status = (int)RtlNtStatusToDosError(status);
        if (status > 0)
            status = (status & 0xffff) | 0x80070000;
    } break;
    }
done:
    return status;
}
