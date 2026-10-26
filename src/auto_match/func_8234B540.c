typedef struct { char pad[0x2e]; unsigned short col; char pad2[2]; unsigned short row; char pad3[0x50]; float *vals; } T;
typedef struct { char pad[0xe8]; int on; int idx; float val; } S;
extern void fn_827F4DA8(S *s);
extern T *fn_827F3C20(S *s);

void fn_8234B540(S *s)
{
    fn_827F4DA8(s);
    if (s->on != 0) {
        T *t = fn_827F3C20(s);
        t->vals[t->row * 12 + t->col + s->idx] = s->val;
    }
}
