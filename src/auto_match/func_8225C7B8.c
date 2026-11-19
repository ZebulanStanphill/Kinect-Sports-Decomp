typedef struct Overlapped_8225C7B8 {
    unsigned int status; /* 0x00 */
    char pad4[0x18];
} Overlapped_8225C7B8;

typedef struct Request_8225C7B8 {
    char buffer[0x3e8];             /* 0x000 */
    Overlapped_8225C7B8 overlapped; /* 0x3e8 */
    char pad404[0x4];
    int done;      /* 0x408 */
    int remaining; /* 0x40c */
} Request_8225C7B8;

typedef struct User_8225C7B8 {
    char pad0[0xd8];
    unsigned char offline; /* 0xd8 */
} User_8225C7B8;

typedef struct Node_8225C7B8 {
    struct Node_8225C7B8 *left;   /* 0x00 */
    struct Node_8225C7B8 *parent; /* 0x04 */
    struct Node_8225C7B8 *right;  /* 0x08 */
    User_8225C7B8 *user;          /* 0x0c */
    Request_8225C7B8 *request;    /* 0x10 */
} Node_8225C7B8;

typedef struct Manager_8225C7B8 {
    char pad0[0x4c];
    Node_8225C7B8 *head; /* 0x4c */
} Manager_8225C7B8;

extern int lbl_8327F640;
extern void *XMemSet(void *dest, int value, unsigned int count);
extern int fn_82A1C098(Overlapped_8225C7B8 *overlapped);
extern unsigned char fn_828EA5F8(User_8225C7B8 *user);
extern int fn_823AB478(User_8225C7B8 *user);
extern void fn_82A81AF0(int handle, Request_8225C7B8 *request, Overlapped_8225C7B8 *overlapped);
extern void fn_82A81B88(int a, int b, Request_8225C7B8 *request, Overlapped_8225C7B8 *overlapped);
extern void fn_82381BC0(Node_8225C7B8 **it);

void fn_8225C7B8(Manager_8225C7B8 *self)
{
    Node_8225C7B8 *it;
    Request_8225C7B8 *request;
    User_8225C7B8 *user;
    int failed;
    int full;

    if (lbl_8327F640 == 0) {
        return;
    }
    for (it = self->head->left; it != self->head;) {
        request = it->request;
        user = it->user;
        if (request->done != 0) {
            fn_82381BC0(&it);
            continue;
        }
        failed = 0;
        full = (unsigned int)request->remaining >= 3;
        if (!full && request->overlapped.status != 0x3e5) {
            failed = (unsigned int)fn_82A1C098(&request->overlapped) >> 31;
            if (!failed || request->remaining <= 0) {
                request->done = 1;
            }
        }
        if (request->remaining > 0 && (failed || full)) {
            Overlapped_8225C7B8 *overlapped;

            XMemSet(request, 0, 0x3e8);
            overlapped = &request->overlapped;
            XMemSet(overlapped, 0, 0x1c);
            if (user->offline == 0 && fn_828EA5F8(user) != 0) {
                fn_82A81AF0(fn_823AB478(user), request, overlapped);
            } else {
                fn_82A81B88(3, 1, request, overlapped);
            }
            request->remaining--;
        }
        fn_82381BC0(&it);
    }
}
