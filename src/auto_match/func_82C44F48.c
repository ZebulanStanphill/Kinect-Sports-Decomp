typedef struct {
    unsigned int begin;
    unsigned int end;
    int pad8;
    int lock;
} Pool;

extern int fn_82A1F238();
extern int fn_82BA02A8();

void fn_82C44F48(Pool *p, unsigned int x)
{
    if (p != 0 && x >= p->begin && x < p->end) {
        fn_82BA02A8(p->lock);
        return;
    }
    fn_82BA02A8(p->lock, x);
    fn_82A1F238(x);
}
