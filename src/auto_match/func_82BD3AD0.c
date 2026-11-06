typedef struct Pkt_82BD3AD0 { int state; int x4; unsigned char *data; } Pkt_82BD3AD0;
typedef struct Node_82BD3AD0 { Pkt_82BD3AD0 *pkt; struct Node_82BD3AD0 *next; } Node_82BD3AD0;
typedef struct Queue_82BD3AD0 { Node_82BD3AD0 *head; Node_82BD3AD0 *tail; } Queue_82BD3AD0;
typedef struct Cfg_82BD3AD0 { char pad[0x8c]; unsigned char channel; } Cfg_82BD3AD0;
typedef struct Conn_82BD3AD0 { unsigned int index; int pad4; Cfg_82BD3AD0 *cfg; char pad[0xc4]; unsigned int mode; } Conn_82BD3AD0;
typedef struct Mgr_82BD3AD0 { char pad[0xec]; unsigned int dirty; } Mgr_82BD3AD0;
typedef struct Obj_82BD3AD0 {
    int pad0;
    Conn_82BD3AD0 *conn;
    char pad8[0x18];
    Mgr_82BD3AD0 *mgr;
    char pad24[8];
    Queue_82BD3AD0 pending;
    Queue_82BD3AD0 sent;
    unsigned char channel;
    char pad3d;
    unsigned short seq;
} Obj_82BD3AD0;

extern void fn_82BD3A30(Obj_82BD3AD0 *o, Node_82BD3AD0 *n);

static __forceinline Node_82BD3AD0 *pop(Queue_82BD3AD0 *q)
{
    Node_82BD3AD0 *n = q->head;
    if (n != 0) {
        if (n == q->tail) {
            q->tail = 0;
        }
        q->head = n->next;
        n->next = 0;
    }
    return n;
}

static __forceinline void push(Queue_82BD3AD0 *q, Node_82BD3AD0 *n)
{
    n->next = 0;
    if (q->tail != 0) {
        q->tail->next = n;
    } else {
        q->head = n;
    }
    q->tail = n;
}

static __forceinline int notNull(Node_82BD3AD0 *n)
{
    if (n) {
        return 1;
    }
    return 0;
}

int fn_82BD3AD0(Obj_82BD3AD0 *o)
{
    Queue_82BD3AD0 *sent = &o->sent;
    Queue_82BD3AD0 *pending;
    Node_82BD3AD0 *n;
    for (n = o->sent.head; notNull(n) && n->pkt->state != 0x103; n = o->sent.head) {
        pop(sent);
        fn_82BD3A30(o, n);
    }
    pending = &o->pending;
    for (n = o->pending.head; notNull(n); n = o->pending.head) {
        Pkt_82BD3AD0 *p = n->pkt;
        unsigned char *data;
        if (p->state == 0x103) {
            break;
        }
        data = p->data;
        pop(pending);
        if (p->state == 0) {
            unsigned short *h;
            unsigned char ch = o->conn->cfg->channel;
            if (o->channel != ch) {
                o->channel = ch;
            }
            if (o->seq >= 0x800) {
                o->seq = 0;
            }
            h = (unsigned short *)(data - 2);
            *h = (unsigned short)((o->channel << 12) | (*h & 0xfff));
            *h = (unsigned short)((*h & 0xf001) | ((o->seq & 0x7ff) << 1));
            o->seq++;
            *h = (unsigned short)((*h & 0xfffe) | ((o->conn->mode & 0xf0000) == 0x10000));
            n->pkt->state = 0x103;
            n->pkt->x4 = 0;
            push(sent, n);
            o->mgr->dirty |= 1 << o->conn->index;
        } else {
            fn_82BD3A30(o, n);
        }
    }
    return 0;
}
