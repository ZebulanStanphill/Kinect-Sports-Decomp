typedef struct S { char pad[0x5c]; int *data; int n; } S;
extern int fn_828FDE70(S *s, int k);

int fn_828FDF18(S *s, int v)
{
    int hr = fn_828FDE70(s, 1);
    if (hr >= 0) {
        hr = 0;
        s->data[s->n] = v;
        s->n++;
    }
    return hr;
}
