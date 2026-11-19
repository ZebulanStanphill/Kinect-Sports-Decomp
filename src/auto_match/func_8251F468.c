typedef struct Job_8251F468 {
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
} Job_8251F468;

typedef struct Path_8251F468 {
    int words[8];
} Path_8251F468;

extern void *lbl_83265A24;
extern void *fn_82522D98(unsigned int size);
extern void XMemSet(void *dst, int value, unsigned int size);
extern Path_8251F468 *fn_825200F0(Path_8251F468 *out, unsigned int *name);
extern void fn_8251FC38(void);
extern unsigned int fn_827D5C00(void *queue, Path_8251F468 *path, int priority, int kind, int a5, int a6,
                                int a7, void *async, void (*handler)(void), Job_8251F468 *job, int a11);
extern void fn_82599418(void);
extern unsigned int fn_82A1BB18(void);
extern void *fn_8259A230(unsigned int threadId);
extern void fn_82558B08(void);

unsigned int fn_8251F468(unsigned int *name, void **out, int kind, void *async, void (*callback)(void),
                         void *context, int m144, int m13c)
{
    Job_8251F468 *job;
    Path_8251F468 path;
    unsigned int result;

    job = (Job_8251F468 *)fn_82522D98(0x148);
    XMemSet(job, 0, 0x148);
    job->out = out;
    job->callback = callback;
    job->context = context;
    job->m144 = m144;
    job->m13c = m13c;
    job->name = *name;
    fn_825200F0(&path, name);
    result = fn_827D5C00(lbl_83265A24, &path, -1, kind, 0, 1, 1, async, fn_8251FC38, job, 0);
    if (result != 0xb7) {
        fn_82599418();
    }
    if (fn_8259A230(fn_82A1BB18()) == 0) {
        fn_82558B08();
    }
    return result;
}
