typedef struct S { char pad[0x110]; int *data; int n; } S;
extern int fn_82958950(S *s, int k);

int fn_8295A330(S *s, int v)
{
    int hr = fn_82958950(s, 1);
    if (hr >= 0) {
        hr = 0;
        s->data[s->n] = v;
        s->n++;
    }
    return hr;
}
