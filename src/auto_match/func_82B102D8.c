typedef unsigned int uint;
extern void fn_82B0FD38(void *, void *);
typedef struct Node Node;
typedef struct Link Link;
struct Node { Link *first; Link *links; uint bits; };
struct Link { uint bits; Link *next; Link *other; Node *source; Node *target; };
static int notNull(Link *p) { if (p) return 1; return 0; }
void fn_82B102D8(void *ctx, Node *o) {
    Link *link;
    Node *child;
    fn_82B0FD38(ctx, o);
    if ((o->bits & 0x3f80) == 0x3700) {
        for (link = o->first; notNull(link); link = link->next) {
            if ((link->bits & 0xe000000) &&
                !(unsigned char)((link->source->bits >> 23) & 1) &&
                (unsigned char)((link->source->bits >> 24) & 1))
                fn_82B0FD38(ctx, link->source);
        }
    } else {
        for (link = o->links; link; link = link->other) {
            child = link->target;
            if (child && (link->bits & 0xe000000) && (child->bits & 0x3f80) == 0x3700) {
                if (!(unsigned char)((child->bits >> 23) & 1) &&
                    (unsigned char)((child->bits >> 24) & 1))
                    fn_82B102D8(ctx, child);
                return;
            }
        }
    }
}
