/* Finishes the first pending request of a user that belongs to the user's current device:
   issues it (as a raw value or as a 4-byte buffer) and reports whether one was found. */

typedef struct Request_825264F0 {
    void *device;           /* 0x0 */
    unsigned int id;        /* 0x4 */
    unsigned int value;     /* 0x8 */
    unsigned int pending;   /* 0xc */
    unsigned char isBuffer; /* 0x10 */
    char pad11[3];
} Request_825264F0;

typedef struct User_825264F0 {
    char pad0[0x24];
    Request_825264F0 requests[15]; /* 0x24 */
    char result[0x1c];             /* 0x150 */
    int issued;                    /* 0x16c */
} User_825264F0;

extern User_825264F0 lbl_832961E0[];
extern void *lbl_83265988;
extern void *fn_828EB518(unsigned int index);
extern unsigned char fn_828EA608(void *device);
extern void fn_82A1BE48(unsigned int user, unsigned int id, unsigned int value, void *result);
extern void fn_82A1BEE0(unsigned int user, unsigned int id, unsigned int size, void *buffer, void *result);

void fn_825264F0(unsigned char user)
{
    void *device;
    int i;

    if (user == 0xff) {
        device = lbl_83265988;
    } else {
        device = fn_828EB518(user);
    }
    for (i = 0; i < 15; i++) {
        if (lbl_832961E0[user].requests[i].pending != 0) {
            if (device != 0 && fn_828EA608(device) && lbl_832961E0[user].requests[i].device == device) {
                if (lbl_832961E0[user].requests[i].isBuffer) {
                    fn_82A1BEE0(user, lbl_832961E0[user].requests[i].id, 4,
                                &lbl_832961E0[user].requests[i].value, lbl_832961E0[user].result);
                } else {
                    fn_82A1BE48(user, lbl_832961E0[user].requests[i].id, lbl_832961E0[user].requests[i].value,
                                lbl_832961E0[user].result);
                }
                lbl_832961E0[user].requests[i].pending = 0;
                lbl_832961E0[user].issued = 1;
                return;
            }
            lbl_832961E0[user].requests[i].pending = 0;
        }
    }
    lbl_832961E0[user].issued = 0;
}
