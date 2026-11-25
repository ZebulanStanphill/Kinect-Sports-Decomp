typedef struct SharedRef_8236C120 {
    void *object;  /* 0x0 */
    void *counter; /* 0x4 */
} SharedRef_8236C120;

typedef struct Player_8236C120 {
    char pad00[0x3c0];
    int field3C0; /* 0x3c0 */
    int field3C4; /* 0x3c4 */
} Player_8236C120;

typedef struct Vec3_8236C120 {
    float x;
    float y;
    float z;
} Vec3_8236C120;

typedef struct Settings_8236C120 {
    char pad000[0x228];
    Vec3_8236C120 origin; /* 0x228 */
    char pad234[0x4c];
} Settings_8236C120;

typedef struct TaskList_8236C120 {
    int field00; /* 0x00 */
    int field04; /* 0x04 */
    int field08; /* 0x08 */
    int field0C; /* 0x0c */
    int field10; /* 0x10 */
} TaskList_8236C120;

static __forceinline void InitTaskList(TaskList_8236C120 *list)
{
    list->field00 = 0;
    list->field04 = 0;
    list->field08 = 0;
    list->field0C = 0;
    list->field10 = 0;
}

typedef struct Task_8236C120 {
    void *vtable;           /* 0x00 */
    TaskList_8236C120 list; /* 0x04 */
    int field18;            /* 0x18 */
    int field1C;            /* 0x1c */
    int field20;            /* 0x20 */
    Vec3_8236C120 origin;   /* 0x24 */
    int active;             /* 0x30 */
    int field34;            /* 0x34 */
    int field38;            /* 0x38 */
    int field3C;            /* 0x3c */
    int field40;            /* 0x40 */
    void *owner;            /* 0x44 */
} Task_8236C120;

typedef struct Session_8236C120 {
    char pad00[0x50];
    int count; /* 0x50 */
} Session_8236C120;

typedef struct Game_8236C120 {
    char pad000[0x30];
    SharedRef_8236C120 *playersBegin; /* 0x30 */
    SharedRef_8236C120 *playersEnd;   /* 0x34 */
    char pad038[0x5c];
    Session_8236C120 *session; /* 0x94 */
    char pad098[0xdd4];
    int taskStarted; /* 0xe6c */
} Game_8236C120;

extern char lbl_821BEBF4[];
extern Settings_8236C120 lbl_831D18A8;

extern SharedRef_8236C120 *fn_82522588(SharedRef_8236C120 *out, const SharedRef_8236C120 *source);
extern void fn_822315A0(void *counter);
extern void *fn_8248F890(unsigned int size);
extern void fn_82359070(Game_8236C120 *game, Task_8236C120 *task);

static __forceinline Task_8236C120 *ConstructTask(void *memory, void *owner, float x, float y, float z)
{
    Task_8236C120 *task = memory;
    InitTaskList(&task->list);
    task->origin.x = x;
    task->origin.y = y;
    task->field1C = -1;
    task->origin.z = z;
    task->field20 = -1;
    task->active = 1;
    task->vtable = lbl_821BEBF4;
    task->field3C = 0;
    task->field40 = 0;
    task->owner = owner;
    return task;
}

void fn_8236C120(Game_8236C120 *self)
{
    SharedRef_8236C120 *it;
    Task_8236C120 *task;
    void *memory;

    if ((self->session != 0 ? self->session->count : 0) == 0) {
        return;
    }
    for (it = self->playersBegin; it != self->playersEnd; it++) {
        SharedRef_8236C120 player;
        Player_8236C120 *object = fn_82522588(&player, it)->object;
        object->field3C0 = 0;
        object->field3C4 = 0;
        if (player.counter != 0) {
            fn_822315A0(player.counter);
        }
    }
    memory = fn_8248F890(sizeof(Task_8236C120));
    if (memory != 0) {
        task =
            ConstructTask(memory, self, lbl_831D18A8.origin.x, lbl_831D18A8.origin.y, lbl_831D18A8.origin.z);
    } else {
        task = 0;
    }
    fn_82359070(self, task);
    self->taskStarted = 1;
}
