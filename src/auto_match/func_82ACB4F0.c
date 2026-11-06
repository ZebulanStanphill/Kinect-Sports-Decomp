typedef struct Node_82ACB4F0 {
    struct Ref_82ACB4F0 *refs;      /* +0x00 */
    char pad4[4];
    unsigned int pad8_hi : 18;
    unsigned int kind : 7;          /* +0x08 */
    unsigned int pad8_lo : 7;
    char padc[4];
    unsigned int w10;               /* +0x10 */
    unsigned int pad14_hi : 19;
    unsigned int id : 13;           /* +0x14 */
    char pad18[0x24 - 0x18];
    unsigned int link;              /* +0x24 */
} Node_82ACB4F0;

typedef struct Ref_82ACB4F0 {
    struct Ref_82ACB4F0 *next0;
    struct Ref_82ACB4F0 *next;      /* +4 */
    int pad8;
    Node_82ACB4F0 *target;          /* +0xc */
} Ref_82ACB4F0;

typedef struct {
    char pad[0x18];
    unsigned int first;             /* +0x18 */
    unsigned int last;              /* +0x1c */
} List_82ACB4F0;

extern Node_82ACB4F0 *fn_82ABE6D0(Node_82ACB4F0 *);
extern unsigned char fn_82AE91E8(Node_82ACB4F0 *);
extern unsigned char fn_82AE9600(void *, Node_82ACB4F0 *, Node_82ACB4F0 *);

static __forceinline int notNull(Ref_82ACB4F0 *p) { if (p) return 1; return 0; }
static __forceinline unsigned char InA(unsigned int k) { return k >= 1 && k <= 0x1f; }
static __forceinline unsigned char InB(unsigned int k) { return k >= 0x20 && k <= 0x52; }
#define L(n) ((Node_82ACB4F0 *)((unsigned int)(n) & 0xfffffffe))
void fn_82ACB4F0(void *a, List_82ACB4F0 *list, unsigned char flag)
{
    unsigned int cnt = 0;
    unsigned int t;
    Node_82ACB4F0 *node;

    if ((list->last & 1) == 0) {
        t = list->first;
        while ((node = (Node_82ACB4F0 *)((t & 0xfffffffe) - 0x28)) != 0) {
            if (node->kind != 0x7e) {
                unsigned int next = cnt + 1;
                if (InB(node->kind) && (L(node)->link & 1) == 0) {
                    Node_82ACB4F0 *n2 = (Node_82ACB4F0 *)((L(node)->link & 0xfffffffe) - 0x28);
                    if (n2 != 0 && InA(n2->kind)) {
                        unsigned char r = 0;
                        if (node == fn_82ABE6D0(n2)) {
                            r = 1;
                        } else if (flag != 0 && fn_82AE91E8(n2) != 0) {
                            Ref_82ACB4F0 *it;
                            unsigned char found;
                            for (it = node->refs; notNull(it); it = it->next) {
                                if (it->target == n2) {
                                    found = 1;
                                    goto done;
                                }
                            }
                            found = 0;
done:
                            if (!found) {
                                r = fn_82AE9600(a, n2, node);
                            }
                        }
                        if (r != 0) {
                            next = cnt;
                        }
                    }
                }
                node->w10 = node->w10 | 0x1000000;
                node->id = cnt;
                cnt = next;
            }
            t = L(node)->link;
            if ((t & 1) != 0) {
                break;
            }
        }
    }
}
