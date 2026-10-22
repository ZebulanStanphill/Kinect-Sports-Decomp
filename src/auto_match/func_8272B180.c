void fn_8272AE30(void *p);
void fn_8267BE38(void *p);

typedef struct S {
    void *obj;
    unsigned char active;
} S;

void fn_8272B180(S *s, void *obj, unsigned char flag)
{
    void *cur = s->obj;
    if (cur != obj) {
        if (cur != 0 && s->active) {
            s->active = 0;
            fn_8272AE30(cur);
            fn_8267BE38(cur);
        }
        s->obj = obj;
    }
    s->active = obj != 0 && flag;
}
