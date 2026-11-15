typedef struct Player_8228C0B0 {
    char pad0[0x40];
    unsigned int index; /* 0x40 */
    char pad44[0x524 - 0x44];
    unsigned int first;  /* 0x524 */
    unsigned int second; /* 0x528 */
} Player_8228C0B0;

typedef struct Node_8228C0B0 {
    struct Node_8228C0B0 *next;     /* 0x0 */
    struct Node_8228C0B0 *previous; /* 0x4 */
    Player_8228C0B0 *player;        /* 0x8 */
} Node_8228C0B0;

typedef struct List_8228C0B0 {
    Node_8228C0B0 *head; /* 0x0 */
} List_8228C0B0;

typedef struct State_8228C0B0 {
    char pad0[0x80];
    List_8228C0B0 *players; /* 0x80 */
} State_8228C0B0;

typedef struct Handle_8228C0B0 {
    void *object; /* 0x0 */
    void *owner;  /* 0x4 */
} Handle_8228C0B0;

extern void fn_82517978(Handle_8228C0B0 *, unsigned int, unsigned int, int);
extern void *fn_8266F6B8(void);
extern void fn_826728E8(void *, const char *, void *);
extern void fn_822315A0(void *);
extern void fn_82267750(List_8228C0B0 *, int);

static __forceinline Player_8228C0B0 *FindPlayer(List_8228C0B0 *list, unsigned int index)
{
    Node_8228C0B0 *head = list->head;
    Node_8228C0B0 *node;
    for (node = head->next; node != head; node = node->next) {
        if (node->player->index == index) {
            return node->player;
        }
    }
    return 0;
}

void fn_8228C0B0(State_8228C0B0 *self)
{
    int i;
    for (i = 0; i < 3; i++) {
        if (FindPlayer(self->players, i) != 0) {
            Player_8228C0B0 *player = FindPlayer(self->players, i);
            Handle_8228C0B0 handle;
            handle.object = 0;
            handle.owner = 0;
            fn_82517978(&handle, player->first, player->second, 0);
            fn_826728E8(handle.object, "playerIcon", fn_8266F6B8());
            if (handle.owner != 0) {
                fn_822315A0(handle.owner);
            }
        }
    }
    fn_82267750(self->players, 0);
    fn_82267750(self->players, 2);
    fn_82267750(self->players, 1);
}
