/* Queries a port's capabilities through fn_829C9BB0 and, on success, copies
 * the type bits and the four limit words into both capability records of
 * the port; returns the status as an HRESULT. */
typedef struct Caps_829C7C30 {
    unsigned int flags; /* 0x00 */
    char pad04[0x2C];
    unsigned int limits[4]; /* 0x30 */
    char pad40[0x1C];
} Caps_829C7C30;

typedef struct Request_829C7C30 {
    unsigned int size; /* 0x00 */
    char pad04[0x10];
    unsigned int reserved; /* 0x14 */
    unsigned int pad18;    /* 0x18 */
    Caps_829C7C30 caps;    /* 0x1C */
} Request_829C7C30;

typedef struct Port_829C7C30 {
    long refs;             /* 0x00 */
    Caps_829C7C30 caps;    /* 0x04 */
    Caps_829C7C30 current; /* 0x60 */
    char padBC[0xC8];
} Port_829C7C30;

typedef struct Globals_829C7C30 {
    char pad0[0x6ac];
    Port_829C7C30 ports[2]; /* 0x6AC */
} Globals_829C7C30;

extern Globals_829C7C30 lbl_83215000;

extern int fn_829C9BB0(Request_829C7C30 *request);
extern unsigned int RtlNtStatusToDosError(int status);

int fn_829C7C30(int port)
{
    Request_829C7C30 request;
    int status;
    int error;
    unsigned int type;
    unsigned int limit0;
    unsigned int limit1;
    unsigned int limit2;
    unsigned int limit3;
    Caps_829C7C30 *caps;
    Caps_829C7C30 *current;

    request.size = 0x24;
    request.reserved = 0;
    status = fn_829C9BB0(&request);
    if (status >= 0) {
        type = request.caps.flags & 0xf;
        limit0 = request.caps.limits[0];
        limit1 = request.caps.limits[1];
        limit2 = request.caps.limits[2];
        limit3 = request.caps.limits[3];
        current = &lbl_83215000.ports[port].current;
        caps = &lbl_83215000.ports[port].caps;
        current->flags = (current->flags & ~0xf) | type;
        {
            unsigned int *limits = current->limits;
            limits[0] = limit0;
            limits[1] = limit1;
            limits[2] = limit2;
            limits[3] = limit3;
        }
        caps->flags = (caps->flags & ~0xf) | type;
        {
            unsigned int *limits = caps->limits;
            limits[0] = limit0;
            limits[1] = limit1;
            limits[2] = limit2;
            limits[3] = limit3;
        }
    }
    error = RtlNtStatusToDosError(status);
    if (error > 0) {
        error = (error & 0xffff) | 0x80070000;
    }
    return error;
}
