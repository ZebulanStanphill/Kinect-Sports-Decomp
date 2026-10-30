typedef struct Sub_828CDCC0 {
    int x;
    int y;
} Sub_828CDCC0;
typedef struct Val_828CDCC0 {
    int a;
    Sub_828CDCC0 sub;
} Val_828CDCC0;
typedef struct Node_828CDCC0 {
    int pad[3];
    Val_828CDCC0 val;
} Node_828CDCC0;
extern Node_828CDCC0 *fn_828CCBC0(void);
extern void fn_828CCCC0(Sub_828CDCC0 *s, int a, int b, int c);

Node_828CDCC0 *fn_828CDCC0(void *param_1, int *param_2)
{
    Node_828CDCC0 *n;
    Val_828CDCC0 *v;
    Sub_828CDCC0 *s;

    n = fn_828CCBC0();
    v = &n->val;
    if (v != 0) {
        v->a = param_2[0];
        s = &v->sub;
        s->x = 0;
        s->y = 0;
        fn_828CCCC0(s, param_2[1], param_2[2], 0);
    }
    return n;
}
