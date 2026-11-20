#define __lwsync() __emit(0x7C2004AC)

extern "C" void fn_822315A0(void *p);

struct Buffer_8251F8E0 {
    int size;   /* 0x0 */
    void *data; /* 0x4 */

    Buffer_8251F8E0() : size(0), data(0)
    {
    }

    ~Buffer_8251F8E0()
    {
        if (data != 0) {
            fn_822315A0(data);
        }
    }
};

struct Job_8251F8E0 {
    int m0;             /* 0x0 */
    int m4;             /* 0x4 */
    int *out;           /* 0x8 */
    unsigned int name;  /* 0xc */
    void (*callback)(); /* 0x10 */
    void *context;      /* 0x14 */
    void *done;         /* 0x18 */
    char pad1c[0x134 - 0x1c];
    Buffer_8251F8E0 buffer; /* 0x134 */
    int m13c;               /* 0x13c */
    int pad140;             /* 0x140 */
    int m144;               /* 0x144 */
};

typedef struct Path_8251F548 {
    int words[8];
} Path_8251F548;

typedef struct Player_8251F8E0 {
    char pad0[0xd8];
    unsigned char busy; /* 0xd8 */
    char pad_d9[0x124 - 0xd9];
    int stream; /* 0x124 */
} Player_8251F8E0;

extern "C" void __emit(unsigned int);
extern "C" Player_8251F8E0 *lbl_83265988;
extern "C" void *lbl_83265A24;
extern "C" void *lbl_832961CC;
extern "C" void XMemSet(void *dst, int value, unsigned int size);
extern "C" Path_8251F548 *fn_825200F0(Path_8251F548 *out, unsigned int *name);
extern "C" void fn_8251F658();
extern "C" int fn_827D5C00(void *queue, Path_8251F548 *path, int priority, int kind, int a5, int a6, int a7,
                           void *async, void (*handler)(), Job_8251F8E0 *job, int a11);
extern "C" unsigned char fn_828EA610(Player_8251F8E0 *player);
extern "C" unsigned int fn_82AB8588(Player_8251F8E0 *player);
extern "C" Player_8251F8E0 *fn_828EB518(unsigned int index);
extern "C" void *fn_82520018();
extern "C" void fn_82599418();
extern "C" unsigned int fn_82A1E650(void *event, unsigned int timeout);
extern "C" void fn_82558B08();
extern "C" void fn_82BFE128(void *pool, void *event);

extern "C" int fn_8251F8E0(unsigned int *name, Player_8251F8E0 *player)
{
    int result = 0;
    Path_8251F548 path;

    fn_825200F0(&path, name);
    Job_8251F8E0 job;
    XMemSet(&job, 0, 0x148);
    job.out = &result;
    job.m13c = 1;
    job.name = *name;
    if (player == 0) {
        player = lbl_83265988;
    }
    if (fn_828EA610(player) != 0) {
        player = fn_828EB518(fn_82AB8588(player));
    }
    int stream = player->stream;
    if (stream == 0) {
        return 0;
    }
    if (player->busy != 0) {
        return 0;
    }
    if (player->stream == -1) {
        return 0;
    }
    job.done = fn_82520018();
    __lwsync();
    if (fn_827D5C00(lbl_83265A24, &path, stream, 2, 1, 1, 1, 0, fn_8251F658, &job, 0) != 0xb7) {
        fn_82599418();
        if (fn_82A1E650(job.done, 0) != 0) {
            while (fn_82A1E650(job.done, 1) == 0x102) {
                fn_82558B08();
            }
        }
    }
    fn_82BFE128(lbl_832961CC, job.done);
    return result;
}
