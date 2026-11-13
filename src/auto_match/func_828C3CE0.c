typedef struct Prop_828C3CE0 Prop_828C3CE0;
extern unsigned char fn_828AD488(void *src);
extern void *fn_8265C9E0(unsigned size);
extern Prop_828C3CE0 *fn_828B84A8(void *mem, void *src);
extern void fn_828B6408(void *dst, Prop_828C3CE0 *p);
extern void fn_82923B38(void *dst);

void *fn_828C3CE0(void *param_1, void *param_2)
{
    if (fn_828AD488(param_2)) {
        void *mem = fn_8265C9E0(0x50);
        Prop_828C3CE0 *p;
        if (mem != 0)
            p = fn_828B84A8(mem, param_2);
        else
            p = 0;
        fn_828B6408(param_1, p);
    } else {
        fn_82923B38(param_1);
    }
    return param_1;
}
