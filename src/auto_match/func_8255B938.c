/* Finishes the first pending short-table entry of a user that belongs to the user's current
   device: reports it through an XMsg request and remembers that a request was issued. */

typedef struct Entry_8255B938 {
    void *owner;     /* 0x0 */
    unsigned int id; /* 0x4 */
    int state;       /* 0x8 */
} Entry_8255B938;

typedef struct Row_8255B938 {
    Entry_8255B938 entries[50]; /* 0x000 */
    char result[0x1c];          /* 0x258 */
    int issued;                 /* 0x274 */
    unsigned int user;          /* 0x278 */
    unsigned int id;            /* 0x27c */
} Row_8255B938;

typedef struct ShortRow_8255B938 {
    Entry_8255B938 entries[5]; /* 0x00 */
    char result[0x1c];         /* 0x3c */
    int issued;                /* 0x58 */
    unsigned int user;         /* 0x5c */
    unsigned int id;           /* 0x60 */
} ShortRow_8255B938;

typedef struct Tables_8255B938 {
    Row_8255B938 rows[4];           /* 0x000 */
    ShortRow_8255B938 shortRows[4]; /* 0xa00 */
} Tables_8255B938;

extern Tables_8255B938 lbl_8327FFF8;
extern void *lbl_83265988;
extern void *fn_828EB518(unsigned int index);
extern unsigned char fn_828EA608(void *device);
extern unsigned int fn_82A1BDD0(unsigned int kind, void *request, void *result);
extern void *memset(void *dest, int value, unsigned int size);

void fn_8255B938(unsigned char user)
{
    void *device;
    int i;

    if (user == 0xff) {
        device = lbl_83265988;
    } else {
        device = fn_828EB518(user);
    }
    for (i = 0; i < 5; i++) {
        if (lbl_8327FFF8.shortRows[user].entries[i].state != 0) {
            if (device != 0 && fn_828EA608(device) &&
                lbl_8327FFF8.shortRows[user].entries[i].owner == device) {
                lbl_8327FFF8.shortRows[user].user = user;
                lbl_8327FFF8.shortRows[user].id = lbl_8327FFF8.shortRows[user].entries[i].id;
                memset(lbl_8327FFF8.shortRows[user].result, 0, 0x1c);
                fn_82A1BDD0(1, &lbl_8327FFF8.shortRows[user].user, lbl_8327FFF8.shortRows[user].result);
                lbl_8327FFF8.shortRows[user].entries[i].state = 0;
                lbl_8327FFF8.shortRows[user].issued = 1;
                return;
            }
            lbl_8327FFF8.shortRows[user].entries[i].state = 0;
        }
    }
    lbl_8327FFF8.shortRows[user].issued = 0;
}
