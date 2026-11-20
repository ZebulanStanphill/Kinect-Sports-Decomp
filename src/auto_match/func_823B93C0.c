long _InterlockedCompareExchange(long *, long, long);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_823B93C0 Node_823B93C0;
typedef struct Group_823B93C0 Group_823B93C0;

typedef struct List_823B93C0 {
    Node_823B93C0 *next; /* 0x0 */
    Node_823B93C0 *prev; /* 0x4 */
    long lock;           /* 0x8 */
} List_823B93C0;

struct Node_823B93C0 {
    Node_823B93C0 *next;   /* 0x0 */
    Node_823B93C0 *prev;   /* 0x4 */
    Group_823B93C0 *group; /* 0x8 */
};

struct Group_823B93C0 {
    int pad0;           /* 0x0 */
    List_823B93C0 list; /* 0x4 */
};

static __forceinline void Acquire(List_823B93C0 *list)
{
    while (_InterlockedCompareExchange(&list->lock, 1, 0) != 0) {
    }
    __lwsync();
}

static __forceinline void Release(List_823B93C0 *list)
{
    __lwsync();
    list->lock = 0;
}

void fn_823B93C0(Node_823B93C0 *self, char *owner)
{
    Group_823B93C0 *group = owner ? (Group_823B93C0 *)(owner + 0x68) : 0;
    List_823B93C0 *list;
    Node_823B93C0 *head;
    Node_823B93C0 *next;

    if (group == self->group) {
        return;
    }
    if (self->group) {
        list = &self->group->list;
        Acquire(list);
        self->next->prev = self->prev;
        self->prev->next = self->next;
        Release(list);
    }
    self->group = group;
    if (group) {
        list = &group->list;
        Acquire(list);
        head = (Node_823B93C0 *)&self->group->list;
        next = head->next;
        self->prev = head;
        self->next = next;
        head->next->prev = self;
        head->next = self;
        Release(list);
    }
}
