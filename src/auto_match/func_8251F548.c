typedef struct Job_8251F548 {
    int m0;                 /* 0x0 */
    int m4;                 /* 0x4 */
    void **out;             /* 0x8 */
    unsigned int name;      /* 0xc */
    void (*callback)(void); /* 0x10 */
    void *context;          /* 0x14 */
    char pad18[0x13c - 0x18];
    int m13c;   /* 0x13c */
    int pad140; /* 0x140 */
    int m144;   /* 0x144 */
} Job_8251F548;

typedef struct Path_8251F548 {
    int words[8];
} Path_8251F548;

typedef struct Player_8251F548 {
    char pad0[0xd8];
    unsigned char busy; /* 0xd8 */
    char pad_d9[0x120 - 0xd9];
    int stream; /* 0x120 */
} Player_8251F548;

extern Player_8251F548 *lbl_83265988;
extern void *lbl_83265A24;
extern void *fn_82522D98(unsigned int size);
extern void XMemSet(void *dst, int value, unsigned int size);
extern Path_8251F548 *fn_825200F0(Path_8251F548 *out, unsigned int *name);
extern void fn_8225BCF8(void);
extern void fn_8251FC38(void);
extern int fn_827D5C00(void *queue, Path_8251F548 *path, int priority, int kind, int a5, int a6, int a7,
                       void *async, void (*handler)(void), Job_8251F548 *job, int a11);
extern unsigned char fn_828EA610(Player_8251F548 *player);
extern void fn_82522ED8(Job_8251F548 *job);
extern void fn_82599418(void);
extern unsigned int fn_82A1BB18(void);
extern void *fn_8259A230(unsigned int threadId);
extern void fn_82558B08(void);

int fn_8251F548(unsigned int *name, void *context, Player_8251F548 *player)
{
    Job_8251F548 *job;
    Path_8251F548 path;

    fn_825200F0(&path, name);
    job = (Job_8251F548 *)fn_82522D98(0x148);
    XMemSet(job, 0, 0x148);
    job->context = context;
    job->out = 0;
    job->callback = fn_8225BCF8;
    job->m13c = 1;
    job->name = *name;
    if (player == 0) {
        player = lbl_83265988;
    }
    if (player->busy == 0 && fn_828EA610(player) == 0 && player->stream != -1) {
        if (fn_827D5C00(lbl_83265A24, &path, player->stream, -1, 0, 1, 1, 0, fn_8251FC38, job, 0) != 0xb7) {
            fn_82599418();
        }
        if (fn_8259A230(fn_82A1BB18()) == 0) {
            fn_82558B08();
        }
        return 1;
    }
    fn_82522ED8(job);
    return 0;
}
