inline void *operator new(unsigned int, void *p) throw() { return p; }
struct Rec_826A3200 {
    char c;
    Rec_826A3200() : c(0) {}
};
struct Vec_826A3200 {
    char pad0[0x34];
    Rec_826A3200 **data;
    int size;
};
extern "C" {
Rec_826A3200 *fn_8267BED0(Vec_826A3200 *, int, int *);
void fn_82695FA0(Rec_826A3200 *, int);
void fn_826A2CB0(Vec_826A3200 *, int);
void fn_826A3200(Vec_826A3200 *v, int idx, int arg)
{
    if (idx >= v->size) {
        fn_826A2CB0(v, idx + 1);
    }
    int off = idx * 4;
    if (*(Rec_826A3200 **)((char *)v->data + off) == 0) {
        int t = 0x143;
        Rec_826A3200 *p = fn_8267BED0(v, 0x10, &t);
        Rec_826A3200 *r = p ? new (p) Rec_826A3200() : 0;
        *(Rec_826A3200 **)((char *)v->data + off) = r;
    }
    fn_82695FA0(*(Rec_826A3200 **)((char *)v->data + off), arg);
}
}
