#include <deque>
#include <string.h>

// Element type is a placeholder: deque elements are > 8 bytes (one per block) with a 0x2a-byte record at +0x18.
struct Rec_828B4718 {
    unsigned short v[21];
};

struct Elem_828B4718 {
    unsigned char head[0x18];
    Rec_828B4718 rec;
};

struct Owner_828B4718 {
    int a;
    int b;
    std::deque<Elem_828B4718> queue;
};

extern "C" void fn_8223C3D0(unsigned char **buf, unsigned int size);
extern "C" void fn_828B3E88(std::deque<Elem_828B4718> *q);

extern "C" int fn_828B4718(Owner_828B4718 *param_1, unsigned char **param_2, unsigned int *param_3)
{
    unsigned int n = param_1->queue.size();
    *param_3 = n;
    if (n == 0) {
        return 0;
    }
    fn_8223C3D0(param_2, n * 0x2a);
    unsigned int k = 0;
    for (std::deque<Elem_828B4718>::iterator it = param_1->queue.begin(); it != param_1->queue.end(); ++it) {
        const Elem_828B4718 &e = *it;
        memcpy(&((Rec_828B4718 *)*param_2)[k], &e.rec, sizeof(Rec_828B4718));
        k++;
    }
    fn_828B3E88(&param_1->queue);
    return 1;
}
