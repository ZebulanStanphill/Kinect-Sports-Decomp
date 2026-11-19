struct Player_82359718;
typedef struct Game_82359718 Game_82359718;

struct Player_82359718 {
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0C();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void Slot1C();
    virtual void Slot20();
    virtual void Slot24();
    virtual void Slot28();
    virtual void Slot2C();
    virtual void Slot30();
    virtual void Slot34();
    virtual void Slot38();
    virtual void Slot3C();
    virtual void Activate(); /* 0x40 */
    char pad004[0x7c];
    Game_82359718 *game; /* 0x80 */
};

typedef struct Node_82359718 {
    struct Node_82359718 *next; /* 0x0 */
    char pad004[0x10];
    Player_82359718 *player; /* 0x14 */
} Node_82359718;

typedef struct Tree_82359718 {
    int pad0;
    Node_82359718 *head; /* 0x4 */
} Tree_82359718;

typedef struct Controller_82359718 {
    char pad000[0x14];
    void *device; /* 0x14 */
} Controller_82359718;

typedef struct Group_82359718 {
    Controller_82359718 **begin; /* 0x0 */
    Controller_82359718 **end;   /* 0x4 */
} Group_82359718;

typedef struct GameVt_82359718 {
    char pad000[0x94];
    int (*IsReady)(Game_82359718 *self); /* 0x94 */
    char pad098[0x20];
    Player_82359718 *(*CreatePlayer)(Game_82359718 *self, void *session); /* 0xb8 */
    int (*GetPlayerKind)(Game_82359718 *self);                            /* 0xbc */
} GameVt_82359718;

struct Game_82359718 {
    GameVt_82359718 *vt; /* 0x0 */
    void *session;       /* 0x4 */
    char pad008[0x18];
    Group_82359718 **groupsBegin; /* 0x20 */
    Group_82359718 **groupsEnd;   /* 0x24 */
    char pad028[0x5c];
    Player_82359718 *player; /* 0x84 */
    int started;             /* 0x88 */
};

typedef struct Inst_82359718 {
    char pad0[4];
    unsigned char active; /* 0x4 */
} Inst_82359718;

extern "C" Inst_82359718 *lbl_832975B0;
extern "C" Inst_82359718 *fn_82250A18(void);
extern "C" unsigned char fn_828AD740(void *session);
extern "C" unsigned char fn_828ACCE8(void *session);
extern "C" void fn_828904D8(Player_82359718 *player);
extern "C" void *fn_828A12E8(void *session);
extern "C" Tree_82359718 *fn_8288F948(void *owner, int kind);
extern "C" unsigned char fn_8288B760(void *device);
extern "C" unsigned char fn_8288D868(void *device);

static __forceinline Inst_82359718 *GetInst_82359718(void)
{
    return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

extern "C" void fn_82359718(Game_82359718 *self)
{
    int ok;
    unsigned char local;
    Player_82359718 *player;
    Group_82359718 **group;
    Controller_82359718 **controller;
    Controller_82359718 *entry;
    Tree_82359718 *tree;
    Node_82359718 *head;
    Node_82359718 *first;
    void *session;
    int kind;

    ok = 1;
    if (GetInst_82359718()->active != 0) {
        if ((int)self->player == 0) {
            local = fn_828AD740(self->session);
            session = self->session;
            if (fn_828ACCE8(session) == 0) {
                return;
            }
            if (local != 0) {
                player = self->vt->CreatePlayer(self, self->session);
                self->player = player;
                player->Activate();
                fn_828904D8(player);
            } else {
                session = self->session;
                kind = self->vt->GetPlayerKind(self);
                tree = fn_8288F948(fn_828A12E8(session), kind);
                head = tree->head;
                first = head->next;
                if (first == head) {
                    return;
                }
                player = first->player;
                self->player = player;
                player->game = self;
                player->Activate();
            }
        }
        for (group = self->groupsBegin; group != self->groupsEnd; group++) {
            for (controller = (*group)->begin; controller != (*group)->end; controller++) {
                entry = *controller;
                if (entry->device == 0 ||
                    (fn_8288B760(entry->device) != 0 && fn_8288D868(entry->device) == 0)) {
                    ok = 0;
                    break;
                }
            }
            if (ok == 0) {
                return;
            }
        }
        if (self->vt->IsReady(self) == 0) {
            return;
        }
    }
    self->started = 1;
}
