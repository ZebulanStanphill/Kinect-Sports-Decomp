/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock {
    int pad[2];
    int owner;
} Lock;

typedef struct Link {
    struct Link *next;
    struct Link *prev;
} Link;

typedef struct Target Target;
typedef struct TargetVtbl {
    void *f0;
    void (*attach)(Target *t, void *p);
} TargetVtbl;

struct Target {
    TargetVtbl *vtbl;
    Link list;
};

typedef struct Node {
    Link link;
    Target *target;
    int pad;
    int data;
} Node;

extern void fn_822B1B90(Lock **out, Link *list);

void fn_822B1A68(Node *n, Target *t)
{
    Lock *lock;
    Link *head;
    Link *next;

    if (t != n->target) {
        if (n->target != 0) {
            fn_822B1B90(&lock, &n->target->list);
            n->link.next->prev = n->link.prev;
            n->link.prev->next = n->link.next;
            __lwsync();
            lock->owner = 0;
        }
        n->target = t;
        if (t != 0) {
            fn_822B1B90(&lock, &t->list);
            head = &n->target->list;
            next = head->next;
            n->link.prev = head;
            n->link.next = next;
            head->next->prev = &n->link;
            head->next = &n->link;
            __lwsync();
            lock->owner = 0;
        }
    }
    t->vtbl->attach(t, &n->data);
}
