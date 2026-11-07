typedef struct Timeval_82459CD0 {
    long tv_sec;
    long tv_usec;
} Timeval_82459CD0;

typedef struct FdSet_82459CD0 {
    unsigned int fd_count;
    unsigned int fd_array[64];
} FdSet_82459CD0;

typedef struct Obj_82459CD0 {
    double start;       /* 0x00 */
    double timeout;     /* 0x08 */
    int pad10[4];       /* 0x10 */
    unsigned int sock;  /* 0x20 */
    int pad24[24];      /* 0x24 */
    int state;          /* 0x84 */
} Obj_82459CD0;

extern double fn_82522FF0(void);
extern int fn_82CE09D0(int nfds, FdSet_82459CD0 *readfds, FdSet_82459CD0 *writefds,
                       FdSet_82459CD0 *exceptfds, Timeval_82459CD0 *timeout);
extern int fn_82CE0BE8(unsigned int s, FdSet_82459CD0 *set);

void fn_82459CD0(Obj_82459CD0 *p)
{
    int r;

    if (fn_82522FF0() - p->start < p->timeout) {
        Timeval_82459CD0 tv = {0};
        FdSet_82459CD0 set;

        set.fd_array[0] = p->sock;
        set.fd_count = 1;
        r = fn_82CE09D0(0, 0, &set, 0, &tv);
        if (r == -1) {
            p->state = 0xd;
            return;
        }
        if (r > 0) {
            if (fn_82CE0BE8(p->sock, &set) != 0) {
                p->state = 8;
            } else {
                p->state = 0xd;
            }
        }
    } else {
        p->state = 0xc;
    }
}
