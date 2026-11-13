typedef struct Request_82BEF228 {
    char pad0[0x10];
    int status;            /* 0x10 */
} Request_82BEF228;

typedef struct Download_82BEF228 {
    char pad0[0x10];
    int state;             /* 0x10 */
    char pad14[0x1c];
    Request_82BEF228 *request;   /* 0x30 */
    int mode;              /* 0x34 */
} Download_82BEF228;

extern char lbl_82196582[];
extern int fn_82BE5240(Download_82BEF228 *self, int code, const char *message);

int fn_82BEF228(Download_82BEF228 *self)
{
    if (self->request != 0) {
        switch (self->request->status) {
        case 0x17:
            self->state = 0x12;
            break;
        case 0x18:
            if (self->mode == 2) {
                fn_82BE5240(self, 0x194, lbl_82196582);
                self->request = 0;
                self->state = 0;
            } else {
                fn_82BE5240(self, 0x194, lbl_82196582);
                self->state = 0x14;
            }
            break;
        }
        return 0;
    }
    self->state = 1;
    return fn_82BE5240(self, 0x193, "Failed in Download");
}
