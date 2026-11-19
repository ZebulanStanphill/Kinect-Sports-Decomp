typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern int *fn_82579288(void *);
extern int fn_825795A8(int *, const __vector4 *, const __vector4 *, int);
extern void XMemCpy(void *, const void *, unsigned int);

int fn_8242E320(char *self, __vector4 *out, unsigned char *flag, __vector4 start, __vector4 end)
{
    int owner = *(int *)(*(int *)(self + 0x174) + 0x9c);
    __vector4 endPoint = end;
    __vector4 startPoint = start;
    __declspec(align(16)) unsigned char hit[128];
    int *query = fn_82579288(*(void **)(owner + 0x6d0));
    int result = 0;
    if (fn_825795A8(query, &startPoint, &endPoint, -1) == 1) {
        XMemCpy(hit, *(void **)(query[4] + 4), 128);
        if (flag) {
            *flag = hit[35];
        }
        if (out) {
            *out = *(__vector4 *)hit;
        }
        result = 1;
    }
    *(unsigned short *)((char *)query + 0x19c) = 0;
    {
        int *target = &query[100];
        *target = query[99];
    }
    *(unsigned char *)(query[98] + query[0] + 0x754) = 0;
    return result;
}
