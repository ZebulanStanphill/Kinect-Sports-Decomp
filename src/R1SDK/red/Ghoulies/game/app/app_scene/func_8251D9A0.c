typedef struct Queue_8251D9A0 {
    int slots[9]; // 0x0
    int count;    // 0x24
} Queue_8251D9A0;

typedef struct Owner_8251D9A0 {
    char pad[4];
    Queue_8251D9A0 *queue;
} Owner_8251D9A0;

typedef struct Scene_8251D9A0 {
    char pad0[4];
    int state; // 0x4
    char pad1[4];
    int waiting; // 0xc
    char pad2[8];
    int transition; // 0x18
    char pad3[4];
    int opening; // 0x20
    int paused;  // 0x24
    char pad4[0xc4];
    Owner_8251D9A0 *owner; // 0xec
} Scene_8251D9A0;

typedef struct Callbacks_8251D9A0 {
    char pad0[4];
    void (*open)(int, unsigned char, int, const char *, const char *, int); // 0x4
    char pad1[0x18];
    int (*poll)(void); // 0x20
} Callbacks_8251D9A0;

extern Scene_8251D9A0 lbl_832960A0;
extern Callbacks_8251D9A0 lbl_83276774;
extern void *lbl_8327F680[];
extern unsigned char lbl_83297830;
extern int fn_825269D0(int index, int arg);

void fn_8251D9A0(void)
{
    Scene_8251D9A0 *scene = &lbl_832960A0;
    if (scene->waiting) {
        int done = lbl_83276774.poll != 0 ? lbl_83276774.poll() : 0;
        if (done || !scene->paused) {
            scene->state = 2;
            scene->waiting = 0;
        }
    } else {
        int transition = scene->transition > 0;
        Queue_8251D9A0 *queue;

        if (scene->opening) {
            if (lbl_83276774.open != 0)
                lbl_83276774.open(1, (unsigned char)transition, 0, "meTickOpeningTransition",
                                  "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\app\\app_scene.cpp",
                                  3211);
        } else if (!lbl_83297830 && lbl_8327F680[0xb4 / 4] != 0) {
            fn_825269D0(45, 0);
            lbl_83297830 = 1;
        } else if (lbl_83276774.open != 0) {
            lbl_83276774.open(0, (unsigned char)transition, 0, "meTickOpeningTransition",
                              "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\app\\app_scene.cpp",
                              3224);
        }
        scene->opening = 0;
        scene->waiting = 1;
        if ((scene->owner ? scene->owner->queue : 0) != 0) {
            int count;
            queue = scene->owner ? scene->owner->queue : 0;
            count = queue->count;
            if (count <= 0 || queue->slots[count + 4] != 0) {
                queue->slots[count + 5] = 0;
                ++queue->count;
            }
        }
    }
}
