long _InterlockedDecrement(long volatile *addend);

typedef struct Manager_825220C8 {
    char pad0[0x88];
    unsigned char pending[0x18];
    long count;
} Manager_825220C8;

typedef struct Owner_825220C8 {
    int user;
} Owner_825220C8;

typedef struct Request_825220C8 {
    int pad0;
    Owner_825220C8 *owner;
} Request_825220C8;

extern Manager_825220C8 *lbl_832767C8;
extern int fn_823AB478(int user);
extern void fn_82522430(Manager_825220C8 *mgr, Request_825220C8 *req);

void fn_825220C8(Request_825220C8 *req)
{
    int index = fn_823AB478(req->owner->user);
    fn_82522430(lbl_832767C8, req);
    if (lbl_832767C8->pending[index] != 0) {
        lbl_832767C8->pending[index] = 0;
    } else {
        _InterlockedDecrement(&lbl_832767C8->count);
    }
}
